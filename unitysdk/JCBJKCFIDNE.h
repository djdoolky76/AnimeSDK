#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }

#define JCBJKCFIDNE_AFHIGNFHFIM_OFFSET UNITYSDK_OFFSET(0x19A7C7B0)
#define JCBJKCFIDNE_CTOR_OFFSET UNITYSDK_OFFSET(0x19A7C6B0)
#define JCBJKCFIDNE_DDBKIHOFNBE_OFFSET UNITYSDK_OFFSET(0x19A7C760)
#define JCBJKCFIDNE_GDAOBMOBMNI_OFFSET UNITYSDK_OFFSET(0x19A7C720)
#define JCBJKCFIDNE_IIFJHOJBBPM_OFFSET UNITYSDK_OFFSET(0x19A7C810)
#define JCBJKCFIDNE_IOKAOGFPCJD_OFFSET UNITYSDK_OFFSET(0x19A7C6E0)
#define JCBJKCFIDNE_OLACLDCGBIF_OFFSET UNITYSDK_OFFSET(0x19A7C860)

inline static constexpr unsigned int JCBJKCFIDNE_TypeDefinitionIndex = 74743;

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
