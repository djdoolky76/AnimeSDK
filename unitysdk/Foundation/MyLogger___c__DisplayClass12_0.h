#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MyLogger_GeometryType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB19DC0)
#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS12_0__DRAWCYLINDER_B__0_OFFSET UNITYSDK_OFFSET(0x1DB19DD0)

namespace Foundation
{
	inline static constexpr unsigned int MyLogger___c__DisplayClass12_0_TypeDefinitionIndex = 8170;

	class MyLogger___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::Single width; // 0x10
		::UnityEngine::Color color; // 0x14
		::System::Single height; // 0x24
		::Foundation::MyLogger_GeometryType type; // 0x28
		::UnityEngine::Vector3 position; // 0x2C
		::UnityEngine::Quaternion rotation; // 0x38
		::UnityEngine::Color wiredColor; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _DrawCylinder_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS12_0__DRAWCYLINDER_B__0_OFFSET))(this);
		}
	};
}
