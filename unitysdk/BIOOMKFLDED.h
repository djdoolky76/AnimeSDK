#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }

#define BIOOMKFLDED_AFHIGNFHFIM_OFFSET UNITYSDK_OFFSET(0xB795740)
#define BIOOMKFLDED_CTOR_OFFSET UNITYSDK_OFFSET(0xB795630)
#define BIOOMKFLDED_DDBKIHOFNBE_OFFSET UNITYSDK_OFFSET(0xB7956E0)
#define BIOOMKFLDED_GDAOBMOBMNI_OFFSET UNITYSDK_OFFSET(0xB7956A0)
#define BIOOMKFLDED_IIFJHOJBBPM_OFFSET UNITYSDK_OFFSET(0xB795790)
#define BIOOMKFLDED_IOKAOGFPCJD_OFFSET UNITYSDK_OFFSET(0xB795660)
#define BIOOMKFLDED_OLACLDCGBIF_OFFSET UNITYSDK_OFFSET(0xB7957E0)

	class BIOOMKFLDED : public ::System::Object
	{
	public:
		::UnityEngine::UI::HorizontalLayoutGroup* MOJFCKDFDIG; // 0x10
		::System::Void _ctor(::UnityEngine::UI::HorizontalLayoutGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::HorizontalLayoutGroup*))((::PBYTE)hIl2Cpp + BIOOMKFLDED_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IOKAOGFPCJD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BIOOMKFLDED_IOKAOGFPCJD_OFFSET))(this);
		}

		::System::Boolean GDAOBMOBMNI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BIOOMKFLDED_GDAOBMOBMNI_OFFSET))(this);
		}

		::System::Int32 DDBKIHOFNBE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIOOMKFLDED_DDBKIHOFNBE_OFFSET))(this);
		}

		::System::Int32 AFHIGNFHFIM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIOOMKFLDED_AFHIGNFHFIM_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::RectTransform*>* IIFJHOJBBPM()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::RectTransform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIOOMKFLDED_IIFJHOJBBPM_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* OLACLDCGBIF()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIOOMKFLDED_OLACLDCGBIF_OFFSET))(this);
		}

	};
