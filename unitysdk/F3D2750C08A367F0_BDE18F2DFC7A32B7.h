#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define F3D2750C08A367F0_BDE18F2DFC7A32B7_B5725BB13D401B5A_OFFSET UNITYSDK_OFFSET(0x1AB4F10)
#define F3D2750C08A367F0_BDE18F2DFC7A32B7__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F3D2750C08A367F0_BDE18F2DFC7A32B7_TypeDefinitionIndex = 1911;

class F3D2750C08A367F0_BDE18F2DFC7A32B7 : public ::System::Object
{
public:
	::System::Int32 FEAC90E0D6EFF688; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F3D2750C08A367F0_BDE18F2DFC7A32B7__CTOR_OFFSET))(this);
	}

	::System::Boolean B5725BB13D401B5A(::System::UInt32 FF9A37DE513AC35B)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + F3D2750C08A367F0_BDE18F2DFC7A32B7_B5725BB13D401B5A_OFFSET))(this, FF9A37DE513AC35B);
	}
};
