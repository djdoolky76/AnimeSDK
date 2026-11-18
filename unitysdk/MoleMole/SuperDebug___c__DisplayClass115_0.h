#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_SUPERDEBUG___C__DISPLAYCLASS115_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB37000)
#define MOLEMOLE_SUPERDEBUG___C__DISPLAYCLASS115_0__DRAWCIRCLE_B__0_OFFSET UNITYSDK_OFFSET(0x1DB37010)

namespace MoleMole
{
	inline static constexpr unsigned int SuperDebug___c__DisplayClass115_0_TypeDefinitionIndex = 7956;

	class SuperDebug___c__DisplayClass115_0 : public ::System::Object
	{
	public:
		::System::Single duration; // 0x10
		::System::Single size; // 0x14
		::System::Boolean depthTest; // 0x18
		::System::Byte _padding0[0x3];
		::UnityEngine::Color color; // 0x1C
		::UnityEngine::Vector3 centerPoint; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG___C__DISPLAYCLASS115_0__CTOR_OFFSET))(this);
		}

		::System::Void _DrawCircle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG___C__DISPLAYCLASS115_0__DRAWCIRCLE_B__0_OFFSET))(this);
		}
	};
}
