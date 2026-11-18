#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define HHOBGKLENPF_CHLJHANNGLJ_GGCGCICEFNK_OFFSET UNITYSDK_OFFSET(0x17B00A50)
#define HHOBGKLENPF_CHLJHANNGLJ_OHCFGAEMGLB_OFFSET UNITYSDK_OFFSET(0x17B00A30)
#define HHOBGKLENPF_CHLJHANNGLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17B00A20)

inline static constexpr unsigned int HHOBGKLENPF_CHLJHANNGLJ_TypeDefinitionIndex = 54311;

class HHOBGKLENPF_CHLJHANNGLJ : public ::System::Object
{
public:
	::System::Action* GOHDPILNKMO; // 0x10
	::System::Boolean CGFLLPOCDJM; // 0x18
	::System::Boolean IGAAKDOIPNN; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHOBGKLENPF_CHLJHANNGLJ__CTOR_OFFSET))(this);
	}

	::System::Void OHCFGAEMGLB(::System::Boolean BCBPKKCOJHB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HHOBGKLENPF_CHLJHANNGLJ_OHCFGAEMGLB_OFFSET))(this, BCBPKKCOJHB);
	}

	::System::Boolean GGCGCICEFNK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHOBGKLENPF_CHLJHANNGLJ_GGCGCICEFNK_OFFSET))(this);
	}
};
