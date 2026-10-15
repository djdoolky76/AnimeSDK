#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class BODMMAAAOCE_BHMDNOJDCEF;
class HDLBCFBLGKN;
class PAFPMNHFBME;
namespace System { class String; }

#define BODMMAAAOCE_APKGDDHOEGH_OFFSET UNITYSDK_OFFSET(0xC18EEB0)
#define BODMMAAAOCE_CTOR_OFFSET UNITYSDK_OFFSET(0xC18EF30)
#define BODMMAAAOCE_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xC18EC50)
#define BODMMAAAOCE_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xC18ECE0)
#define BODMMAAAOCE_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xC18ED30)
#define BODMMAAAOCE_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xC18EE10)
#define BODMMAAAOCE__ONBIND_OFFSET UNITYSDK_OFFSET(0xC18EBC0)

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

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + BODMMAAAOCE_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BODMMAAAOCE_EKGCGIDIFJJ_OFFSET))(this);
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
