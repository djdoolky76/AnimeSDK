#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TriggerShape.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelTriggerInfo; }

#define RPG_GAMECORE_LEVELTRIGGERINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7CEFB0)
#define RPG_GAMECORE_LEVELTRIGGERINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7B47C0)

namespace RPG::GameCore
{
	class LevelTriggerInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TriggerShape Shape; // 0x10
		::System::Single Radius; // 0x14
		::System::Single DimX; // 0x18
		::System::Single DimY; // 0x1C
		::System::Single DimZ; // 0x20
		::RPG::MVector3 Offset; // 0x24
		::Il2CppArray<::RPG::MVector2>* PointList; // 0x30
		::System::Boolean Server; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTRIGGERINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelTriggerInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelTriggerInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTRIGGERINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
