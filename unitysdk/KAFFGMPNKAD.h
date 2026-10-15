#pragma once
#include "unitysdk/unitysdk.h"
class EHPBMPFKNFP;
class NGFHCJIAOLH;
namespace RPG::GameCore { class ChenLingFesPredicateItemCondition; }
namespace RPG::GameCore { class TaskContext; }

#define KAFFGMPNKAD_BMKAPOLLEPD_OFFSET UNITYSDK_OFFSET(0xB2D5370)
#define KAFFGMPNKAD_CTOR_OFFSET UNITYSDK_OFFSET(0xB2D51A0)
#define KAFFGMPNKAD_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB2D5220)

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
