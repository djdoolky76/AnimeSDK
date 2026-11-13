#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class FBEONBAOLAA;
class GAEFEBMGIPF;
class GMKKKHJMOCE;
class IKBAMHGDEJC;
class MHEFMBEPJOJ;
namespace System { class Object; }

#define HOJPODMLIGP_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1AF26480)
#define HOJPODMLIGP_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1AF26550)
#define HOJPODMLIGP_BNCHHCGENKE_OFFSET UNITYSDK_OFFSET(0x1AF261A0)
#define HOJPODMLIGP_BOELMKAJPLD_OFFSET UNITYSDK_OFFSET(0x1AF25F20)
#define HOJPODMLIGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1AF265F0)
#define HOJPODMLIGP_EOFNEOKIHME_OFFSET UNITYSDK_OFFSET(0x1AF263C0)
#define HOJPODMLIGP_FAKNKOGENON_OFFSET UNITYSDK_OFFSET(0x1AF261F0)
#define HOJPODMLIGP_FGMCBIMFDFD_OFFSET UNITYSDK_OFFSET(0x1AF26370)
#define HOJPODMLIGP_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x1AF26070)
#define HOJPODMLIGP_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1AF26110)
#define HOJPODMLIGP__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x1AF25F70)
#define HOJPODMLIGP__ONBIND_OFFSET UNITYSDK_OFFSET(0x1AF25D90)
#define HOJPODMLIGP__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1AF25FC0)
#define HOJPODMLIGP__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1AF26020)

inline static constexpr unsigned int HOJPODMLIGP_TypeDefinitionIndex = 74198;

	class HOJPODMLIGP : public ::FMPCODLIOLG
	{
	public:
		::GMKKKHJMOCE* EDEGPOOIBKM; // 0x60
		::GAEFEBMGIPF* CBIDDFDIPFC; // 0x68
		::MHEFMBEPJOJ* LPFEAPPIHOH; // 0x70
		::FBEONBAOLAA* APPIHABBCGK; // 0x78
		::GAEFEBMGIPF* HKCKNFHJABP; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOJPODMLIGP_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOJPODMLIGP__ONBIND_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOJPODMLIGP__INITVARONCE_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + HOJPODMLIGP__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOJPODMLIGP__SETUPVIEW_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOJPODMLIGP_NKPPGDENJAE_OFFSET))(this);
		}

		::System::Void BNCHHCGENKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOJPODMLIGP_BNCHHCGENKE_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOJPODMLIGP_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Int32 FAKNKOGENON()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOJPODMLIGP_FAKNKOGENON_OFFSET))(this);
		}

		::IKBAMHGDEJC* BOELMKAJPLD()
		{
			return ((::IKBAMHGDEJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOJPODMLIGP_BOELMKAJPLD_OFFSET))(this);
		}

		::System::Int32 FGMCBIMFDFD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOJPODMLIGP_FGMCBIMFDFD_OFFSET))(this);
		}

		::System::Void EOFNEOKIHME(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HOJPODMLIGP_EOFNEOKIHME_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOJPODMLIGP_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOJPODMLIGP_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
