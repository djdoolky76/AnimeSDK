#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTSPECIALVISIONCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD814DA0)
#define RPG_CLIENT_MONOEFFECTSPECIALVISIONCONTROL_FIOEFKBHKJF_OFFSET UNITYSDK_OFFSET(0xD8148A0)
#define RPG_CLIENT_MONOEFFECTSPECIALVISIONCONTROL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD814D40)
#define RPG_CLIENT_MONOEFFECTSPECIALVISIONCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD8147F0)
#define RPG_CLIENT_MONOEFFECTSPECIALVISIONCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0xD814C60)

namespace RPG::Client
{
	class MonoEffectSpecialVisionControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Renderer* scannerRenderer1; // 0x18
		::UnityEngine::Renderer* scannerRenderer2; // 0x20
		::UnityEngine::Renderer* scannerRenderer3; // 0x28
		::UnityEngine::Color scannedSceneColor; // 0x30
		::UnityEngine::Color scannedDoorSwitchColor; // 0x40
		::UnityEngine::Color scannedTreasureBoxColor; // 0x50
		::UnityEngine::Color scannedReadingsColor; // 0x60
		::UnityEngine::Color scannedPuzzleColor; // 0x70
		::UnityEngine::Color scannedLineColor; // 0x80
		::System::Single scannedIntensity; // 0x90
		::System::Byte _padding0[0x4];
		::UnityEngine::MaterialPropertyBlock* FFOFHKFFPBJ; // 0x98
		::UnityEngine::MaterialPropertyBlock* DHBPIKDKGON; // 0xA0
		::UnityEngine::MaterialPropertyBlock* CKIFFJIBCHB; // 0xA8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTSPECIALVISIONCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTSPECIALVISIONCONTROL_ONENABLE_OFFSET))(this);
		}

		::System::Void FIOEFKBHKJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTSPECIALVISIONCONTROL_FIOEFKBHKJF_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTSPECIALVISIONCONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTSPECIALVISIONCONTROL_ONDISABLE_OFFSET))(this);
		}

	};
}
