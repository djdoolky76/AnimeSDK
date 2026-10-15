#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtLevelGroupInfoBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelDimensionFilter; }
namespace RPG::GameCore { class LevelGroupInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELGROUPINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7AFBC0)
#define RPG_GAMECORE_LEVELGROUPINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7AFBE0)
#define RPG_GAMECORE_LEVELGROUPINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7AFB70)

namespace RPG::GameCore
{
	class LevelGroupInfo : public ::RPG::GameCore::RtLevelGroupInfoBase
	{
	public:
		::System::String* GroupGUID; // 0x160
		::RPG::GameCore::LevelDimensionFilter* SaveDimensionFilter; // 0x168
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelGroupInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelGroupInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPINFO_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelGroupInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelGroupInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPINFO_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
