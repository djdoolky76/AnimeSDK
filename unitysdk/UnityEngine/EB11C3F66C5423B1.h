#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationClip; }

#define UNITYENGINE_EB11C3F66C5423B1_BC74E2C1F0DB9448_OFFSET UNITYSDK_OFFSET(0x4103630)
#define UNITYENGINE_EB11C3F66C5423B1_BF80D5D4B557B82D_OFFSET UNITYSDK_OFFSET(0x41035F0)
#define UNITYENGINE_EB11C3F66C5423B1_E37423563BE293FA_OFFSET UNITYSDK_OFFSET(0x39CC0F0)

namespace UnityEngine
{
	inline static constexpr unsigned int EB11C3F66C5423B1_TypeDefinitionIndex = 21059;

	struct alignas(4) EB11C3F66C5423B1
	{
		::System::Int32 BD3F48415296FBD5; // 0x10
		::System::Single B4F80204B0126F3F; // 0x14

		::UnityEngine::AnimationClip* BC74E2C1F0DB9448()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EB11C3F66C5423B1_BC74E2C1F0DB9448_OFFSET))(this);
		}

		static ::UnityEngine::AnimationClip* BF80D5D4B557B82D(::System::Int32 FE9CAAA41DBEC223)
		{
			return ((::UnityEngine::AnimationClip*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EB11C3F66C5423B1_BF80D5D4B557B82D_OFFSET))(FE9CAAA41DBEC223);
		}

		::System::Single E37423563BE293FA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EB11C3F66C5423B1_E37423563BE293FA_OFFSET))(this);
		}
	};
}
