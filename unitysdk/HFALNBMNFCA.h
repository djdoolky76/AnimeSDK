#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class OAEFGCLEHHO;
namespace System { class String; }

#define HFALNBMNFCA_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x7F0B10)
#define HFALNBMNFCA_IEHDMKNGOHC_OFFSET UNITYSDK_OFFSET(0x3CED50)
#define HFALNBMNFCA_PAMODMODOAH_OFFSET UNITYSDK_OFFSET(0x4254B0)
#define HFALNBMNFCA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7F0B00)

inline static constexpr unsigned int HFALNBMNFCA_TypeDefinitionIndex = 56132;

struct alignas(8) HFALNBMNFCA
{
	::System::Int32 DJCNCELJPOM; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* BHDNBGLCNOM; // 0x18
	::OAEFGCLEHHO* _JMNFKFBIGAK_k__BackingField; // 0x20

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFALNBMNFCA_TOSTRING_OFFSET))(this);
	}

	::OAEFGCLEHHO* IEHDMKNGOHC()
	{
		return ((::OAEFGCLEHHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFALNBMNFCA_IEHDMKNGOHC_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFALNBMNFCA_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void PAMODMODOAH(::OAEFGCLEHHO* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HFALNBMNFCA_PAMODMODOAH_OFFSET))(this, EGEGIMGMJHN);
	}
};
