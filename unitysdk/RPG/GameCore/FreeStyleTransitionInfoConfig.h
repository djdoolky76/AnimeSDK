#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FreeStyleMotionInfoConfig; }
namespace RPG::GameCore { class FreeStyleTransitionInfoConfig; }

#define RPG_GAMECORE_FREESTYLETRANSITIONINFOCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F51A0)
#define RPG_GAMECORE_FREESTYLETRANSITIONINFOCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F50E0)

namespace RPG::GameCore
{
	class FreeStyleTransitionInfoConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FreeStyleMotionInfoConfig*>* FreeStyleMotionInfos; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLETRANSITIONINFOCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FreeStyleTransitionInfoConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FreeStyleTransitionInfoConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLETRANSITIONINFOCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
