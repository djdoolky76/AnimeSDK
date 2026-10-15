#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CutSceneSFXConfig; }
namespace RPG::GameCore { class CutSceneSFXItem; }

#define RPG_GAMECORE_CUTSCENESFXCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5EB0A0)
#define RPG_GAMECORE_CUTSCENESFXCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5EAFB0)

namespace RPG::GameCore
{
	class CutSceneSFXConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::CutSceneSFXItem*>* SFXList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUTSCENESFXCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CutSceneSFXConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CutSceneSFXConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUTSCENESFXCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
