#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }

#define PNJKHPMDMBP___C__DISPLAYCLASS4_1_CTOR_OFFSET UNITYSDK_OFFSET(0xC334210)
#define PNJKHPMDMBP___C__DISPLAYCLASS4_1__ENTITYSORT_SORTBYMODIFIERVALUE_B__2_OFFSET UNITYSDK_OFFSET(0xC334F00)

inline static constexpr unsigned int PNJKHPMDMBP___c__DisplayClass4_1_TypeDefinitionIndex = 55633;

	template <typename T>
	class PNJKHPMDMBP___c__DisplayClass4_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Int32 scoreCount; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint score; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJKHPMDMBP___C__DISPLAYCLASS4_1_CTOR_OFFSET))(this);
		}

		::System::Void _EntitySort_SortByModifierValue_b__2(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + PNJKHPMDMBP___C__DISPLAYCLASS4_1__ENTITYSORT_SORTBYMODIFIERVALUE_B__2_OFFSET))(this, a1);
		}

	};
