#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNKFJKENGFE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IMHHHDMKBPC_BHMMKDGCLGB_OFFSET UNITYSDK_OFFSET(0x174850F0)
#define IMHHHDMKBPC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17484EC0)
#define IMHHHDMKBPC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x174853C0)
#define IMHHHDMKBPC_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x174854E0)
#define IMHHHDMKBPC_JFCNOLHFLHO_OFFSET UNITYSDK_OFFSET(0x17484D80)
#define IMHHHDMKBPC_JKKODAECNBO_OFFSET UNITYSDK_OFFSET(0x174853D0)
#define IMHHHDMKBPC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17484C60)
#define IMHHHDMKBPC_LLLLMFGJALO_OFFSET UNITYSDK_OFFSET(0x17484FB0)
#define IMHHHDMKBPC_MBIEHCJDBHJ_OFFSET UNITYSDK_OFFSET(0x17484C70)
#define IMHHHDMKBPC__CTOR_OFFSET UNITYSDK_OFFSET(0x17484C50)

inline static constexpr unsigned int IMHHHDMKBPC_TypeDefinitionIndex = 9582;

class IMHHHDMKBPC : public ::System::Object
{
public:
	::FNKFJKENGFE HBDPAIKANDB; // 0x10
	::System::String* BOAELMPGNPJ; // 0x20
	::System::Collections::Generic::List_1<::System::Single>* CDPMOEENODL; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* NNPCGDENIAG; // 0x30
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::System::String* DHAPBPGLBBB; // 0x40
	::System::Int32 FJIDIBBGJFH; // 0x48
	::System::Int32 NAFDHMFICCJ; // 0x4C
	::System::Int32 POKJNGILNLB; // 0x50
	::System::Byte CNIAANMNOCF; // 0x54
	::System::Byte ACIOBDEBDNK; // 0x55
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x56
	::System::Byte _padding0[0x1];
	::System::Int32 MHBBBANFIKC; // 0x58

	::System::Void _ctor(::FNKFJKENGFE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FNKFJKENGFE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IMHHHDMKBPC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHHHDMKBPC_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* MBIEHCJDBHJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHHHDMKBPC_MBIEHCJDBHJ_OFFSET))(this);
	}

	::System::Int32 JFCNOLHFLHO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHHHDMKBPC_JFCNOLHFLHO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHHHDMKBPC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 LLLLMFGJALO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHHHDMKBPC_LLLLMFGJALO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Single>* BHMMKDGCLGB()
	{
		return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHHHDMKBPC_BHMMKDGCLGB_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IMHHHDMKBPC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* JKKODAECNBO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHHHDMKBPC_JKKODAECNBO_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHHHDMKBPC_HKELPCLHLEC_OFFSET))(this);
	}
};
