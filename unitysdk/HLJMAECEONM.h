#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LKJIICKOLEK;

#define HLJMAECEONM_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CAECC00)
#define HLJMAECEONM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAECEF0)
#define HLJMAECEONM_KABMOEGDGIE_OFFSET UNITYSDK_OFFSET(0x1CAECCF0)
#define HLJMAECEONM_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CAECC80)
#define HLJMAECEONM_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1CAECEB0)

	class HLJMAECEONM : public ::System::Object
	{
	public:
		::LKJIICKOLEK* FEDGLEGFOIH; // 0x10
		::System::UInt32 DLGKKFIKNMD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJMAECEONM_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJMAECEONM_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJMAECEONM_ONALLOC_OFFSET))(this);
		}

		::System::Void KABMOEGDGIE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HLJMAECEONM_KABMOEGDGIE_OFFSET))(this, a1);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJMAECEONM_ONRECYCLE_OFFSET))(this);
		}

	};
