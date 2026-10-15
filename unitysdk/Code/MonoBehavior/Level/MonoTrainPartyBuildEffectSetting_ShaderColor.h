#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
namespace System { class String; }
namespace UnityEngine { class Material; }

#define CODE_MONOBEHAVIOR_LEVEL_MONOTRAINPARTYBUILDEFFECTSETTING_SHADERCOLOR_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xF0DD0)

namespace Code::MonoBehavior::Level
{
	struct alignas(8) MonoTrainPartyBuildEffectSetting_ShaderColor
	{
		::System::String* name; // 0x10
		::UnityEngine::Color value; // 0x18
		::System::Void PKADDEPKJFN(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CODE_MONOBEHAVIOR_LEVEL_MONOTRAINPARTYBUILDEFFECTSETTING_SHADERCOLOR_PKADDEPKJFN_OFFSET))(this, a1);
		}

	};
}
