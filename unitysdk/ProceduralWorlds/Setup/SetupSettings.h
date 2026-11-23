#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine { class Texture2D; }

#define PROCEDURALWORLDS_SETUP_SETUPSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F270C0)

namespace ProceduralWorlds::Setup
{
	inline static constexpr unsigned int SetupSettings_TypeDefinitionIndex = 15831;

	class SetupSettings : public ::UnityEngine::ScriptableObject
	{
	public:
		::UnityEngine::Texture2D* m_IconWarning; // 0x18
		::UnityEngine::Texture2D* m_IconOK; // 0x20
		::UnityEngine::Texture2D* m_IconNoUnityPackage; // 0x28
		::UnityEngine::Texture2D* m_IconNotInstalled; // 0x30
		::UnityEngine::Texture2D* m_IconUpdateAvailable; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROCEDURALWORLDS_SETUP_SETUPSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
