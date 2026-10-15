#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }

#define JCBJKCFIDNE_AFHIGNFHFIM_OFFSET UNITYSDK_OFFSET(0x1656C100)
#define JCBJKCFIDNE_CTOR_OFFSET UNITYSDK_OFFSET(0x1656C000)
#define JCBJKCFIDNE_DDBKIHOFNBE_OFFSET UNITYSDK_OFFSET(0x1656C0B0)
#define JCBJKCFIDNE_GDAOBMOBMNI_OFFSET UNITYSDK_OFFSET(0x1656C070)
#define JCBJKCFIDNE_IIFJHOJBBPM_OFFSET UNITYSDK_OFFSET(0x1656C160)
#define JCBJKCFIDNE_IOKAOGFPCJD_OFFSET UNITYSDK_OFFSET(0x1656C030)
#define JCBJKCFIDNE_OLACLDCGBIF_OFFSET UNITYSDK_OFFSET(0x1656C1B0)

inline static constexpr unsigned int JCBJKCFIDNE_TypeDefinitionIndex = 72664;

	class JCBJKCFIDNE : public ::System::Object
	{
	public:
		::UnityEngine::UI::VerticalLayoutGroup* MOJFCKDFDIG; // 0x10
		::System::Void _ctor(::UnityEngine::UI::VerticalLayoutGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VerticalLayoutGroup*))((::PBYTE)hIl2Cpp + JCBJKCFIDNE_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IOKAOGFPCJD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCBJKCFIDNE_IOKAOGFPCJD_OFFSET))(this);
		}

		::System::Boolean GDAOBMOBMNI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCBJKCFIDNE_GDAOBMOBMNI_OFFSET))(this);
		}

		::System::Int32 DDBKIHOFNBE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCBJKCFIDNE_DDBKIHOFNBE_OFFSET))(this);
		}

		::System::Int32 AFHIGNFHFIM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCBJKCFIDNE_AFHIGNFHFIM_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::RectTransform*>* IIFJHOJBBPM()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::RectTransform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCBJKCFIDNE_IIFJHOJBBPM_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* OLACLDCGBIF()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCBJKCFIDNE_OLACLDCGBIF_OFFSET))(this);
		}

	};
