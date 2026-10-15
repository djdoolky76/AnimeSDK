#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T1, typename T2> class Action_2; }

#define OFFGIKEAIFM___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBE39860)
#define OFFGIKEAIFM___C__DISPLAYCLASS6_0__FOREACHPETAPPEARANCE_B__0_OFFSET UNITYSDK_OFFSET(0xBE39A80)

inline static constexpr unsigned int OFFGIKEAIFM___c__DisplayClass6_0_TypeDefinitionIndex = 75726;

	class OFFGIKEAIFM___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Action_2<::System::UInt32, ::System::UInt32>* action; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFGIKEAIFM___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _ForeachPetAppearance_b__0(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OFFGIKEAIFM___C__DISPLAYCLASS6_0__FOREACHPETAPPEARANCE_B__0_OFFSET))(this, a1, a2);
		}

	};
