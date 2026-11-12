#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventSystems/MoveDirection.h"

#define MOIOIIICKOI_CTOR_OFFSET UNITYSDK_OFFSET(0xC2EBC40)
#define MOIOIIICKOI_GET_MOVEDIRECTION_OFFSET UNITYSDK_OFFSET(0xC2EBC20)
#define MOIOIIICKOI_SET_MOVEDIRECTION_OFFSET UNITYSDK_OFFSET(0xC2EBC30)

inline static constexpr unsigned int MOIOIIICKOI_TypeDefinitionIndex = 70909;

	class MOIOIIICKOI : public ::System::Object
	{
	public:
		::UnityEngine::EventSystems::MoveDirection _MoveDirection_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIOIIICKOI_CTOR_OFFSET))(this);
		}

		::UnityEngine::EventSystems::MoveDirection get_MoveDirection()
		{
			return ((::UnityEngine::EventSystems::MoveDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIOIIICKOI_GET_MOVEDIRECTION_OFFSET))(this);
		}

		::System::Void set_MoveDirection(::UnityEngine::EventSystems::MoveDirection a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::MoveDirection))((::PBYTE)hIl2Cpp + MOIOIIICKOI_SET_MOVEDIRECTION_OFFSET))(this, a1);
		}

	};
