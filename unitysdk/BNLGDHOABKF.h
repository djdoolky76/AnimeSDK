#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class AJJBJLANLEA;
class LNGGBHCLAIG;
namespace System { class Object; }

#define BNLGDHOABKF_APGPKMEGBKI_OFFSET UNITYSDK_OFFSET(0xBDD9990)
#define BNLGDHOABKF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBDDA310)
#define BNLGDHOABKF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBDDA430)
#define BNLGDHOABKF_CTOR_OFFSET UNITYSDK_OFFSET(0xBDDA520)
#define BNLGDHOABKF_EBBHIACBLHB_OFFSET UNITYSDK_OFFSET(0xBDDA050)
#define BNLGDHOABKF_EHFCFBFHHFI_OFFSET UNITYSDK_OFFSET(0xBDDA190)
#define BNLGDHOABKF_GBHFLNGJBEF_OFFSET UNITYSDK_OFFSET(0xBDD9E10)
#define BNLGDHOABKF_HFEGCBGDANK_OFFSET UNITYSDK_OFFSET(0xBDDA250)
#define BNLGDHOABKF_KKENOOIMDEL_OFFSET UNITYSDK_OFFSET(0xBDD9760)
#define BNLGDHOABKF_LKNGGPFIMKM_OFFSET UNITYSDK_OFFSET(0xBDD9920)
#define BNLGDHOABKF_MEPEGLNJFGK_OFFSET UNITYSDK_OFFSET(0xBDD9C80)

inline static constexpr unsigned int BNLGDHOABKF_TypeDefinitionIndex = 71589;

	class BNLGDHOABKF : public ::FMPCODLIOLG
	{
	public:
		::AJJBJLANLEA* DNLAAFHMCHA; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLGDHOABKF_CTOR_OFFSET))(this);
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

	};
