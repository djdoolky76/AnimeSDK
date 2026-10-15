#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterHPBarStyleColorSetting; }
namespace System { class String; }

#define RPG_GAMECORE_MONSTERHPBARSTYLECOLORSETTING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B6980)
#define RPG_GAMECORE_MONSTERHPBARSTYLECOLORSETTING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8B6870)

namespace RPG::GameCore
{
	class MonsterHPBarStyleColorSetting : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* LeftColor; // 0x10
		::System::String* RightColor; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERHPBARSTYLECOLORSETTING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterHPBarStyleColorSetting* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterHPBarStyleColorSetting*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERHPBARSTYLECOLORSETTING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
