#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VisionBaseConfig; }
namespace System { class String; }

#define RPG_GAMECORE_VISIONBASECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC90680)
#define RPG_GAMECORE_VISIONBASECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC90690)
#define RPG_GAMECORE_VISIONBASECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC90400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VisionBaseConfig_TypeDefinitionIndex = 19997;

	class VisionBaseConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* VisionID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VISIONBASECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VisionBaseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VisionBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VISIONBASECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VisionBaseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VisionBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VISIONBASECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
