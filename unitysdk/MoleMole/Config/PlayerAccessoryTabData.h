#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PlayerAccessoryType.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI::Extension { class InteractionRangeParamFloat; }

#define MOLEMOLE_CONFIG_PLAYERACCESSORYTABDATA_CMIDJIKAAMN_OFFSET UNITYSDK_OFFSET(0x1BA4A130)
#define MOLEMOLE_CONFIG_PLAYERACCESSORYTABDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA4A120)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PlayerAccessoryTabData_TypeDefinitionIndex = 57864;

	class PlayerAccessoryTabData : public ::System::Object
	{
	public:
		::MoleMole::PlayerAccessoryType TabType; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::UI::Extension::InteractionRangeParamFloat* InteractionParamRotation; // 0x18
		::UnityEngine::UI::Extension::InteractionRangeParamFloat* InteractionParamCameraHeight; // 0x20
		::UnityEngine::UI::Extension::InteractionRangeParamFloat* InteractionParamCameraDepth; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PLAYERACCESSORYTABDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::PlayerAccessoryTabData* CMIDJIKAAMN()
		{
			return ((::MoleMole::Config::PlayerAccessoryTabData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PLAYERACCESSORYTABDATA_CMIDJIKAAMN_OFFSET))(this);
		}
	};
}
