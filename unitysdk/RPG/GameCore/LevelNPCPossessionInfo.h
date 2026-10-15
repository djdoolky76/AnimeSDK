#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelNPCPossessionInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELNPCPOSSESSIONINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B8900)
#define RPG_GAMECORE_LEVELNPCPOSSESSIONINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7B7120)

namespace RPG::GameCore
{
	class LevelNPCPossessionInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::Boolean IsOverride; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::MVector3 LocalPosition; // 0x1C
		::RPG::MVector3 LocalRotation; // 0x28
		::RPG::MVector3 LocalScale; // 0x34
		::System::String* AttachPoint; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCPOSSESSIONINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelNPCPossessionInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelNPCPossessionInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCPOSSESSIONINFO_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
