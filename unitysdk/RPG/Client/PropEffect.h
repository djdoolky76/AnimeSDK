#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EmissionMode.h"
#include "unitysdk/RPG/Client/MaterialBlockEffectBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace RPG::Client { class CommonEffectMaterialBlockOne; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_PROPEFFECT_CCFEJGBEAJE_OFFSET UNITYSDK_OFFSET(0xDDF4740)
#define RPG_CLIENT_PROPEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xDDF4930)
#define RPG_CLIENT_PROPEFFECT_DEAMMEKPNMK_OFFSET UNITYSDK_OFFSET(0xDDF44C0)
#define RPG_CLIENT_PROPEFFECT_FOIAJHFKCNC_OFFSET UNITYSDK_OFFSET(0xDDF4060)
#define RPG_CLIENT_PROPEFFECT_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xDDF4830)
#define RPG_CLIENT_PROPEFFECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xDDF4880)
#define RPG_CLIENT_PROPEFFECT_RESET_OFFSET UNITYSDK_OFFSET(0xDDF47E0)

namespace RPG::Client
{
	inline static constexpr unsigned int PropEffect_TypeDefinitionIndex = 70705;

	class PropEffect : public ::RPG::Client::MaterialBlockEffectBase
	{
	public:
		::UnityEngine::Color TargetEmissionColor; // 0x60
		::UnityEngine::Color TargetEmissionColorNight; // 0x70
		::UnityEngine::Color TargetEmissionColor1; // 0x80
		::UnityEngine::Color TargetEmissionColor2; // 0x90
		::UnityEngine::Color TargetEmissionColor3; // 0xA0
		::System::Boolean KeyEmissionColorIsOn; // 0xB0
		::System::Byte _padding0[0x3];
		::System::Single KeyEmissionColorLerpVal; // 0xB4
		::System::Single KeyEmissionColorNightLerpVal; // 0xB8
		::System::Single KeyEmissionIntensity; // 0xBC
		::System::Single KeyEmissionIntensityNight; // 0xC0
		::RPG::Client::EmissionMode CurrentEmissionMode; // 0xC4
		::System::Single KeyEmissionColorLerpVal0; // 0xC8
		::System::Single KeyEmissionColorLerpVal1; // 0xCC
		::System::Single KeyEmissionColorLerpVal2; // 0xD0
		::System::Single KeyEmissionColorLerpVal3; // 0xD4
		::System::Boolean KeyEmissionRimFromNormal; // 0xD8
		::System::Byte _padding1[0x3];
		::UnityEngine::Color FresnelColor; // 0xDC
		::UnityEngine::Vector4 FresnelBSI; // 0xEC
		::System::Single FresnelColorStrength; // 0xFC
		::System::Boolean EFLDJDJGKMF; // 0x100
		::System::Boolean KeyDissolveIsOn; // 0x101
		::System::Byte _padding2[0x2];
		::System::Single KeyDissolveBase; // 0x104
		::System::Single KeyAlphaDistance; // 0x108
		::System::Single KeyAlpha; // 0x10C
		::System::Boolean KeyTillingOffset; // 0x110
		::System::Byte _padding3[0x3];
		::UnityEngine::Vector4 TillingOffset; // 0x114
		::System::Byte _padding4[0x4];
		::UnityEngine::Animator* LCCKDHJPKHF; // 0x128
		::Il2CppArray<::RPG::Client::CommonEffectMaterialBlockOne*>* CommonMaterialBlocks; // 0x130
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPEFFECT_CTOR_OFFSET))(this);
		}

		::System::Void FOIAJHFKCNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPEFFECT_FOIAJHFKCNC_OFFSET))(this);
		}

		::System::Void DEAMMEKPNMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPEFFECT_DEAMMEKPNMK_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPEFFECT_RESET_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPEFFECT_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Boolean CCFEJGBEAJE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPEFFECT_CCFEJGBEAJE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPEFFECT_ONENABLE_OFFSET))(this);
		}

	};
}
