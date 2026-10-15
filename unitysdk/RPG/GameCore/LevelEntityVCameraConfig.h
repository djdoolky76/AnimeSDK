#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelEntityVCameraConfig; }

#define RPG_GAMECORE_LEVELENTITYVCAMERACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D77EDC0)
#define RPG_GAMECORE_LEVELENTITYVCAMERACONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D77EBA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityVCameraConfig_TypeDefinitionIndex = 17259;

	class LevelEntityVCameraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 VCFollowOffset; // 0x10
		::RPG::MVector3 VCLookAtOffset; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYVCAMERACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelEntityVCameraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelEntityVCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYVCAMERACONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
