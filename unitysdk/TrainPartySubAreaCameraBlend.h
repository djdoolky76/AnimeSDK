#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VCameraBlendType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/BDKPOKGBPIH.h"
namespace UnityEngine { class AnimationCurve; }

#define TRAINPARTYSUBAREACAMERABLEND_CTOR_OFFSET UNITYSDK_OFFSET(0xE9D8C00)
#define TRAINPARTYSUBAREACAMERABLEND_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xE9D8B80)

inline static constexpr unsigned int TrainPartySubAreaCameraBlend_TypeDefinitionIndex = 47107;

	class TrainPartySubAreaCameraBlend : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::GameCore::VCameraBlendType BlendType; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* CustomCurve; // 0x20
		::System::Single BlendTime; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRAINPARTYSUBAREACAMERABLEND_CTOR_OFFSET))(this);
		}

		::BDKPOKGBPIH GetConfig()
		{
			return ((::BDKPOKGBPIH(*)(::PVOID))((::PBYTE)hIl2Cpp + TRAINPARTYSUBAREACAMERABLEND_GETCONFIG_OFFSET))(this);
		}

	};
