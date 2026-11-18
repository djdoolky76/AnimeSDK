#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/KKPAJPLIGBG.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define EKMPCEIGNNM_AGOPEPDDFKO_OFFSET UNITYSDK_OFFSET(0x404C40)
#define EKMPCEIGNNM_BMMGMCGMNPN_OFFSET UNITYSDK_OFFSET(0x6ADB00)
#define EKMPCEIGNNM_ELIBBHDOEGB_OFFSET UNITYSDK_OFFSET(0x6ADAF0)
#define EKMPCEIGNNM_HCPHDJBIAHD_OFFSET UNITYSDK_OFFSET(0x359B10)
#define EKMPCEIGNNM_MCOEPJHMDDD_OFFSET UNITYSDK_OFFSET(0x57AAC0)
#define EKMPCEIGNNM_MPJHBMMGCIE_OFFSET UNITYSDK_OFFSET(0x3CF550)

inline static constexpr unsigned int EKMPCEIGNNM_TypeDefinitionIndex = 49719;

struct alignas(8) EKMPCEIGNNM
{
	::KKPAJPLIGBG NOOLOILNGPL; // 0x10
	::System::Byte _padding0[0x4];
	::System::UInt64 ELLGADEFBBO; // 0x18
	::System::Int32 _FBJPBKIAKHK_k__BackingField; // 0x20
	::Foundation::ViewObject::GroupMemberIdentifier _PFNNBHAFJLE_k__BackingField; // 0x24
	::System::Byte _padding1[0x4];
	::System::String* _BPHKBELIGGN_k__BackingField; // 0x30

	::System::String* MPJHBMMGCIE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKMPCEIGNNM_MPJHBMMGCIE_OFFSET))(this);
	}

	::System::Int32 HCPHDJBIAHD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKMPCEIGNNM_HCPHDJBIAHD_OFFSET))(this);
	}

	::Foundation::ViewObject::GroupMemberIdentifier AGOPEPDDFKO()
	{
		return ((::Foundation::ViewObject::GroupMemberIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + EKMPCEIGNNM_AGOPEPDDFKO_OFFSET))(this);
	}

	::System::Void ELIBBHDOEGB(::Foundation::ViewObject::GroupMemberIdentifier EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::GroupMemberIdentifier))((::PBYTE)hIl2Cpp + EKMPCEIGNNM_ELIBBHDOEGB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BMMGMCGMNPN(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EKMPCEIGNNM_BMMGMCGMNPN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MCOEPJHMDDD(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EKMPCEIGNNM_MCOEPJHMDDD_OFFSET))(this, EGEGIMGMJHN);
	}
};
