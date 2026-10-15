#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MissionCustomValueTuple; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_MISSIONCUSTOMVALUETUPLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8862C0)
#define RPG_GAMECORE_MISSIONCUSTOMVALUETUPLE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D885720)
#define RPG_GAMECORE_MISSIONCUSTOMVALUETUPLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D885220)

namespace RPG::GameCore
{
	class MissionCustomValueTuple : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::UInt32 Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCUSTOMVALUETUPLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MissionCustomValueTuple* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MissionCustomValueTuple*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCUSTOMVALUETUPLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionCustomValueTuple* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionCustomValueTuple*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCUSTOMVALUETUPLE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
