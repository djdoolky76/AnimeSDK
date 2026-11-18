#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JJPDGONFBFB;
class OAEFGCLEHHO;
namespace System { class Action; }

#define BJKBAMNFLCA_LHKDFAGBFLL_NHDEHPKDKAN_OFFSET UNITYSDK_OFFSET(0x14256560)
#define BJKBAMNFLCA_LHKDFAGBFLL__CTOR_OFFSET UNITYSDK_OFFSET(0x14256550)

inline static constexpr unsigned int BJKBAMNFLCA_LHKDFAGBFLL_TypeDefinitionIndex = 41569;

class BJKBAMNFLCA_LHKDFAGBFLL : public ::System::Object
{
public:
	::JJPDGONFBFB* ECDFBPODEOB; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJKBAMNFLCA_LHKDFAGBFLL__CTOR_OFFSET))(this);
	}

	::System::Void NHDEHPKDKAN(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + BJKBAMNFLCA_LHKDFAGBFLL_NHDEHPKDKAN_OFFSET))(this, BHDNBGLCNOM);
	}
};
