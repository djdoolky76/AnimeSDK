#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElationCameraWhiteBoxConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ELATIONCAMERAWHITEBOXCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6320C0)
#define RPG_GAMECORE_ELATIONCAMERAWHITEBOXCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D631EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElationCameraWhiteBoxConfig_TypeDefinitionIndex = 16545;

	class ElationCameraWhiteBoxConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single FOV; // 0x10
		::RPG::MVector3 AnchorOffset; // 0x14
		::System::String* TargetAttachPoint; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONCAMERAWHITEBOXCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElationCameraWhiteBoxConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElationCameraWhiteBoxConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONCAMERAWHITEBOXCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
