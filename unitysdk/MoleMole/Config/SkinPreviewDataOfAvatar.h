#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI::Extension { class InteractionRangeParamFloat; }

#define MOLEMOLE_CONFIG_SKINPREVIEWDATAOFAVATAR_CMIDJIKAAMN_OFFSET UNITYSDK_OFFSET(0x1B4500D0)
#define MOLEMOLE_CONFIG_SKINPREVIEWDATAOFAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4500C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SkinPreviewDataOfAvatar_TypeDefinitionIndex = 54303;

	class SkinPreviewDataOfAvatar : public ::System::Object
	{
	public:
		::UnityEngine::UI::Extension::InteractionRangeParamFloat* InteractionParamRotation; // 0x10
		::UnityEngine::UI::Extension::InteractionRangeParamFloat* InteractionParamCameraHeight; // 0x18
		::UnityEngine::UI::Extension::InteractionRangeParamFloat* InteractionParamCameraDepth; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SKINPREVIEWDATAOFAVATAR__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::SkinPreviewDataOfAvatar* CMIDJIKAAMN()
		{
			return ((::MoleMole::Config::SkinPreviewDataOfAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SKINPREVIEWDATAOFAVATAR_CMIDJIKAAMN_OFFSET))(this);
		}
	};
}
