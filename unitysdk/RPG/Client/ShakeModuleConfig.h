#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraModuleConfigBase.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_SHAKEMODULECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xE0AC530)
#define RPG_CLIENT_SHAKEMODULECONFIG_JIGLNEDJDCC_OFFSET UNITYSDK_OFFSET(0xE0AC4E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ShakeModuleConfig_TypeDefinitionIndex = 69686;

	class ShakeModuleConfig : public ::RPG::Client::CameraModuleConfigBase
	{
	public:
		::UnityEngine::AnimationCurve* AmplitudeAttenuationCurve; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAKEMODULECONFIG_CTOR_OFFSET))(this);
		}

		::RPG::Client::CameraModuleType JIGLNEDJDCC()
		{
			return ((::RPG::Client::CameraModuleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAKEMODULECONFIG_JIGLNEDJDCC_OFFSET))(this);
		}

	};
}
