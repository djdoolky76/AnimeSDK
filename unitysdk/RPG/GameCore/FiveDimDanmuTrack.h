#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimDanmuTrack; }

#define RPG_GAMECORE_FIVEDIMDANMUTRACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B7E10)
#define RPG_GAMECORE_FIVEDIMDANMUTRACK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B7C10)

namespace RPG::GameCore
{
	class FiveDimDanmuTrack : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 TrackID; // 0x10
		::RPG::MVector3 Position; // 0x14
		::System::Single Angle; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDANMUTRACK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimDanmuTrack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimDanmuTrack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDANMUTRACK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
