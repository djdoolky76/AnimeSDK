#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateContentConfig; }
namespace RPG::GameCore { class FateTextDynamicParamConfig; }

#define RPG_GAMECORE_FATECONTENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69AEE0)
#define RPG_GAMECORE_FATECONTENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69AE30)

namespace RPG::GameCore
{
	class FateContentConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FateTextDynamicParamConfig* TextDynamicParamConfig; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONTENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateContentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateContentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONTENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
