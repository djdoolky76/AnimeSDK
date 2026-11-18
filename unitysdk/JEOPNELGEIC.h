#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHJGMDOABJE.h"
#include "unitysdk/PPPIOJEDNHF.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

#define JEOPNELGEIC_EQUALS_OFFSET UNITYSDK_OFFSET(0x74D110)
#define JEOPNELGEIC_HHOBHGAEIKB_OFFSET UNITYSDK_OFFSET(0x74D190)
#define JEOPNELGEIC_HJJKIGJGPOO_OFFSET UNITYSDK_OFFSET(0x74D1E0)
#define JEOPNELGEIC_KLIDJACGIEP_OFFSET UNITYSDK_OFFSET(0x74D1F0)

inline static constexpr unsigned int JEOPNELGEIC_TypeDefinitionIndex = 79228;

struct alignas(8) JEOPNELGEIC
{
	::PPPIOJEDNHF LAIBJFEOLFK; // 0x10
	::AHJGMDOABJE HGKDFBJOFNO; // 0x14
	::System::Nullable_1<::System::Int32> HKADJGPJKAN; // 0x18

	/*
	::System::Boolean Equals(::JEOPNELGEIC LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::JEOPNELGEIC))((::PBYTE)hIl2Cpp + JEOPNELGEIC_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Void HHOBHGAEIKB(::PPPIOJEDNHF BBMDGPCOFOF)
	{
		return ((::System::Void(*)(::PVOID, ::PPPIOJEDNHF))((::PBYTE)hIl2Cpp + JEOPNELGEIC_HHOBHGAEIKB_OFFSET))(this, BBMDGPCOFOF);
	}

	::System::Void HJJKIGJGPOO(::AHJGMDOABJE LIDKLBLMEAK)
	{
		return ((::System::Void(*)(::PVOID, ::AHJGMDOABJE))((::PBYTE)hIl2Cpp + JEOPNELGEIC_HJJKIGJGPOO_OFFSET))(this, LIDKLBLMEAK);
	}

	::System::Void KLIDJACGIEP(::System::Int32 MOBNMDEDJIP, ::System::Int32 BDEDDEGJFKL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JEOPNELGEIC_KLIDJACGIEP_OFFSET))(this, MOBNMDEDJIP, BDEDDEGJFKL);
	}
};
