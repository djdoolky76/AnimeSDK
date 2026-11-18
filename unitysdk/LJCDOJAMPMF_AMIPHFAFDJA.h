#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/System/Object.h"

class LJCDOJAMPMF_OEODIEHKDIG;
namespace System { class Action; }

#define LJCDOJAMPMF_AMIPHFAFDJA_HOFIFAEOLBM_OFFSET UNITYSDK_OFFSET(0x184FB430)
#define LJCDOJAMPMF_AMIPHFAFDJA_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x184FB390)
#define LJCDOJAMPMF_AMIPHFAFDJA__CTOR_OFFSET UNITYSDK_OFFSET(0x184FB380)

inline static constexpr unsigned int LJCDOJAMPMF_AMIPHFAFDJA_TypeDefinitionIndex = 71952;

class LJCDOJAMPMF_AMIPHFAFDJA : public ::System::Object
{
public:
	::LGCNEDCMPKM IBBGKLFLAPM; // 0x10
	::LJCDOJAMPMF_OEODIEHKDIG* FGBNBFHOKAA; // 0x38
	::System::Action* FFMGICPLKFB; // 0x40
	::HOCDHMEPPEG ECLGGGCDNKC; // 0x48
	::System::Boolean MJIGJHDIOGC; // 0x78
	::System::Boolean OFPKOKAEDNA; // 0x79
	::System::Byte _padding0[0x2];
	::System::Single JJJLDPANJIG; // 0x7C
	::System::Int32 EMIHPNKBMBF; // 0x80
	::System::UInt32 JPFOHACBPCA; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCDOJAMPMF_AMIPHFAFDJA__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCDOJAMPMF_AMIPHFAFDJA_LIDNPLMPHAL_OFFSET))(this);
	}

	::System::Void HOFIFAEOLBM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCDOJAMPMF_AMIPHFAFDJA_HOFIFAEOLBM_OFFSET))(this);
	}
};
