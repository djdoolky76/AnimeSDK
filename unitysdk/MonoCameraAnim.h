#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOCAMERAANIM_CTOR_OFFSET UNITYSDK_OFFSET(0xC30D150)

inline static constexpr unsigned int MonoCameraAnim_TypeDefinitionIndex = 48595;

	class MonoCameraAnim : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single focalLength; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCAMERAANIM_CTOR_OFFSET))(this);
		}

	};
