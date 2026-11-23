#pragma once
#include "unitysdk/unitysdk.h"

namespace TMPro { class TextMeshProUGUI; }
namespace UnityEngine { class GameObject; }

#define ABC_DEVINFO_MONODEVINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9E060)

namespace ABC::DevInfo
{
	inline static constexpr unsigned int MonoDevInfo_TypeDefinitionIndex = 7970;

	class MonoDevInfo
	{
	public:
		::TMPro::TextMeshProUGUI* EnvText; // 0x20
		::TMPro::TextMeshProUGUI* SceneText; // 0x28
		::TMPro::TextMeshProUGUI* SceneLabel; // 0x30
		::TMPro::TextMeshProUGUI* ExtraSceneText; // 0x38
		::TMPro::TextMeshProUGUI* ExtraSceneLabel; // 0x40
		::UnityEngine::GameObject* SceneRoot; // 0x48
		::TMPro::TextMeshProUGUI* ExtraInfo; // 0x50
		::TMPro::TextMeshProUGUI* RandomSeedText; // 0x58
		::UnityEngine::GameObject* RandomSeedRoot; // 0x60
		::TMPro::TextMeshProUGUI* VersionText; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_DEVINFO_MONODEVINFO__CTOR_OFFSET))(this);
		}
	};
}
