#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define OOCFHHENHIH_CTOR_OFFSET UNITYSDK_OFFSET(0xBF70000)
#define OOCFHHENHIH_POINTERPOSITION_OFFSET UNITYSDK_OFFSET(0xBF6FF70)

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
