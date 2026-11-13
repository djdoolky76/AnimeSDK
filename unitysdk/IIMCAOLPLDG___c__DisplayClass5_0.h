#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AENGOKAEEOA;
class GJEMBJDCAPG;

#define IIMCAOLPLDG___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x193E0B30)
#define IIMCAOLPLDG___C__DISPLAYCLASS5_0__DEPARTEQUIPPROPERTY_B__0_OFFSET UNITYSDK_OFFSET(0x193E2D30)

inline static constexpr unsigned int IIMCAOLPLDG___c__DisplayClass5_0_TypeDefinitionIndex = 75384;

	class IIMCAOLPLDG___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::AENGOKAEEOA* characterData; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMCAOLPLDG___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _DepartEquipProperty_b__0(::GJEMBJDCAPG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GJEMBJDCAPG*))((::PBYTE)hIl2Cpp + IIMCAOLPLDG___C__DISPLAYCLASS5_0__DEPARTEQUIPPROPERTY_B__0_OFFSET))(this, a1);
		}

	};
