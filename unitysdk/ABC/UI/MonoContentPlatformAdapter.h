#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B39AAAD1233537D7/ABA09D021CD08194.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ABC_UI_MONOCONTENTPLATFORMADAPTER_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x21F51F0)
#define ABC_UI_MONOCONTENTPLATFORMADAPTER_EA50AA99F8254E8C_OFFSET UNITYSDK_OFFSET(0x21F5320)
#define ABC_UI_MONOCONTENTPLATFORMADAPTER_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x21F4FA0)
#define ABC_UI_MONOCONTENTPLATFORMADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x21F5560)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoContentPlatformAdapter_TypeDefinitionIndex = 9012;

	class MonoContentPlatformAdapter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _contentPlatformAdapters; // 0x20
		::System::Collections::Generic::Dictionary_2<::B39AAAD1233537D7::ABA09D021CD08194, ::System::Object*>* FF7E11A882C4FA06; // 0x28
		::UnityEngine::Vector3 BC235F759D629F88; // 0x30
		::UnityEngine::Vector2 FAFD7BEBA886BDF5; // 0x3C
		::System::Boolean E82B5D2C9BAAA08C; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOCONTENTPLATFORMADAPTER__CTOR_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOCONTENTPLATFORMADAPTER_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOCONTENTPLATFORMADAPTER_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void EA50AA99F8254E8C(::B39AAAD1233537D7::ABA09D021CD08194 E6F4A2DF23827909)
		{
			return ((::System::Void(*)(::PVOID, ::B39AAAD1233537D7::ABA09D021CD08194))((::PBYTE)hIl2Cpp + ABC_UI_MONOCONTENTPLATFORMADAPTER_EA50AA99F8254E8C_OFFSET))(this, E6F4A2DF23827909);
		}
	};
}
