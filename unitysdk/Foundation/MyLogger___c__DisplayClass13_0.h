#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MyLogger_GeometryType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A0A90)
#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS13_0__DRAWPYRAMIDR_B__0_OFFSET UNITYSDK_OFFSET(0x1E0A0AA0)

namespace Foundation
{
	inline static constexpr unsigned int MyLogger___c__DisplayClass13_0_TypeDefinitionIndex = 8164;

	class MyLogger___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 position; // 0x10
		::Foundation::MyLogger_GeometryType type; // 0x1C
		::System::Single height; // 0x20
		::UnityEngine::Color color; // 0x24
		::UnityEngine::Color wiredColor; // 0x34
		::UnityEngine::Quaternion rotation; // 0x44
		::System::Single width; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _DrawPyramidr_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS13_0__DRAWPYRAMIDR_B__0_OFFSET))(this);
		}
	};
}
