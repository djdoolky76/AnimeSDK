#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBMMGODFEEO;
namespace System { class String; }

#define HPPNAAGGAMP___C__DISPLAYCLASS32_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15DD4F30)
#define HPPNAAGGAMP___C__DISPLAYCLASS32_0__GETTIMELINEDURATION_B__0_OFFSET UNITYSDK_OFFSET(0x15DD4F40)

inline static constexpr unsigned int HPPNAAGGAMP___c__DisplayClass32_0_TypeDefinitionIndex = 48485;

	class HPPNAAGGAMP___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::System::String* timelinePath; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPNAAGGAMP___C__DISPLAYCLASS32_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTimelineDuration_b__0(::EBMMGODFEEO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EBMMGODFEEO*))((::PBYTE)hIl2Cpp + HPPNAAGGAMP___C__DISPLAYCLASS32_0__GETTIMELINEDURATION_B__0_OFFSET))(this, a1);
		}

	};
