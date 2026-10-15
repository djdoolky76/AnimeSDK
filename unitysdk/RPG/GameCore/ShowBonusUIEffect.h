#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowBonusUIEffect; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWBONUSUIEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD96F0)
#define RPG_GAMECORE_SHOWBONUSUIEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD9700)
#define RPG_GAMECORE_SHOWBONUSUIEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD96C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBonusUIEffect_TypeDefinitionIndex = 23294;

	class ShowBonusUIEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UIPrefabPath; // 0x18
		::RPG::Client::TextID TitleTextID; // 0x20
		::System::String* ImagePath; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBONUSUIEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBonusUIEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBonusUIEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBONUSUIEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBonusUIEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBonusUIEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBONUSUIEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
