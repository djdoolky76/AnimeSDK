#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::GameCore { class GameEntity; }

#define MBLNDHDDPPD___C__DISPLAYCLASS39_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB86B7A0)
#define MBLNDHDDPPD___C__DISPLAYCLASS39_0__EVALUATE_COMPLEXSKILLAISOURCEHIMOKENOVAASSIST_B__0_OFFSET UNITYSDK_OFFSET(0xB86D170)

	class MBLNDHDDPPD___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::RPG::PoolDictionary_2<::RPG::GameCore::GameEntity*, ::System::Int32>* entity2Index; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLNDHDDPPD___C__DISPLAYCLASS39_0_CTOR_OFFSET))(this);
		}

		::System::Int32 _Evaluate_ComplexSkillAISourceHimokeNovaAssist_b__0(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD___C__DISPLAYCLASS39_0__EVALUATE_COMPLEXSKILLAISOURCEHIMOKENOVAASSIST_B__0_OFFSET))(this, a1, a2);
		}

	};
