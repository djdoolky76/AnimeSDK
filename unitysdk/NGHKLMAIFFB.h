#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class AnimationCurve; }

inline static constexpr unsigned int NGHKLMAIFFB_TypeDefinitionIndex = 68494;

	struct alignas(8) NGHKLMAIFFB
	{
		::UnityEngine::Quaternion MDDMGKBIEBG; // 0x10
		::UnityEngine::Vector3 HKMHPNLCHOD; // 0x20
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* CIFNCBBOHNG; // 0x30
		::System::Boolean LGMOEEMHNFA; // 0x38
	};
