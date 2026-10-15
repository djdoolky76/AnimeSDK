#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchCallBackModifierCaster; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHCALLBACKMODIFIERCASTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB611B0)
#define RPG_GAMECORE_TARGETFETCHCALLBACKMODIFIERCASTER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB61240)
#define RPG_GAMECORE_TARGETFETCHCALLBACKMODIFIERCASTER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB61220)
#define RPG_GAMECORE_TARGETFETCHCALLBACKMODIFIERCASTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB611C0)
#define RPG_GAMECORE_TARGETFETCHCALLBACKMODIFIERCASTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB61140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchCallBackModifierCaster_TypeDefinitionIndex = 23918;

	class TargetFetchCallBackModifierCaster : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCALLBACKMODIFIERCASTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchCallBackModifierCaster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchCallBackModifierCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCALLBACKMODIFIERCASTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchCallBackModifierCaster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchCallBackModifierCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCALLBACKMODIFIERCASTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCallBackModifierCaster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCallBackModifierCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCALLBACKMODIFIERCASTER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCallBackModifierCaster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCallBackModifierCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCALLBACKMODIFIERCASTER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
