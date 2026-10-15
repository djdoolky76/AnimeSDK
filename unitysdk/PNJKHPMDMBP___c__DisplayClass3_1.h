#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }

#define PNJKHPMDMBP___C__DISPLAYCLASS3_1_CTOR_OFFSET UNITYSDK_OFFSET(0xC33B250)
#define PNJKHPMDMBP___C__DISPLAYCLASS3_1__ENTITYSORT_SORTBYMODIFIERDYNAMICFLOAT_B__2_OFFSET UNITYSDK_OFFSET(0xC33C110)

	template <typename T>
	class PNJKHPMDMBP___c__DisplayClass3_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::RPG::GameCore::FixPoint score; // 0x18
		::System::Int32 scoreCount; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJKHPMDMBP___C__DISPLAYCLASS3_1_CTOR_OFFSET))(this);
		}

		::System::Void _EntitySort_SortByModifierDynamicFloat_b__2(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + PNJKHPMDMBP___C__DISPLAYCLASS3_1__ENTITYSORT_SORTBYMODIFIERDYNAMICFLOAT_B__2_OFFSET))(this, a1);
		}

	};
