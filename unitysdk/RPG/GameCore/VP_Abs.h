#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VP_Abs; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VP_ABS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC887D0)
#define RPG_GAMECORE_VP_ABS_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC88860)
#define RPG_GAMECORE_VP_ABS_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC88840)
#define RPG_GAMECORE_VP_ABS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC887E0)
#define RPG_GAMECORE_VP_ABS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC88760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VP_Abs_TypeDefinitionIndex = 24053;

	class VP_Abs : public ::RPG::GameCore::ValuePostProcessConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_ABS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VP_Abs* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VP_Abs*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_ABS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VP_Abs* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VP_Abs*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_ABS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Abs* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Abs*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_ABS_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Abs* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Abs*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_ABS_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
