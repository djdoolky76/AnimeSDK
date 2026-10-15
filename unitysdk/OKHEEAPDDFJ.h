#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define OKHEEAPDDFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C96F7F0)

inline static constexpr unsigned int OKHEEAPDDFJ_TypeDefinitionIndex = 43695;

	class OKHEEAPDDFJ : public ::System::Object
	{
	public:
		::UnityEngine::Quaternion LOLLEGPLMOO; // 0x10
		::UnityEngine::Vector3 AIBGEDIGEOO; // 0x20
		::UnityEngine::Vector3 ELHCMMCHDOB; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKHEEAPDDFJ_CTOR_OFFSET))(this);
		}

	};
