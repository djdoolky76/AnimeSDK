#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }

#define AREAFADEPOINTLIGHT_CTOR_OFFSET UNITYSDK_OFFSET(0x15BC5040)
#define AREAFADEPOINTLIGHT_MANKKFNCLJK_OFFSET UNITYSDK_OFFSET(0x15BC49F0)
#define AREAFADEPOINTLIGHT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15BC4FA0)

inline static constexpr unsigned int AreaFadePointLight_TypeDefinitionIndex = 47338;

	class AreaFadePointLight : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single Range; // 0x18
		::UnityEngine::Color Color; // 0x1C
		::System::Single Intensity; // 0x2C
		::UnityEngine::Vector2 RoughnessAdjustment; // 0x30
		::System::Boolean EnableLegencyFalloff; // 0x38
		::System::Byte _padding0[0x3];
		::System::Single LegencyFalloffExp; // 0x3C
		::UnityEngine::MaterialPropertyBlock* GAPIPFFPAEC; // 0x40
		::UnityEngine::MeshRenderer* FDINKNJIKHF; // 0x48
		::System::Int32 LPHLDNMDINP; // 0x50
		::System::Int32 KKDPKHNFBDJ; // 0x54
		::System::Int32 BCNAEIDKHOM; // 0x58
		::System::Int32 HNBKMMAAOJK; // 0x5C
		::System::Int32 AENDJIJKGCJ; // 0x60
		::System::Int32 EOJCCLODMCK; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AREAFADEPOINTLIGHT_CTOR_OFFSET))(this);
		}

		::System::Void MANKKFNCLJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AREAFADEPOINTLIGHT_MANKKFNCLJK_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AREAFADEPOINTLIGHT_ONENABLE_OFFSET))(this);
		}

	};
