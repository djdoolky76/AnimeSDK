#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VCameraBlendType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/BDKPOKGBPIH.h"
namespace UnityEngine { class AnimationCurve; }

#define TRAINPARTYCAMERABLEND_CTOR_OFFSET UNITYSDK_OFFSET(0xE9E3570)
#define TRAINPARTYCAMERABLEND_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xE9E34F0)

inline static constexpr unsigned int TrainPartyCameraBlend_TypeDefinitionIndex = 47106;

	class TrainPartyCameraBlend : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::GameCore::VCameraBlendType BlendType; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* CustomCurve; // 0x20
		::System::Single BlendTime; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRAINPARTYCAMERABLEND_CTOR_OFFSET))(this);
		}

		::BDKPOKGBPIH GetConfig()
		{
			return ((::BDKPOKGBPIH(*)(::PVOID))((::PBYTE)hIl2Cpp + TRAINPARTYCAMERABLEND_GETCONFIG_OFFSET))(this);
		}

	};
