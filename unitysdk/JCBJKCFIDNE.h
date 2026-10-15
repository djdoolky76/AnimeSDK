#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }

#define JCBJKCFIDNE_AFHIGNFHFIM_OFFSET UNITYSDK_OFFSET(0x1657A030)
#define JCBJKCFIDNE_CTOR_OFFSET UNITYSDK_OFFSET(0x16579F30)
#define JCBJKCFIDNE_DDBKIHOFNBE_OFFSET UNITYSDK_OFFSET(0x16579FE0)
#define JCBJKCFIDNE_GDAOBMOBMNI_OFFSET UNITYSDK_OFFSET(0x16579FA0)
#define JCBJKCFIDNE_IIFJHOJBBPM_OFFSET UNITYSDK_OFFSET(0x1657A090)
#define JCBJKCFIDNE_IOKAOGFPCJD_OFFSET UNITYSDK_OFFSET(0x16579F60)
#define JCBJKCFIDNE_OLACLDCGBIF_OFFSET UNITYSDK_OFFSET(0x1657A0E0)

inline static constexpr unsigned int JCBJKCFIDNE_TypeDefinitionIndex = 72665;

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
