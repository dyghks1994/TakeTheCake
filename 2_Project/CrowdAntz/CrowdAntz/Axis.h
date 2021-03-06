#pragma once

/// <summary>
/// Axis Class
/// Writer : YoKing
/// 
/// 디버깅용 축 클래스
/// 
/// 
/// First Create	  : 2021.08.19
/// Last Modification : 2021.08.19
/// </summary>

#include "IObjectBase.h"

class Axis : public IObjectBase
{
public:
	Axis(class IDXObjectBase* pAxis);
	virtual ~Axis();

	virtual void Initialize() override;
	virtual void Release()  override;
	virtual void Update(class Camera* pCamera, float dTime) override;
	virtual void Render() override;

protected:

private:
	class IDXObjectBase* m_pAxis;

};