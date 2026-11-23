#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B39AAAD1233537D7/ABA09D021CD08194.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace ABC::UI { class MonoCanvasPlatformAdapter_CanvasAdapter; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ABC_UI_MONOCANVASPLATFORMADAPTER_BE6B77A7115E9E13_OFFSET UNITYSDK_OFFSET(0x1F5E710)
#define ABC_UI_MONOCANVASPLATFORMADAPTER_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x1F5E5B0)
#define ABC_UI_MONOCANVASPLATFORMADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5E7D0)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoCanvasPlatformAdapter_TypeDefinitionIndex = 7783;

	class MonoCanvasPlatformAdapter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _canvasPlatformAdapters; // 0x20
		::System::Collections::Generic::Dictionary_2<::B39AAAD1233537D7::ABA09D021CD08194, ::System::Object*>* F9A855516DD54D30; // 0x28
		::UnityEngine::Vector2 MinAspectRatio; // 0x30
		::UnityEngine::Vector2 MaxAspectRatio; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOCANVASPLATFORMADAPTER__CTOR_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOCANVASPLATFORMADAPTER_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::ABC::UI::MonoCanvasPlatformAdapter_CanvasAdapter* BE6B77A7115E9E13(::B39AAAD1233537D7::ABA09D021CD08194 E6F4A2DF23827909)
		{
			return ((::ABC::UI::MonoCanvasPlatformAdapter_CanvasAdapter*(*)(::PVOID, ::B39AAAD1233537D7::ABA09D021CD08194))((::PBYTE)hIl2Cpp + ABC_UI_MONOCANVASPLATFORMADAPTER_BE6B77A7115E9E13_OFFSET))(this, E6F4A2DF23827909);
		}
	};
}
