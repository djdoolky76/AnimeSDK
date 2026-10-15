#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MakeCharacterHUDVisible; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MAKECHARACTERHUDVISIBLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7D12C0)
#define RPG_GAMECORE_MAKECHARACTERHUDVISIBLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7D12D0)
#define RPG_GAMECORE_MAKECHARACTERHUDVISIBLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7D1290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MakeCharacterHUDVisible_TypeDefinitionIndex = 22818;

	class MakeCharacterHUDVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Visible; // 0x20
		::System::Boolean IndependentControl; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAKECHARACTERHUDVISIBLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MakeCharacterHUDVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MakeCharacterHUDVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAKECHARACTERHUDVISIBLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MakeCharacterHUDVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MakeCharacterHUDVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAKECHARACTERHUDVISIBLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
