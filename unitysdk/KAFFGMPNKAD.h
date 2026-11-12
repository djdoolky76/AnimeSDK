#pragma once
#include "unitysdk/unitysdk.h"
class EHPBMPFKNFP;
class NGFHCJIAOLH;
namespace RPG::GameCore { class ChenLingFesPredicateItemCondition; }
namespace RPG::GameCore { class TaskContext; }

#define KAFFGMPNKAD_BMKAPOLLEPD_OFFSET UNITYSDK_OFFSET(0xBB58D40)
#define KAFFGMPNKAD_CTOR_OFFSET UNITYSDK_OFFSET(0xBB58B70)
#define KAFFGMPNKAD_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBB58BF0)

inline static constexpr unsigned int KAFFGMPNKAD_TypeDefinitionIndex = 53775;

	class KAFFGMPNKAD
	{
	public:
		::NGFHCJIAOLH* MMJENPHFBAB; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EHPBMPFKNFP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EHPBMPFKNFP*))((::PBYTE)hIl2Cpp + KAFFGMPNKAD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAFFGMPNKAD_EVALUATE_OFFSET))(this);
		}

		::System::Boolean BMKAPOLLEPD(::RPG::GameCore::ChenLingFesPredicateItemCondition* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChenLingFesPredicateItemCondition*))((::PBYTE)hIl2Cpp + KAFFGMPNKAD_BMKAPOLLEPD_OFFSET))(this, a1);
		}

	};
