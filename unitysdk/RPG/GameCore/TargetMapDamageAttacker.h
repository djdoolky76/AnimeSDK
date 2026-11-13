#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetMapDamageAttacker; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPDAMAGEATTACKER_CTOR_OFFSET UNITYSDK_OFFSET(0x206F4F70)
#define RPG_GAMECORE_TARGETMAPDAMAGEATTACKER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x206F5000)
#define RPG_GAMECORE_TARGETMAPDAMAGEATTACKER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x206F4FE0)
#define RPG_GAMECORE_TARGETMAPDAMAGEATTACKER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x206F4F80)
#define RPG_GAMECORE_TARGETMAPDAMAGEATTACKER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x206F4F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapDamageAttacker_TypeDefinitionIndex = 24478;

	class TargetMapDamageAttacker : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGEATTACKER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapDamageAttacker* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapDamageAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGEATTACKER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapDamageAttacker* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapDamageAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGEATTACKER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDamageAttacker* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDamageAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGEATTACKER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDamageAttacker* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDamageAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGEATTACKER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
