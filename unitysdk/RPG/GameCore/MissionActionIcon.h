#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MissionActionIcon; }
namespace System { class String; }

#define RPG_GAMECORE_MISSIONACTIONICON_CTOR_OFFSET UNITYSDK_OFFSET(0x1D883280)
#define RPG_GAMECORE_MISSIONACTIONICON_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8830C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionActionIcon_TypeDefinitionIndex = 18964;

	class MissionActionIcon : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* MiniIconPath; // 0x18
		::RPG::Client::TextID BtnText; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONACTIONICON_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MissionActionIcon* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MissionActionIcon*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONACTIONICON_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
