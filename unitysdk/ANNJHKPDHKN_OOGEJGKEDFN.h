#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ANNJHKPDHKN_OOGEJGKEDFN_HJCJJFGPCLD_OFFSET UNITYSDK_OFFSET(0x11BCAB90)
#define ANNJHKPDHKN_OOGEJGKEDFN__CTOR_OFFSET UNITYSDK_OFFSET(0x11BCAB80)

inline static constexpr unsigned int ANNJHKPDHKN_OOGEJGKEDFN_TypeDefinitionIndex = 76086;

class ANNJHKPDHKN_OOGEJGKEDFN : public ::System::Object
{
public:
	::System::Int32 KLJNHMGMDNP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNJHKPDHKN_OOGEJGKEDFN__CTOR_OFFSET))(this);
	}

	::System::String* HJCJJFGPCLD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNJHKPDHKN_OOGEJGKEDFN_HJCJJFGPCLD_OFFSET))(this);
	}
};
