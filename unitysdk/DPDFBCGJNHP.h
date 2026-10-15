#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByHaveEnemyAlive; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { template <typename T> class Predicate_1; }

#define DPDFBCGJNHP_ABDJOMDNLNJ_OFFSET UNITYSDK_OFFSET(0x11FFAD60)
#define DPDFBCGJNHP_CTOR_OFFSET UNITYSDK_OFFSET(0x11FFA8F0)
#define DPDFBCGJNHP_DCKPJJPMPKA_OFFSET UNITYSDK_OFFSET(0x11FFACE0)
#define DPDFBCGJNHP_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11FFA920)
#define DPDFBCGJNHP_IKHMHLJHKDI_OFFSET UNITYSDK_OFFSET(0x11FFABB0)

	class DPDFBCGJNHP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHaveEnemyAlive* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHaveEnemyAlive*))((::PBYTE)hIl2Cpp + DPDFBCGJNHP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDFBCGJNHP_EVALUATE_OFFSET))(this);
		}

		::System::Predicate_1<::RPG::GameCore::GameEntity*>* IKHMHLJHKDI()
		{
			return ((::System::Predicate_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDFBCGJNHP_IKHMHLJHKDI_OFFSET))(this);
		}

		::System::Boolean DCKPJJPMPKA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DPDFBCGJNHP_DCKPJJPMPKA_OFFSET))(this, a1);
		}

		::System::Boolean ABDJOMDNLNJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DPDFBCGJNHP_ABDJOMDNLNJ_OFFSET))(this, a1);
		}

	};
