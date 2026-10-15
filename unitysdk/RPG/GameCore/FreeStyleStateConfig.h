#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FreeStyleState; }
namespace RPG::GameCore { class FreeStyleStateConfig; }

#define RPG_GAMECORE_FREESTYLESTATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F4B70)
#define RPG_GAMECORE_FREESTYLESTATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F4A40)

namespace RPG::GameCore
{
	class FreeStyleStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FreeStyleState*>* StateList; // 0x10
		::System::Single GlobalStartMotionExitNormalizedTime; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLESTATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FreeStyleStateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FreeStyleStateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLESTATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
