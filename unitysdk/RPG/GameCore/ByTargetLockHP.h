#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LockHPStrength.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByTargetLockHP; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYTARGETLOCKHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBE93A0)
#define RPG_GAMECORE_BYTARGETLOCKHP_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1EBE9600)
#define RPG_GAMECORE_BYTARGETLOCKHP_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1EBE95C0)
#define RPG_GAMECORE_BYTARGETLOCKHP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EBE93B0)
#define RPG_GAMECORE_BYTARGETLOCKHP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EBE9360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetLockHP_TypeDefinitionIndex = 24066;

	class ByTargetLockHP : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* LockKey; // 0x28
		::RPG::GameCore::LockHPStrength Strength; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLOCKHP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTargetLockHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTargetLockHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLOCKHP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTargetLockHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTargetLockHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLOCKHP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetLockHP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetLockHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLOCKHP_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetLockHP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetLockHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLOCKHP_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
