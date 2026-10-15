#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimPhysicsConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMPHYSICSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6CFC40)
#define RPG_GAMECORE_FIVEDIMPHYSICSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6CFB90)

namespace RPG::GameCore
{
	class FiveDimPhysicsConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* FixedUpdateProxyPrefabPath; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPHYSICSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPhysicsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPhysicsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPHYSICSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
