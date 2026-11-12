#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MONOWOLFBROBULLETPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0xE2D2920)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoWolfBroBulletPoint_TypeDefinitionIndex = 70672;

	class MonoWolfBroBulletPoint : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOWOLFBROBULLETPOINT_CTOR_OFFSET))(this);
		}

	};
}
