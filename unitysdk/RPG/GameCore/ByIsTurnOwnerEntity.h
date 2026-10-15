#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsTurnOwnerEntity; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISTURNOWNERENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D529250)
#define RPG_GAMECORE_BYISTURNOWNERENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D529410)
#define RPG_GAMECORE_BYISTURNOWNERENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D5293E0)
#define RPG_GAMECORE_BYISTURNOWNERENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D529260)
#define RPG_GAMECORE_BYISTURNOWNERENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D529220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTurnOwnerEntity_TypeDefinitionIndex = 22984;

	class ByIsTurnOwnerEntity : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTURNOWNERENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsTurnOwnerEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsTurnOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTURNOWNERENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsTurnOwnerEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsTurnOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTURNOWNERENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTurnOwnerEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTurnOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTURNOWNERENTITY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTurnOwnerEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTurnOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTURNOWNERENTITY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
