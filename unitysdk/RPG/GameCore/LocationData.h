#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FormationPriorityType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LocationData; }

#define RPG_GAMECORE_LOCATIONDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7EF7C0)
#define RPG_GAMECORE_LOCATIONDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7EF440)

namespace RPG::GameCore
{
	class LocationData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FormationPriorityType PriorityType; // 0x10
		::RPG::MVector3 LocalPosition; // 0x14
		::System::Single LocalFaceDir; // 0x20
		::System::Boolean OverrideServant; // 0x24
		::System::Byte _padding0[0x3];
		::RPG::MVector3 ServantPos; // 0x28
		::System::Single ServantFaceDir; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCATIONDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LocationData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LocationData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCATIONDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
