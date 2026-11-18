#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NCJLKIIGPIC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FOPPBECEADK.h"

class BBMFNPHDMFF;
class MPHODEJKFAN;
class PJOHPBGHNHK;
namespace Foundation { class IEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OJADFPNKBHN_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x1FA814D0)
#define OJADFPNKBHN_JPCJOJCDCIF_OFFSET UNITYSDK_OFFSET(0x1FA81480)
#define OJADFPNKBHN_LLGDJCEFKAO_OFFSET UNITYSDK_OFFSET(0x1FA812E0)
#define OJADFPNKBHN_MANJPKJGMNA_OFFSET UNITYSDK_OFFSET(0x1FA81C90)
#define OJADFPNKBHN_MBKDOMFJFIG_OFFSET UNITYSDK_OFFSET(0x1FA81DE0)
#define OJADFPNKBHN_MGEKAHDEAMG_OFFSET UNITYSDK_OFFSET(0x1FA816D0)
#define OJADFPNKBHN_OEDBFGCHDFJ_OFFSET UNITYSDK_OFFSET(0x1FA81580)
#define OJADFPNKBHN_OMHGBONPNPA_OFFSET UNITYSDK_OFFSET(0x1FA81180)
#define OJADFPNKBHN_OPCCLAPFGLN_OFFSET UNITYSDK_OFFSET(0x1FA81190)
#define OJADFPNKBHN_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x1FA813A0)
#define OJADFPNKBHN__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA81170)

inline static constexpr unsigned int OJADFPNKBHN_TypeDefinitionIndex = 17974;

class OJADFPNKBHN : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::NCJLKIIGPIC, ::BBMFNPHDMFF*>* HMCEBNOLKDN; // 0x10
	::Foundation::IEntity* FEFFFPGCIIO; // 0x18
	::System::Collections::Generic::Dictionary_2<::PJOHPBGHNHK*, ::MPHODEJKFAN*>* IJHBEONLHLL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJADFPNKBHN__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::NCJLKIIGPIC, ::BBMFNPHDMFF*>* OMHGBONPNPA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::NCJLKIIGPIC, ::BBMFNPHDMFF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJADFPNKBHN_OMHGBONPNPA_OFFSET))(this);
	}

	::System::Void OPCCLAPFGLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJADFPNKBHN_OPCCLAPFGLN_OFFSET))(this);
	}

	::System::Void LLGDJCEFKAO(::PJOHPBGHNHK* FPBEPINAPII, ::MPHODEJKFAN* LLEACNJDGEC)
	{
		return ((::System::Void(*)(::PVOID, ::PJOHPBGHNHK*, ::MPHODEJKFAN*))((::PBYTE)hIl2Cpp + OJADFPNKBHN_LLGDJCEFKAO_OFFSET))(this, FPBEPINAPII, LLEACNJDGEC);
	}

	static ::OJADFPNKBHN* PKOGNPKCHHE(::Foundation::IEntity* AMNIHACKELI)
	{
		return ((::OJADFPNKBHN*(*)(::Foundation::IEntity*))((::PBYTE)hIl2Cpp + OJADFPNKBHN_PKOGNPKCHHE_OFFSET))(AMNIHACKELI);
	}

	::System::Void OEDBFGCHDFJ(::NCJLKIIGPIC DALIIADBANO, ::BBMFNPHDMFF* CGNGIBNMDHP)
	{
		return ((::System::Void(*)(::PVOID, ::NCJLKIIGPIC, ::BBMFNPHDMFF*))((::PBYTE)hIl2Cpp + OJADFPNKBHN_OEDBFGCHDFJ_OFFSET))(this, DALIIADBANO, CGNGIBNMDHP);
	}

	::System::Void MGEKAHDEAMG(::System::Collections::Generic::Dictionary_2<::FOPPBECEADK, ::System::Single>* PAAKENELHJL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::FOPPBECEADK, ::System::Single>*))((::PBYTE)hIl2Cpp + OJADFPNKBHN_MGEKAHDEAMG_OFFSET))(this, PAAKENELHJL);
	}

	::System::Void JPCJOJCDCIF(::Foundation::IEntity* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::IEntity*))((::PBYTE)hIl2Cpp + OJADFPNKBHN_JPCJOJCDCIF_OFFSET))(this, AMNIHACKELI);
	}

	::System::Void MANJPKJGMNA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJADFPNKBHN_MANJPKJGMNA_OFFSET))(this);
	}

	::System::Void MBKDOMFJFIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJADFPNKBHN_MBKDOMFJFIG_OFFSET))(this);
	}

	::System::Void BBPCBEEHALC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJADFPNKBHN_BBPCBEEHALC_OFFSET))(this);
	}
};
