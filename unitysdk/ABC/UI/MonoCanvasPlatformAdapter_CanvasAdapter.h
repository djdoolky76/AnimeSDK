#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B39AAAD1233537D7/ABA09D021CD08194.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define ABC_UI_MONOCANVASPLATFORMADAPTER_CANVASADAPTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F57350)
#define ABC_UI_MONOCANVASPLATFORMADAPTER_CANVASADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoCanvasPlatformAdapter_CanvasAdapter_TypeDefinitionIndex = 7782;

	class MonoCanvasPlatformAdapter_CanvasAdapter : public ::System::Object
	{
	public:
		::B39AAAD1233537D7::ABA09D021CD08194 Platform; // 0x10
		::UnityEngine::Vector2 Resolution; // 0x14

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOCANVASPLATFORMADAPTER_CANVASADAPTER_TOSTRING_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOCANVASPLATFORMADAPTER_CANVASADAPTER__CTOR_OFFSET))(this);
		}
	};
}
