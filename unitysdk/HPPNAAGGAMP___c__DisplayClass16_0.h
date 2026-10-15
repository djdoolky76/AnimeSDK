#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBMMGODFEEO;
namespace System { class String; }

#define HPPNAAGGAMP___C__DISPLAYCLASS16_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15DE16B0)
#define HPPNAAGGAMP___C__DISPLAYCLASS16_0__ISTIMELINEPLAYING_B__0_OFFSET UNITYSDK_OFFSET(0x15DE16C0)

inline static constexpr unsigned int HPPNAAGGAMP___c__DisplayClass16_0_TypeDefinitionIndex = 48482;

	class HPPNAAGGAMP___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPNAAGGAMP___C__DISPLAYCLASS16_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsTimelinePlaying_b__0(::EBMMGODFEEO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EBMMGODFEEO*))((::PBYTE)hIl2Cpp + HPPNAAGGAMP___C__DISPLAYCLASS16_0__ISTIMELINEPLAYING_B__0_OFFSET))(this, a1);
		}

	};
