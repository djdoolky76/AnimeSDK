#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7D5E50)
#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS27_0__DRAWGIZMOROTATE_B__0_OFFSET UNITYSDK_OFFSET(0x1F7D5E60)

namespace Foundation
{
	inline static constexpr unsigned int MyLogger___c__DisplayClass27_0_TypeDefinitionIndex = 8173;

	class MyLogger___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::UnityEngine::Quaternion rotate; // 0x10
		::UnityEngine::Vector3 pos; // 0x20
		::System::Single size; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _DrawGizmoRotate_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS27_0__DRAWGIZMOROTATE_B__0_OFFSET))(this);
		}
	};
}
