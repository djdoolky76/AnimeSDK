#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchFateRinCardCaster; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHFATERINCARDCASTER_CTOR_OFFSET UNITYSDK_OFFSET(0x206EC450)
#define RPG_GAMECORE_TARGETFETCHFATERINCARDCASTER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x206EC4E0)
#define RPG_GAMECORE_TARGETFETCHFATERINCARDCASTER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x206EC4C0)
#define RPG_GAMECORE_TARGETFETCHFATERINCARDCASTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x206EC460)
#define RPG_GAMECORE_TARGETFETCHFATERINCARDCASTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x206EC3E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchFateRinCardCaster_TypeDefinitionIndex = 24470;

	class TargetFetchFateRinCardCaster : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFATERINCARDCASTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchFateRinCardCaster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchFateRinCardCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFATERINCARDCASTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchFateRinCardCaster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchFateRinCardCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFATERINCARDCASTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFateRinCardCaster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFateRinCardCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFATERINCARDCASTER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFateRinCardCaster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFateRinCardCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFATERINCARDCASTER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
