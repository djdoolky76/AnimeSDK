#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class FlexibleLayoutGroup; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }

#define LDNICGNCACA_AFHIGNFHFIM_OFFSET UNITYSDK_OFFSET(0xB63ECA0)
#define LDNICGNCACA_CTOR_OFFSET UNITYSDK_OFFSET(0xB63EB90)
#define LDNICGNCACA_DDBKIHOFNBE_OFFSET UNITYSDK_OFFSET(0xB63EC30)
#define LDNICGNCACA_GDAOBMOBMNI_OFFSET UNITYSDK_OFFSET(0xB63EBF0)
#define LDNICGNCACA_IIFJHOJBBPM_OFFSET UNITYSDK_OFFSET(0xB63ED10)
#define LDNICGNCACA_IOKAOGFPCJD_OFFSET UNITYSDK_OFFSET(0xB63EBB0)
#define LDNICGNCACA_OLACLDCGBIF_OFFSET UNITYSDK_OFFSET(0xB63ED80)

	class LDNICGNCACA : public ::System::Object
	{
	public:
		::RPG::Client::FlexibleLayoutGroup* MOJFCKDFDIG; // 0x10
		::System::Void _ctor(::RPG::Client::FlexibleLayoutGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FlexibleLayoutGroup*))((::PBYTE)hIl2Cpp + LDNICGNCACA_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IOKAOGFPCJD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNICGNCACA_IOKAOGFPCJD_OFFSET))(this);
		}

		::System::Boolean GDAOBMOBMNI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNICGNCACA_GDAOBMOBMNI_OFFSET))(this);
		}

		::System::Int32 DDBKIHOFNBE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNICGNCACA_DDBKIHOFNBE_OFFSET))(this);
		}

		::System::Int32 AFHIGNFHFIM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNICGNCACA_AFHIGNFHFIM_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::RectTransform*>* IIFJHOJBBPM()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::RectTransform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNICGNCACA_IIFJHOJBBPM_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* OLACLDCGBIF()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNICGNCACA_OLACLDCGBIF_OFFSET))(this);
		}

	};
