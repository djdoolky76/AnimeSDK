#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VP_Invert; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VP_INVERT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC89560)
#define RPG_GAMECORE_VP_INVERT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC895F0)
#define RPG_GAMECORE_VP_INVERT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC895D0)
#define RPG_GAMECORE_VP_INVERT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC89570)
#define RPG_GAMECORE_VP_INVERT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC894F0)

namespace RPG::GameCore
{
	class VP_Invert : public ::RPG::GameCore::ValuePostProcessConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_INVERT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VP_Invert* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VP_Invert*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_INVERT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VP_Invert* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VP_Invert*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_INVERT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Invert* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Invert*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_INVERT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Invert* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Invert*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_INVERT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
