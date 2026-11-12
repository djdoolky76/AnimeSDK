#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsPropLockable; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISPROPLOCKABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E72EFB0)
#define RPG_GAMECORE_BYISPROPLOCKABLE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E72F230)
#define RPG_GAMECORE_BYISPROPLOCKABLE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E72F1D0)
#define RPG_GAMECORE_BYISPROPLOCKABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E72EFF0)
#define RPG_GAMECORE_BYISPROPLOCKABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E72EF50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsPropLockable_TypeDefinitionIndex = 20528;

	class ByIsPropLockable : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean UseRaycast; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROPLOCKABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsPropLockable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsPropLockable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROPLOCKABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsPropLockable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsPropLockable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROPLOCKABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsPropLockable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsPropLockable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROPLOCKABLE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsPropLockable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsPropLockable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROPLOCKABLE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
