#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"
namespace UnityEngine { class AnimationCurve; }

	struct alignas(8) CPCIFLHOOMC
	{
		::UnityEngine::Quaternion ICGKFDEILKA; // 0x10
		::UnityEngine::Quaternion OLCHHDKKPLI; // 0x20
		::System::Single IEHPFADHJFD; // 0x30
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* NLIFDJHPHLP; // 0x38
	};
