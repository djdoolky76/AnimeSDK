#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AxisType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ColliderConfig; }

#define RPG_GAMECORE_COLLIDERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CAC80)
#define RPG_GAMECORE_COLLIDERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5CAA00)

namespace RPG::GameCore
{
	class ColliderConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AxisType Axis; // 0x10
		::RPG::MVector3 Center; // 0x14
		::RPG::MVector3 Size; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ColliderConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ColliderConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
