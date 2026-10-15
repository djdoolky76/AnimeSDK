#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define OKHEEAPDDFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C99DAC0)

	class OKHEEAPDDFJ : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 ELHCMMCHDOB; // 0x10
		::UnityEngine::Quaternion LOLLEGPLMOO; // 0x1C
		::UnityEngine::Vector3 AIBGEDIGEOO; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKHEEAPDDFJ_CTOR_OFFSET))(this);
		}

	};
