#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MGNEHCLFCNA_CTOR_OFFSET UNITYSDK_OFFSET(0xB923660)
#define MGNEHCLFCNA_GOHGPMPLEAH_OFFSET UNITYSDK_OFFSET(0xB922FD0)
#define MGNEHCLFCNA_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB922E60)
#define MGNEHCLFCNA_LEJILCHMJBK_OFFSET UNITYSDK_OFFSET(0xB922EB0)
#define MGNEHCLFCNA__TRIGGERRADIALBLUREFFECT_B__1_0_OFFSET UNITYSDK_OFFSET(0xB923670)

inline static constexpr unsigned int MGNEHCLFCNA_TypeDefinitionIndex = 77815;

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
