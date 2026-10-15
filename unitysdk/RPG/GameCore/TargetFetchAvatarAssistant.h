#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchAvatarAssistant; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHAVATARASSISTANT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB603E0)
#define RPG_GAMECORE_TARGETFETCHAVATARASSISTANT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB60470)
#define RPG_GAMECORE_TARGETFETCHAVATARASSISTANT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB60450)
#define RPG_GAMECORE_TARGETFETCHAVATARASSISTANT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB603F0)
#define RPG_GAMECORE_TARGETFETCHAVATARASSISTANT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB60370)

namespace RPG::GameCore
{
	class TargetFetchAvatarAssistant : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAVATARASSISTANT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAvatarAssistant* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAvatarAssistant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAVATARASSISTANT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAvatarAssistant* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAvatarAssistant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAVATARASSISTANT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAvatarAssistant* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAvatarAssistant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAVATARASSISTANT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAvatarAssistant* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAvatarAssistant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAVATARASSISTANT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
