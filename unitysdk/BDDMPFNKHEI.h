#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropEnableCollider; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class GameObject; }

#define BDDMPFNKHEI_CLBPCPJHKFN_OFFSET UNITYSDK_OFFSET(0x162F3160)
#define BDDMPFNKHEI_CTOR_OFFSET UNITYSDK_OFFSET(0x162F2BB0)
#define BDDMPFNKHEI_LBIGKNMKCJF_OFFSET UNITYSDK_OFFSET(0x162F3060)
#define BDDMPFNKHEI_OHPIOECALAI_OFFSET UNITYSDK_OFFSET(0x162F33D0)
#define BDDMPFNKHEI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x162F2BE0)

	class BDDMPFNKHEI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropEnableCollider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropEnableCollider*))((::PBYTE)hIl2Cpp + BDDMPFNKHEI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDMPFNKHEI_ONTASKBEGIN_OFFSET))(this);
		}

		static ::System::Boolean OHPIOECALAI(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BDDMPFNKHEI_OHPIOECALAI_OFFSET))(a1);
		}

		::System::Void LBIGKNMKCJF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BDDMPFNKHEI_LBIGKNMKCJF_OFFSET))(this, a1);
		}

		::System::Void CLBPCPJHKFN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BDDMPFNKHEI_CLBPCPJHKFN_OFFSET))(this, a1);
		}

	};
