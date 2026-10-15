#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBMMGODFEEO;

#define HPPNAAGGAMP___C__DISPLAYCLASS14_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15DD2A10)
#define HPPNAAGGAMP___C__DISPLAYCLASS14_0__ISTIMELINEPLAYING_B__0_OFFSET UNITYSDK_OFFSET(0x15DD4DB0)

inline static constexpr unsigned int HPPNAAGGAMP___c__DisplayClass14_0_TypeDefinitionIndex = 48481;

	class HPPNAAGGAMP___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::Int32 id; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPNAAGGAMP___C__DISPLAYCLASS14_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsTimelinePlaying_b__0(::EBMMGODFEEO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EBMMGODFEEO*))((::PBYTE)hIl2Cpp + HPPNAAGGAMP___C__DISPLAYCLASS14_0__ISTIMELINEPLAYING_B__0_OFFSET))(this, a1);
		}

	};
