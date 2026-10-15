#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FreeStyleAnimEventConfig; }
namespace RPG::GameCore { class FreeStyleAnimEventInfoConfig; }
namespace RPG::GameCore { class FreeStyleAnimGroupEventConfig; }

#define RPG_GAMECORE_FREESTYLEANIMEVENTINFOCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F35A0)
#define RPG_GAMECORE_FREESTYLEANIMEVENTINFOCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F3470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleAnimEventInfoConfig_TypeDefinitionIndex = 16303;

	class FreeStyleAnimEventInfoConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FreeStyleAnimGroupEventConfig*>* FreeStyleClipGroupEvents; // 0x10
		::Il2CppArray<::RPG::GameCore::FreeStyleAnimEventConfig*>* FreeStyleClipEvents; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEANIMEVENTINFOCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FreeStyleAnimEventInfoConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FreeStyleAnimEventInfoConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEANIMEVENTINFOCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
