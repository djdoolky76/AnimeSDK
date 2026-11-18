#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define BDLOHNNBJPJ_LMCIIFJOBLB_GAGGADAHHII_OFFSET UNITYSDK_OFFSET(0x1701F4C0)
#define BDLOHNNBJPJ_LMCIIFJOBLB_LJJLPOADMDG_OFFSET UNITYSDK_OFFSET(0x1701F510)
#define BDLOHNNBJPJ_LMCIIFJOBLB_OINLLNEEDBL_OFFSET UNITYSDK_OFFSET(0x1701F4D0)
#define BDLOHNNBJPJ_LMCIIFJOBLB__CTOR_OFFSET UNITYSDK_OFFSET(0x1701F4E0)

inline static constexpr unsigned int BDLOHNNBJPJ_LMCIIFJOBLB_TypeDefinitionIndex = 88148;

class BDLOHNNBJPJ_LMCIIFJOBLB : public ::System::Object
{
public:
	::HOCDHMEPPEG LNCHANEOIHB; // 0x10
	::Foundation::ViewObject::GroupMemberIdentifier _ANFKJDPFKMC_k__BackingField; // 0x40
	::System::Int32 _FCCHGDJAEMM_k__BackingField; // 0x48

	::System::Void _ctor(::Foundation::ViewObject::GroupMemberIdentifier HLDBBGGLNKP, ::System::Int32 EMIHPNKBMBF, ::HOCDHMEPPEG KMKKPFNLOIL)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::GroupMemberIdentifier, ::System::Int32, ::HOCDHMEPPEG))((::PBYTE)hIl2Cpp + BDLOHNNBJPJ_LMCIIFJOBLB__CTOR_OFFSET))(this, HLDBBGGLNKP, EMIHPNKBMBF, KMKKPFNLOIL);
	}

	::Foundation::ViewObject::GroupMemberIdentifier GAGGADAHHII()
	{
		return ((::Foundation::ViewObject::GroupMemberIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLOHNNBJPJ_LMCIIFJOBLB_GAGGADAHHII_OFFSET))(this);
	}

	::System::Int32 OINLLNEEDBL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLOHNNBJPJ_LMCIIFJOBLB_OINLLNEEDBL_OFFSET))(this);
	}

	::System::Void LJJLPOADMDG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLOHNNBJPJ_LMCIIFJOBLB_LJJLPOADMDG_OFFSET))(this);
	}
};
