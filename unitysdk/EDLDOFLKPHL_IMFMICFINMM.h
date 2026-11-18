#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define EDLDOFLKPHL_IMFMICFINMM_BLNJCNGIEPH_OFFSET UNITYSDK_OFFSET(0xFDD8650)
#define EDLDOFLKPHL_IMFMICFINMM_FNIECEDMLCC_OFFSET UNITYSDK_OFFSET(0xFDD8660)
#define EDLDOFLKPHL_IMFMICFINMM__CTOR_OFFSET UNITYSDK_OFFSET(0xFDD8640)

inline static constexpr unsigned int EDLDOFLKPHL_IMFMICFINMM_TypeDefinitionIndex = 61500;

class EDLDOFLKPHL_IMFMICFINMM : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Action* NKGCDDCMBCF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDOFLKPHL_IMFMICFINMM__CTOR_OFFSET))(this);
	}

	::System::Void BLNJCNGIEPH(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EDLDOFLKPHL_IMFMICFINMM_BLNJCNGIEPH_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void FNIECEDMLCC(::OAEFGCLEHHO* PPDEFOFBJKE)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EDLDOFLKPHL_IMFMICFINMM_FNIECEDMLCC_OFFSET))(this, PPDEFOFBJKE);
	}
};
