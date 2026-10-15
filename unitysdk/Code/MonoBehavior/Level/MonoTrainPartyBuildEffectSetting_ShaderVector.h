#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class String; }
namespace UnityEngine { class Material; }

#define CODE_MONOBEHAVIOR_LEVEL_MONOTRAINPARTYBUILDEFFECTSETTING_SHADERVECTOR_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xF0F00)

namespace Code::MonoBehavior::Level
{
	struct alignas(8) MonoTrainPartyBuildEffectSetting_ShaderVector
	{
		::System::String* name; // 0x10
		::UnityEngine::Vector4 value; // 0x18
		::System::Void PKADDEPKJFN(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CODE_MONOBEHAVIOR_LEVEL_MONOTRAINPARTYBUILDEFFECTSETTING_SHADERVECTOR_PKADDEPKJFN_OFFSET))(this, a1);
		}

	};
}
