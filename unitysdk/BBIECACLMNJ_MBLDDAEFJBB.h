#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define BBIECACLMNJ_MBLDDAEFJBB_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x12D15F20)
#define BBIECACLMNJ_MBLDDAEFJBB_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x12D15F00)
#define BBIECACLMNJ_MBLDDAEFJBB__CTOR_OFFSET UNITYSDK_OFFSET(0x12D15EF0)

inline static constexpr unsigned int BBIECACLMNJ_MBLDDAEFJBB_TypeDefinitionIndex = 58268;

class BBIECACLMNJ_MBLDDAEFJBB : public ::System::Object
{
public:
	::HOCDHMEPPEG DJPMNKCDAFL; // 0x10
	::Foundation::ViewObject::ViewObjectHandle JEJJLALJJKH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBIECACLMNJ_MBLDDAEFJBB__CTOR_OFFSET))(this);
	}

	::System::Boolean LIDNPLMPHAL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBIECACLMNJ_MBLDDAEFJBB_LIDNPLMPHAL_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBIECACLMNJ_MBLDDAEFJBB_AAHMACBDCPN_OFFSET))(this);
	}
};
