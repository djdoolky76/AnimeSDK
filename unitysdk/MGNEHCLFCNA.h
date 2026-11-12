#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MGNEHCLFCNA_CTOR_OFFSET UNITYSDK_OFFSET(0xC1DCF30)
#define MGNEHCLFCNA_GOHGPMPLEAH_OFFSET UNITYSDK_OFFSET(0xC1DC8A0)
#define MGNEHCLFCNA_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xC1DC730)
#define MGNEHCLFCNA_LEJILCHMJBK_OFFSET UNITYSDK_OFFSET(0xC1DC780)
#define MGNEHCLFCNA__TRIGGERRADIALBLUREFFECT_B__1_0_OFFSET UNITYSDK_OFFSET(0xC1DCF40)

inline static constexpr unsigned int MGNEHCLFCNA_TypeDefinitionIndex = 80551;

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
