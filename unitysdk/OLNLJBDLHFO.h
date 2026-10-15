#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class GridLayoutGroup; }

#define OLNLJBDLHFO_AFHIGNFHFIM_OFFSET UNITYSDK_OFFSET(0xBF0C770)
#define OLNLJBDLHFO_CTOR_OFFSET UNITYSDK_OFFSET(0xBF0C640)
#define OLNLJBDLHFO_DDBKIHOFNBE_OFFSET UNITYSDK_OFFSET(0xBF0C720)
#define OLNLJBDLHFO_GDAOBMOBMNI_OFFSET UNITYSDK_OFFSET(0xBF0C660)
#define OLNLJBDLHFO_IIFJHOJBBPM_OFFSET UNITYSDK_OFFSET(0xBF0C7C0)
#define OLNLJBDLHFO_IOKAOGFPCJD_OFFSET UNITYSDK_OFFSET(0xBF0C6C0)
#define OLNLJBDLHFO_OLACLDCGBIF_OFFSET UNITYSDK_OFFSET(0xBF0C820)

inline static constexpr unsigned int OLNLJBDLHFO_TypeDefinitionIndex = 72662;

	class OLNLJBDLHFO : public ::System::Object
	{
	public:
		::UnityEngine::UI::GridLayoutGroup* MOJFCKDFDIG; // 0x10
		::System::Void _ctor(::UnityEngine::UI::GridLayoutGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::GridLayoutGroup*))((::PBYTE)hIl2Cpp + OLNLJBDLHFO_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean GDAOBMOBMNI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNLJBDLHFO_GDAOBMOBMNI_OFFSET))(this);
		}

		::System::Boolean IOKAOGFPCJD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNLJBDLHFO_IOKAOGFPCJD_OFFSET))(this);
		}

		::System::Int32 DDBKIHOFNBE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNLJBDLHFO_DDBKIHOFNBE_OFFSET))(this);
		}

		::System::Int32 AFHIGNFHFIM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNLJBDLHFO_AFHIGNFHFIM_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::RectTransform*>* IIFJHOJBBPM()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::RectTransform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNLJBDLHFO_IIFJHOJBBPM_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* OLACLDCGBIF()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNLJBDLHFO_OLACLDCGBIF_OFFSET))(this);
		}

	};
