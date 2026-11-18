#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define KGGFACGJEGE_KOGFHEPBPKD_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x157EB050)
#define KGGFACGJEGE_KOGFHEPBPKD_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x157EB030)
#define KGGFACGJEGE_KOGFHEPBPKD__CTOR_OFFSET UNITYSDK_OFFSET(0x157EB020)

inline static constexpr unsigned int KGGFACGJEGE_KOGFHEPBPKD_TypeDefinitionIndex = 59016;

class KGGFACGJEGE_KOGFHEPBPKD : public ::System::Object
{
public:
	::HOCDHMEPPEG DJPMNKCDAFL; // 0x10
	::Foundation::ViewObject::ViewObjectHandle JEJJLALJJKH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGFACGJEGE_KOGFHEPBPKD__CTOR_OFFSET))(this);
	}

	::System::Boolean LIDNPLMPHAL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGFACGJEGE_KOGFHEPBPKD_LIDNPLMPHAL_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGFACGJEGE_KOGFHEPBPKD_AAHMACBDCPN_OFFSET))(this);
	}
};
