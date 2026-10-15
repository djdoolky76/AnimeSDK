#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MuseumAreaMissionRow; }

#define RPG_GAMECORE_MUSEUMAREAMISSIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C4FF0)
#define RPG_GAMECORE_MUSEUMAREAMISSIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8C4900)

namespace RPG::GameCore
{
	class MuseumAreaMissionRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID DialogDesc; // 0x10
		::System::UInt32 MissionID; // 0x20
		::System::UInt32 AreaID; // 0x24
		::System::UInt32 CollectItemNum; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAMISSIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MuseumAreaMissionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MuseumAreaMissionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAMISSIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
