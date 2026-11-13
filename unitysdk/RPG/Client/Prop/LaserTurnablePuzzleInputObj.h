#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLEINPUTOBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x171C2970)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int LaserTurnablePuzzleInputObj_TypeDefinitionIndex = 81401;

	class LaserTurnablePuzzleInputObj : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 InitDegree; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLEINPUTOBJ_CTOR_OFFSET))(this);
		}

	};
}
