#pragma once
#include "unitysdk/unitysdk.h"
class KCFOCCAGGAN;

#define KCFOCCAGGAN_BKHKBEJCGJK_OFFSET UNITYSDK_OFFSET(0xB335140)
#define KCFOCCAGGAN_CTOR_OFFSET UNITYSDK_OFFSET(0xB335680)
#define KCFOCCAGGAN_GET_ISRECYCLED_OFFSET UNITYSDK_OFFSET(0xB335660)
#define KCFOCCAGGAN_ONALLOC_OFFSET UNITYSDK_OFFSET(0xB3350C0)
#define KCFOCCAGGAN_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xB335100)
#define KCFOCCAGGAN_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0xB335280)
#define KCFOCCAGGAN_SET_ISRECYCLED_OFFSET UNITYSDK_OFFSET(0xB335670)

	class KCFOCCAGGAN
	{
	public:
		::System::Boolean _IsRecycled_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCFOCCAGGAN_CTOR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCFOCCAGGAN_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCFOCCAGGAN_ONRECYCLE_OFFSET))(this);
		}

		::System::Void BKHKBEJCGJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCFOCCAGGAN_BKHKBEJCGJK_OFFSET))(this);
		}

		::System::Void PPEGOIODAKI(::KCFOCCAGGAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCFOCCAGGAN*))((::PBYTE)hIl2Cpp + KCFOCCAGGAN_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRecycled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KCFOCCAGGAN_GET_ISRECYCLED_OFFSET))(this);
		}

		::System::Void set_IsRecycled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KCFOCCAGGAN_SET_ISRECYCLED_OFFSET))(this, a1);
		}

	};
