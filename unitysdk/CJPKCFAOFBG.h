#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"

class BMLDHMMBFFK;
class FOMMAFOLBIC;
namespace MiHoYo::SDK { class JSONNode; }
namespace MoleMole { class UIGeneralLoginTopTipsPopWindowController; }
namespace System { class EventArgs; }
namespace System { class String; }

#define CJPKCFAOFBG_BBMILKGMPNH_OFFSET UNITYSDK_OFFSET(0x145CEC60)
#define CJPKCFAOFBG_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x145CE260)
#define CJPKCFAOFBG_DOPGAFCKMNF_OFFSET UNITYSDK_OFFSET(0x145CE1D0)
#define CJPKCFAOFBG_EDHBFHHNGJL_OFFSET UNITYSDK_OFFSET(0x145CE2F0)
#define CJPKCFAOFBG_FIBPMOOELFF_OFFSET UNITYSDK_OFFSET(0x145CE180)
#define CJPKCFAOFBG_GBBDFJCGCKI_OFFSET UNITYSDK_OFFSET(0x145CE610)
#define CJPKCFAOFBG_ICBJGFFNBDK_OFFSET UNITYSDK_OFFSET(0x145CEF20)
#define CJPKCFAOFBG_LAOMFGABBLL_OFFSET UNITYSDK_OFFSET(0x145CE340)
#define CJPKCFAOFBG_LLJBLAEFGLC_OFFSET UNITYSDK_OFFSET(0x145CE8A0)
#define CJPKCFAOFBG_NIFIDFLKDJL_OFFSET UNITYSDK_OFFSET(0x145CE3D0)
#define CJPKCFAOFBG_OKAIJPIECHG_OFFSET UNITYSDK_OFFSET(0x145CE130)
#define CJPKCFAOFBG_ONSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x145CDC60)
#define CJPKCFAOFBG_ONSTART_OFFSET UNITYSDK_OFFSET(0x145CD960)
#define CJPKCFAOFBG__CTOR_OFFSET UNITYSDK_OFFSET(0x145CE120)

inline static constexpr unsigned int CJPKCFAOFBG_TypeDefinitionIndex = 42376;

class CJPKCFAOFBG : public ::JGELKBLKFHE
{
public:
	::FOMMAFOLBIC* NJIFHGBKFDG; // 0x18
	::MoleMole::UIGeneralLoginTopTipsPopWindowController* EHIFHJDLKGD; // 0x20
	::BMLDHMMBFFK* IGOHGGDIMIE; // 0x28
	::System::Int32 LENPFOMPLND; // 0x30
	::System::Boolean MDLCJEEHLLA; // 0x34
	::System::Boolean MIHDFGLHDEK; // 0x35

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPKCFAOFBG__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPKCFAOFBG_ONSTART_OFFSET))(this);
	}

	::System::Void OnShutDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPKCFAOFBG_ONSHUTDOWN_OFFSET))(this);
	}

	::System::Void OKAIJPIECHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPKCFAOFBG_OKAIJPIECHG_OFFSET))(this);
	}

	::System::Void FIBPMOOELFF(::System::String* JBIADOFJMMH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CJPKCFAOFBG_FIBPMOOELFF_OFFSET))(this, JBIADOFJMMH);
	}

	::System::Void DOPGAFCKMNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPKCFAOFBG_DOPGAFCKMNF_OFFSET))(this);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPKCFAOFBG_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void EDHBFHHNGJL(::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CJPKCFAOFBG_EDHBFHHNGJL_OFFSET))(this, MNDIBLLFAJI);
	}

	::System::Void LAOMFGABBLL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPKCFAOFBG_LAOMFGABBLL_OFFSET))(this);
	}

	::System::Void NIFIDFLKDJL(::System::String* JBIADOFJMMH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CJPKCFAOFBG_NIFIDFLKDJL_OFFSET))(this, JBIADOFJMMH);
	}

	::System::Void LLJBLAEFGLC(::MiHoYo::SDK::JSONNode* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + CJPKCFAOFBG_LLJBLAEFGLC_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void BBMILKGMPNH(::System::Int32 CJECGFFLFGH, ::System::Int32 ACBDNCALOFI, ::System::Int32 NEJLHBPLCCO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CJPKCFAOFBG_BBMILKGMPNH_OFFSET))(this, CJECGFFLFGH, ACBDNCALOFI, NEJLHBPLCCO);
	}

	::System::Void ICBJGFFNBDK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPKCFAOFBG_ICBJGFFNBDK_OFFSET))(this);
	}

	::System::Void GBBDFJCGCKI(::MiHoYo::SDK::JSONNode* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + CJPKCFAOFBG_GBBDFJCGCKI_OFFSET))(this, NAPFALLANDL);
	}
};
