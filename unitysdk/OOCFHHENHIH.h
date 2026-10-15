#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define OOCFHHENHIH_CTOR_OFFSET UNITYSDK_OFFSET(0xBF689D0)
#define OOCFHHENHIH_POINTERPOSITION_OFFSET UNITYSDK_OFFSET(0xBF68940)

inline static constexpr unsigned int OOCFHHENHIH_TypeDefinitionIndex = 72954;

	class OOCFHHENHIH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCFHHENHIH_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 PointerPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCFHHENHIH_POINTERPOSITION_OFFSET))(this);
		}

	};
