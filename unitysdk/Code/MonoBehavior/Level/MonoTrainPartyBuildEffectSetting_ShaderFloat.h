#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }
namespace UnityEngine { class Material; }

#define CODE_MONOBEHAVIOR_LEVEL_MONOTRAINPARTYBUILDEFFECTSETTING_SHADERFLOAT_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xF0E70)

namespace Code::MonoBehavior::Level
{
	struct alignas(8) MonoTrainPartyBuildEffectSetting_ShaderFloat
	{
		::System::String* name; // 0x10
		::System::Single value; // 0x18
		::System::Void PKADDEPKJFN(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CODE_MONOBEHAVIOR_LEVEL_MONOTRAINPARTYBUILDEFFECTSETTING_SHADERFLOAT_PKADDEPKJFN_OFFSET))(this, a1);
		}

	};
}
