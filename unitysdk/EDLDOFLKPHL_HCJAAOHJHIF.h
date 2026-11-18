#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define EDLDOFLKPHL_HCJAAOHJHIF_DAAFJFMLBDJ_OFFSET UNITYSDK_OFFSET(0x13E73040)
#define EDLDOFLKPHL_HCJAAOHJHIF_DGKMDJDNKGE_OFFSET UNITYSDK_OFFSET(0x13E73030)
#define EDLDOFLKPHL_HCJAAOHJHIF__CTOR_OFFSET UNITYSDK_OFFSET(0x13E73020)

inline static constexpr unsigned int EDLDOFLKPHL_HCJAAOHJHIF_TypeDefinitionIndex = 61496;

class EDLDOFLKPHL_HCJAAOHJHIF : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Action* NKGCDDCMBCF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDOFLKPHL_HCJAAOHJHIF__CTOR_OFFSET))(this);
	}

	::System::Void DGKMDJDNKGE(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EDLDOFLKPHL_HCJAAOHJHIF_DGKMDJDNKGE_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void DAAFJFMLBDJ(::OAEFGCLEHHO* PPDEFOFBJKE)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EDLDOFLKPHL_HCJAAOHJHIF_DAAFJFMLBDJ_OFFSET))(this, PPDEFOFBJKE);
	}
};
