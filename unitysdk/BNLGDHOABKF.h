#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class AJJBJLANLEA;
class KOAOAKKCCPK;
class LNGGBHCLAIG;
namespace System { class Object; }

#define BNLGDHOABKF_APGPKMEGBKI_OFFSET UNITYSDK_OFFSET(0xC75D930)
#define BNLGDHOABKF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC75E330)
#define BNLGDHOABKF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC75E450)
#define BNLGDHOABKF_CTOR_OFFSET UNITYSDK_OFFSET(0xC75E540)
#define BNLGDHOABKF_EBBHIACBLHB_OFFSET UNITYSDK_OFFSET(0xC75E070)
#define BNLGDHOABKF_EHFCFBFHHFI_OFFSET UNITYSDK_OFFSET(0xC75E1B0)
#define BNLGDHOABKF_GBHFLNGJBEF_OFFSET UNITYSDK_OFFSET(0xC75DE30)
#define BNLGDHOABKF_HFEGCBGDANK_OFFSET UNITYSDK_OFFSET(0xC75E270)
#define BNLGDHOABKF_KKENOOIMDEL_OFFSET UNITYSDK_OFFSET(0xC75D700)
#define BNLGDHOABKF_LKNGGPFIMKM_OFFSET UNITYSDK_OFFSET(0xC75D8C0)
#define BNLGDHOABKF_MEPEGLNJFGK_OFFSET UNITYSDK_OFFSET(0xC75DC80)
#define BNLGDHOABKF__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xC75D670)
#define BNLGDHOABKF___ONBATTLEELATIONTIMETOASTHIDE_B__4_0_OFFSET UNITYSDK_OFFSET(0xC75E570)

inline static constexpr unsigned int BNLGDHOABKF_TypeDefinitionIndex = 73577;

	class BNLGDHOABKF : public ::FMPCODLIOLG
	{
	public:
		::AJJBJLANLEA* DNLAAFHMCHA; // 0x60
		::KOAOAKKCCPK* CDMFHPLLFEC; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLGDHOABKF_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + BNLGDHOABKF__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void KKENOOIMDEL(::LNGGBHCLAIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNGGBHCLAIG*))((::PBYTE)hIl2Cpp + BNLGDHOABKF_KKENOOIMDEL_OFFSET))(this, a1);
		}

		::System::Void APGPKMEGBKI(::LNGGBHCLAIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNGGBHCLAIG*))((::PBYTE)hIl2Cpp + BNLGDHOABKF_APGPKMEGBKI_OFFSET))(this, a1);
		}

		::System::Void MEPEGLNJFGK(::LNGGBHCLAIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNGGBHCLAIG*))((::PBYTE)hIl2Cpp + BNLGDHOABKF_MEPEGLNJFGK_OFFSET))(this, a1);
		}

		::System::Void LKNGGPFIMKM(::LNGGBHCLAIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNGGBHCLAIG*))((::PBYTE)hIl2Cpp + BNLGDHOABKF_LKNGGPFIMKM_OFFSET))(this, a1);
		}

		::System::Boolean GBHFLNGJBEF(::LNGGBHCLAIG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LNGGBHCLAIG*))((::PBYTE)hIl2Cpp + BNLGDHOABKF_GBHFLNGJBEF_OFFSET))(this, a1);
		}

		::System::Void EBBHIACBLHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLGDHOABKF_EBBHIACBLHB_OFFSET))(this);
		}

		::System::Void EHFCFBFHHFI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BNLGDHOABKF_EHFCFBFHHFI_OFFSET))(this, a1);
		}

		::System::Void HFEGCBGDANK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BNLGDHOABKF_HFEGCBGDANK_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLGDHOABKF_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLGDHOABKF_AUTOREMOVECALLBACK_OFFSET))(this);
		}

		::System::Void __OnBattleElationTimeToastHide_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLGDHOABKF___ONBATTLEELATIONTIMETOASTHIDE_B__4_0_OFFSET))(this);
		}

	};
