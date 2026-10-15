#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHMOGKLDPGJ;
namespace System { class String; }

#define DHMOGKLDPGJ___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xEBE43F0)
#define DHMOGKLDPGJ___C__DISPLAYCLASS4_0__CREATESINGLENPC_B__0_OFFSET UNITYSDK_OFFSET(0xEBE4830)

inline static constexpr unsigned int DHMOGKLDPGJ___c__DisplayClass4_0_TypeDefinitionIndex = 58052;

	class DHMOGKLDPGJ___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::String* defaultState; // 0x10
		::DHMOGKLDPGJ* __4__this; // 0x18
		::System::UInt32 npcID; // 0x20
		::System::UInt32 groupID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMOGKLDPGJ___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void _CreateSingleNpc_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMOGKLDPGJ___C__DISPLAYCLASS4_0__CREATESINGLENPC_B__0_OFFSET))(this);
		}

	};
