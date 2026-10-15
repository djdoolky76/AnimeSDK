#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FreeStyleAnimClipGroupZoneInfo; }
namespace RPG::GameCore { class FreeStyleAnimClipZoneInfo; }
namespace RPG::GameCore { class FreeStyleAnimZoneConfig; }

#define RPG_GAMECORE_FREESTYLEANIMZONECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C5EB0)
#define RPG_GAMECORE_FREESTYLEANIMZONECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C5D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleAnimZoneConfig_TypeDefinitionIndex = 16306;

	class FreeStyleAnimZoneConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FreeStyleAnimClipGroupZoneInfo*>* ClipGroupZones; // 0x10
		::Il2CppArray<::RPG::GameCore::FreeStyleAnimClipZoneInfo*>* ClipZones; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEANIMZONECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FreeStyleAnimZoneConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FreeStyleAnimZoneConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEANIMZONECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
