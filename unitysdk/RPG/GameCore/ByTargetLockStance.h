#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByTargetLockStance; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYTARGETLOCKSTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBE9C00)
#define RPG_GAMECORE_BYTARGETLOCKSTANCE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1EBE9E00)
#define RPG_GAMECORE_BYTARGETLOCKSTANCE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1EBE9DD0)
#define RPG_GAMECORE_BYTARGETLOCKSTANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EBE9C10)
#define RPG_GAMECORE_BYTARGETLOCKSTANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EBE9BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetLockStance_TypeDefinitionIndex = 24071;

	class ByTargetLockStance : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* LockKey; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLOCKSTANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTargetLockStance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTargetLockStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLOCKSTANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTargetLockStance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTargetLockStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLOCKSTANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetLockStance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetLockStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLOCKSTANCE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetLockStance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetLockStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLOCKSTANCE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
