#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchLocalPlayerPet; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHLOCALPLAYERPET_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE12600)
#define RPG_GAMECORE_TARGETFETCHLOCALPLAYERPET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1EE126B0)
#define RPG_GAMECORE_TARGETFETCHLOCALPLAYERPET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1EE12670)
#define RPG_GAMECORE_TARGETFETCHLOCALPLAYERPET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE12610)
#define RPG_GAMECORE_TARGETFETCHLOCALPLAYERPET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE12570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchLocalPlayerPet_TypeDefinitionIndex = 24348;

	class TargetFetchLocalPlayerPet : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLOCALPLAYERPET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchLocalPlayerPet* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchLocalPlayerPet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLOCALPLAYERPET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchLocalPlayerPet* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchLocalPlayerPet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLOCALPLAYERPET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLocalPlayerPet* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLocalPlayerPet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLOCALPLAYERPET_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLocalPlayerPet* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLocalPlayerPet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLOCALPLAYERPET_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
