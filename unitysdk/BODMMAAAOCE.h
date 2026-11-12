#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class BODMMAAAOCE_BHMDNOJDCEF;
class HDLBCFBLGKN;
class PAFPMNHFBME;
namespace System { class String; }

#define BODMMAAAOCE_APKGDDHOEGH_OFFSET UNITYSDK_OFFSET(0xC76EF20)
#define BODMMAAAOCE_CTOR_OFFSET UNITYSDK_OFFSET(0xC76EFA0)
#define BODMMAAAOCE_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xC76EDA0)
#define BODMMAAAOCE_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xC76EE80)
#define BODMMAAAOCE__ONBIND_OFFSET UNITYSDK_OFFSET(0xC76EA50)
#define BODMMAAAOCE__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xC76ECC0)
#define BODMMAAAOCE__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC76ED50)

inline static constexpr unsigned int BODMMAAAOCE_TypeDefinitionIndex = 74454;

	class BODMMAAAOCE : public ::FMPCODLIOLG
	{
	public:
		::PAFPMNHFBME* PIKMMMMFNJK; // 0x60
		::HDLBCFBLGKN* AFOIAANLENO; // 0x68
		::BODMMAAAOCE_BHMDNOJDCEF* ALLFDHFKBKD; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BODMMAAAOCE_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BODMMAAAOCE__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + BODMMAAAOCE__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BODMMAAAOCE__SETUPVIEW_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::BODMMAAAOCE_BHMDNOJDCEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BODMMAAAOCE_BHMDNOJDCEF*))((::PBYTE)hIl2Cpp + BODMMAAAOCE_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Boolean APKGDDHOEGH(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BODMMAAAOCE_APKGDDHOEGH_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BODMMAAAOCE_KANMCJHEFJJ_OFFSET))(this);
		}

	};
