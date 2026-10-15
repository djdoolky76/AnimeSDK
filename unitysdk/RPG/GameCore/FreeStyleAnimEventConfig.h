#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FreeStyleAnimEventConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FREESTYLEANIMEVENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F3340)
#define RPG_GAMECORE_FREESTYLEANIMEVENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F30C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleAnimEventConfig_TypeDefinitionIndex = 16300;

	class FreeStyleAnimEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* FreeStyleClipName; // 0x10
		::System::Single NormalizedTime; // 0x18
		::System::Boolean OnlyTriggerInFirstLoop; // 0x1C
		::System::Byte _padding0[0x3];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* EventList; // 0x20
		::System::String* AllowTriggerLayer; // 0x28
		::System::Boolean ForceTrigger; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEANIMEVENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FreeStyleAnimEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FreeStyleAnimEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEANIMEVENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
