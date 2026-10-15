#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/PlayableBinding.h"
class EKAFJOGBCFA;

#define HPPNAAGGAMP___C__DISPLAYCLASS9_1_CTOR_OFFSET UNITYSDK_OFFSET(0x15DD50B0)
#define HPPNAAGGAMP___C__DISPLAYCLASS9_1__PLAYTIMELINE_B__1_OFFSET UNITYSDK_OFFSET(0x15DD50C0)

inline static constexpr unsigned int HPPNAAGGAMP___c__DisplayClass9_1_TypeDefinitionIndex = 48489;

	template <typename T>
	class HPPNAAGGAMP___c__DisplayClass9_1 : public ::System::Object
	{
	public:
		::UnityEngine::Playables::PlayableBinding playableBinding; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPNAAGGAMP___C__DISPLAYCLASS9_1_CTOR_OFFSET))(this);
		}

		::System::Boolean _PlayTimeline_b__1(::EKAFJOGBCFA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKAFJOGBCFA*))((::PBYTE)hIl2Cpp + HPPNAAGGAMP___C__DISPLAYCLASS9_1__PLAYTIMELINE_B__1_OFFSET))(this, a1);
		}

	};
