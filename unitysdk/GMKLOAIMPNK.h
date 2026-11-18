#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define GMKLOAIMPNK__CTOR_OFFSET UNITYSDK_OFFSET(0x3657B0)

inline static constexpr unsigned int GMKLOAIMPNK_TypeDefinitionIndex = 78726;

struct alignas(8) GMKLOAIMPNK
{
	::System::String* HMLFEKKMKHO; // 0x10
	::System::String* EKBEICGOIPF; // 0x18

	::System::Void _ctor(::System::String* AGHNEGFHKMC, ::System::String* NJLGOAKEBGI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + GMKLOAIMPNK__CTOR_OFFSET))(this, AGHNEGFHKMC, NJLGOAKEBGI);
	}
};
