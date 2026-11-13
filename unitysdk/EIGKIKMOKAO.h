#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_ElfByIsTakeOutState; }
namespace RPG::GameCore { class TaskContext; }

#define EIGKIKMOKAO_CTOR_OFFSET UNITYSDK_OFFSET(0x19A93D70)
#define EIGKIKMOKAO_EVALUATE_OFFSET UNITYSDK_OFFSET(0x19A93DF0)

inline static constexpr unsigned int EIGKIKMOKAO_TypeDefinitionIndex = 53254;

	class EIGKIKMOKAO
	{
	public:
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* FOMIGOMHGGI; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ElfByIsTakeOutState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ElfByIsTakeOutState*))((::PBYTE)hIl2Cpp + EIGKIKMOKAO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIGKIKMOKAO_EVALUATE_OFFSET))(this);
		}

	};
