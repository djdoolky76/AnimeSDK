#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define OKHEEAPDDFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB5F9A0)

inline static constexpr unsigned int OKHEEAPDDFJ_TypeDefinitionIndex = 44678;

	class OKHEEAPDDFJ : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 AIBGEDIGEOO; // 0x10
		::UnityEngine::Quaternion LOLLEGPLMOO; // 0x1C
		::UnityEngine::Vector3 ELHCMMCHDOB; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKHEEAPDDFJ_CTOR_OFFSET))(this);
		}

	};
