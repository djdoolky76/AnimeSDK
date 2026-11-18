#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OIDJCHDHPOG;
namespace System { class String; }

#define JLCMJJOJAFL__CTOR_OFFSET UNITYSDK_OFFSET(0x18A25E00)

inline static constexpr unsigned int JLCMJJOJAFL_TypeDefinitionIndex = 64478;

class JLCMJJOJAFL : public ::System::Object
{
public:
	::OIDJCHDHPOG* GPLCPMEOMGM; // 0x10
	::System::String* POAMILEFBLA; // 0x18

	::System::Void _ctor(::OIDJCHDHPOG* MMLAOEMOPKC, ::System::String* BNMDJMILHCN)
	{
		return ((::System::Void(*)(::PVOID, ::OIDJCHDHPOG*, ::System::String*))((::PBYTE)hIl2Cpp + JLCMJJOJAFL__CTOR_OFFSET))(this, MMLAOEMOPKC, BNMDJMILHCN);
	}
};
