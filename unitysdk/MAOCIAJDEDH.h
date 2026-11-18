#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MAOCIAJDEDH_CIKLHADDKNE.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigCurveDataInfo; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MAOCIAJDEDH_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x17CFE8B0)
#define MAOCIAJDEDH_EAHKHCALFBA_OFFSET UNITYSDK_OFFSET(0x17CFE470)
#define MAOCIAJDEDH_IGKMLPNCDKK_OFFSET UNITYSDK_OFFSET(0x17CFE8A0)
#define MAOCIAJDEDH_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x17CFEAC0)
#define MAOCIAJDEDH_JNCHHOMEEBH_OFFSET UNITYSDK_OFFSET(0x17CFE570)
#define MAOCIAJDEDH_LEEHFNGEPPN_OFFSET UNITYSDK_OFFSET(0x17CFEB10)
#define MAOCIAJDEDH_NFBGCCFMNGI_OFFSET UNITYSDK_OFFSET(0x17CFEB70)
#define MAOCIAJDEDH_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x17CFE6E0)
#define MAOCIAJDEDH_OIFGKBLGMHC_OFFSET UNITYSDK_OFFSET(0x17CFE7E0)
#define MAOCIAJDEDH_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x17CFE750)
#define MAOCIAJDEDH__CTOR_OFFSET UNITYSDK_OFFSET(0x17CFE460)

inline static constexpr unsigned int MAOCIAJDEDH_TypeDefinitionIndex = 57212;

class MAOCIAJDEDH : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* DJLOFNNCGEA; // 0x10
	::System::Action_1<::System::Int32>* OONIGJMLBEG; // 0x18
	::System::String* KLNJAFHIDJM; // 0x20
	::MoleMole::ConfigCurveDataInfo* JEJOOHCKLBM; // 0x28
	::System::Single EMGAIBIBGHI; // 0x30
	::System::Single JGLACGHLELJ; // 0x34
	::MAOCIAJDEDH_CIKLHADDKNE DAAEBNOIOHB; // 0x38
	::System::Boolean NHKMLNJIFFN; // 0x39
	::System::Byte _padding0[0x2];
	::System::Single KMIIHLDNGLD; // 0x3C
	::System::Single CNHCILKMJGE; // 0x40
	::System::Int32 APHJMJPAOKJ; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOCIAJDEDH__CTOR_OFFSET))(this);
	}

	::System::Void EAHKHCALFBA(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MAOCIAJDEDH_EAHKHCALFBA_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOCIAJDEDH_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MAOCIAJDEDH_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Int32 IGKMLPNCDKK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOCIAJDEDH_IGKMLPNCDKK_OFFSET))(this);
	}

	::System::Single JNCHHOMEEBH(::System::String* CBMDJKGKBFF, ::System::Single EPPCCEEAHLN, ::System::Single EEODALLOKMF)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MAOCIAJDEDH_JNCHHOMEEBH_OFFSET))(this, CBMDJKGKBFF, EPPCCEEAHLN, EEODALLOKMF);
	}

	::System::Void OIFGKBLGMHC(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MAOCIAJDEDH_OIFGKBLGMHC_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void BBOMJDBNHIC(::System::Int32 EJJGLGKECBD, ::System::String* MCOHLHMKLIP, ::System::Single DNNBOOFLABD, ::System::Single COCCAEODAPM, ::System::Action_1<::System::Int32>* FMIJCNEPLOB, ::System::Action_1<::System::Int32>* CKFEPGCLDNC, ::System::Boolean KIGJJIDDAKG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Single, ::System::Single, ::System::Action_1<::System::Int32>*, ::System::Action_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MAOCIAJDEDH_BBOMJDBNHIC_OFFSET))(this, EJJGLGKECBD, MCOHLHMKLIP, DNNBOOFLABD, COCCAEODAPM, FMIJCNEPLOB, CKFEPGCLDNC, KIGJJIDDAKG);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOCIAJDEDH_JDAPDDEOCEA_OFFSET))(this);
	}

	::System::Boolean LEEHFNGEPPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOCIAJDEDH_LEEHFNGEPPN_OFFSET))(this);
	}

	::System::Boolean NFBGCCFMNGI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOCIAJDEDH_NFBGCCFMNGI_OFFSET))(this);
	}
};
