#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MGNEHCLFCNA_CTOR_OFFSET UNITYSDK_OFFSET(0xB9296D0)
#define MGNEHCLFCNA_GOHGPMPLEAH_OFFSET UNITYSDK_OFFSET(0xB929040)
#define MGNEHCLFCNA_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB928ED0)
#define MGNEHCLFCNA_LEJILCHMJBK_OFFSET UNITYSDK_OFFSET(0xB928F20)
#define MGNEHCLFCNA__TRIGGERRADIALBLUREFFECT_B__1_0_OFFSET UNITYSDK_OFFSET(0xB9296E0)

	class MGNEHCLFCNA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGNEHCLFCNA_CTOR_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGNEHCLFCNA_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void GOHGPMPLEAH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MGNEHCLFCNA_GOHGPMPLEAH_OFFSET))(this, a1);
		}

		::System::Void LEJILCHMJBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGNEHCLFCNA_LEJILCHMJBK_OFFSET))(this);
		}

		::System::Void _TriggerRadialBlurEffect_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGNEHCLFCNA__TRIGGERRADIALBLUREFFECT_B__1_0_OFFSET))(this);
		}

	};
