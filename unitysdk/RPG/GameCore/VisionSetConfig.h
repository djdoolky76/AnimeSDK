#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VisionSetConfig; }
namespace System { class String; }

#define RPG_GAMECORE_VISIONSETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC90BC0)
#define RPG_GAMECORE_VISIONSETCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC90B00)

namespace RPG::GameCore
{
	class VisionSetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* VisionNames; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VISIONSETCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VisionSetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VisionSetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VISIONSETCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
