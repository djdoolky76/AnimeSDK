#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Photo/PlayableGraphAnimatorControllerSingleParameter.h"
#include "unitysdk/GEJBEABEKPG.h"
#include "unitysdk/UnityEngine/Animations/AnimatorControllerPlayable.h"

#define MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERFLOAT_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x135CA350)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x135CA3F0)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int PlayableGraphAnimatorControllerFloat_TypeDefinitionIndex = 63951;

	class PlayableGraphAnimatorControllerFloat : public ::MoleMole::Photo::PlayableGraphAnimatorControllerSingleParameter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERFLOAT__CTOR_OFFSET))(this);
		}

		::GEJBEABEKPG Instantiate(::UnityEngine::Animations::AnimatorControllerPlayable controller)
		{
			return ((::GEJBEABEKPG(*)(::PVOID, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERFLOAT_INSTANTIATE_OFFSET))(this, controller);
		}
	};
}
