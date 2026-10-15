#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCheckColonyMirrorTakenDiff; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKCOLONYMIRRORTAKENDIFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D48D8A0)
#define RPG_GAMECORE_BYCHECKCOLONYMIRRORTAKENDIFF_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D48DA20)
#define RPG_GAMECORE_BYCHECKCOLONYMIRRORTAKENDIFF_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D48D9F0)
#define RPG_GAMECORE_BYCHECKCOLONYMIRRORTAKENDIFF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D48D8B0)
#define RPG_GAMECORE_BYCHECKCOLONYMIRRORTAKENDIFF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D48D870)

namespace RPG::GameCore
{
	class ByCheckColonyMirrorTakenDiff : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCOLONYMIRRORTAKENDIFF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCOLONYMIRRORTAKENDIFF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCOLONYMIRRORTAKENDIFF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCOLONYMIRRORTAKENDIFF_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCOLONYMIRRORTAKENDIFF_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
