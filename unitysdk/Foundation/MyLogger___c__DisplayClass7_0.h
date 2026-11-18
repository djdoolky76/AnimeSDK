#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MyLogger_GeometryType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4DBE70)
#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS7_0__DRAWCAPSULE_B__0_OFFSET UNITYSDK_OFFSET(0x1F4DBE80)

namespace Foundation
{
	inline static constexpr unsigned int MyLogger___c__DisplayClass7_0_TypeDefinitionIndex = 8172;

	class MyLogger___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::Foundation::MyLogger_GeometryType type; // 0x10
		::UnityEngine::Color wiredColor; // 0x14
		::System::Single height; // 0x24
		::UnityEngine::Vector3 position; // 0x28
		::System::Single width; // 0x34
		::UnityEngine::Quaternion rotation; // 0x38
		::UnityEngine::Color color; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _DrawCapsule_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS7_0__DRAWCAPSULE_B__0_OFFSET))(this);
		}
	};
}
