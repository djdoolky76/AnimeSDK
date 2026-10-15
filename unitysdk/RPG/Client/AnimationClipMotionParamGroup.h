#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AnimationClipMotionParams.h"
namespace System { class String; }

#define RPG_CLIENT_ANIMATIONCLIPMOTIONPARAMGROUP_CHNFHCIFPAH_OFFSET UNITYSDK_OFFSET(0xE1200)

namespace RPG::Client
{
	inline static constexpr unsigned int AnimationClipMotionParamGroup_TypeDefinitionIndex = 73254;

	struct alignas(8) AnimationClipMotionParamGroup
	{
		::Il2CppArray<::RPG::Client::AnimationClipMotionParams>* MotionParams; // 0x10
		::RPG::Client::AnimationClipMotionParams CHNFHCIFPAH(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::RPG::Client::AnimationClipMotionParams(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATIONCLIPMOTIONPARAMGROUP_CHNFHCIFPAH_OFFSET))(this, a1, a2);
		}

	};
}
