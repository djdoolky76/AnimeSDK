#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Keyframe.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROOTMOTIONBAKER_AGFLDJADDND_CTOR_OFFSET UNITYSDK_OFFSET(0xE063160)

namespace RPG::Client
{
	inline static constexpr unsigned int RootMotionBaker_AGFLDJADDND_TypeDefinitionIndex = 68818;

	class RootMotionBaker_AGFLDJADDND : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Keyframe>* JLDFMPACNCM; // 0x10
		::System::Single GAFENHHEBPG; // 0x18
		::System::Single LHMHCFLAHFE; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROOTMOTIONBAKER_AGFLDJADDND_CTOR_OFFSET))(this);
		}

	};
}
