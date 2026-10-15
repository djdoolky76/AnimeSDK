#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ILFILLOHKIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB78390)

	class ILFILLOHKIL : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 AIBGEDIGEOO; // 0x10
		::UnityEngine::Vector3 ELHCMMCHDOB; // 0x1C
		::UnityEngine::Quaternion LOLLEGPLMOO; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFILLOHKIL_CTOR_OFFSET))(this);
		}

	};
