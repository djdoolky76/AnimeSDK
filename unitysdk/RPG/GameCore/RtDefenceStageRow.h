#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtDefenceStageRow; }
namespace System { class String; }

#define RPG_GAMECORE_RTDEFENCESTAGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA5BFA0)
#define RPG_GAMECORE_RTDEFENCESTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA5BEA0)

namespace RPG::GameCore
{
	class RtDefenceStageRow : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 StageID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* ConfigPath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCESTAGEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtDefenceStageRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtDefenceStageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCESTAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
