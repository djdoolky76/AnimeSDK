#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EFCDHIKKIBB_JBJPIIHHNDA_OFFSET UNITYSDK_OFFSET(0x17106E10)
#define EFCDHIKKIBB_LEPLOKCBADP_OFFSET UNITYSDK_OFFSET(0x17106E20)
#define EFCDHIKKIBB__CTOR_OFFSET UNITYSDK_OFFSET(0x17106E00)

inline static constexpr unsigned int EFCDHIKKIBB_TypeDefinitionIndex = 57432;

class EFCDHIKKIBB : public ::System::Object
{
public:
	::System::String* LCMLOOJLFBD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFCDHIKKIBB__CTOR_OFFSET))(this);
	}

	::System::Void JBJPIIHHNDA(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EFCDHIKKIBB_JBJPIIHHNDA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* LEPLOKCBADP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFCDHIKKIBB_LEPLOKCBADP_OFFSET))(this);
	}
};
