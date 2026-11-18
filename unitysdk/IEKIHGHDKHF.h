#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GFGKBACOICD.h"
#include "unitysdk/HNFADNMADCK.h"
#include "unitysdk/KABFOLDHLKK.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IEKIHGHDKHF_AIGCIFJOIGH_OFFSET UNITYSDK_OFFSET(0x16106B90)
#define IEKIHGHDKHF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x16106910)
#define IEKIHGHDKHF_FAAICIAFNEC_OFFSET UNITYSDK_OFFSET(0x16106A20)
#define IEKIHGHDKHF_FLNILGBENPA_OFFSET UNITYSDK_OFFSET(0x16106560)
#define IEKIHGHDKHF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x16106790)
#define IEKIHGHDKHF_IDCPJKGLDFC_OFFSET UNITYSDK_OFFSET(0x16106250)
#define IEKIHGHDKHF_JJCNNGAKKOE_OFFSET UNITYSDK_OFFSET(0x161067A0)
#define IEKIHGHDKHF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x16106A10)
#define IEKIHGHDKHF__CTOR_OFFSET UNITYSDK_OFFSET(0x16106240)

inline static constexpr unsigned int IEKIHGHDKHF_TypeDefinitionIndex = 15016;

class IEKIHGHDKHF : public ::System::Object
{
public:
	::System::String* GPNJCCHKLIP; // 0x10
	::System::Collections::Generic::List_1<::HNFADNMADCK>* GAHBDKBONGG; // 0x18
	::KABFOLDHLKK HBDPAIKANDB; // 0x20
	::System::Nullable_1<::GFGKBACOICD> MOPLMDCGHNG; // 0x30
	::System::Byte _padding0[0x10];
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x48
	::System::Nullable_1<::GFGKBACOICD> KNBDAHBHPMK; // 0x50
	::System::Byte _padding1[0x10];
	::System::Nullable_1<::HNFADNMADCK> NNCDJCHEDHI; // 0x68
	::System::Byte _padding2[0x10];
	::System::Int32 GFAPIPFGGPK; // 0x80
	::System::Byte CNIAANMNOCF; // 0x84
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x85
	::System::Byte ACIOBDEBDNK; // 0x86
	::System::Byte _padding3[0x1];
	::System::Int32 HFCCJIDLBPC; // 0x88
	::System::Int32 PLOKBBJGFCL; // 0x8C

	::System::Void _ctor(::KABFOLDHLKK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KABFOLDHLKK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IEKIHGHDKHF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::HNFADNMADCK>* IDCPJKGLDFC()
	{
		return ((::System::Collections::Generic::List_1<::HNFADNMADCK>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEKIHGHDKHF_IDCPJKGLDFC_OFFSET))(this);
	}

	::HNFADNMADCK FLNILGBENPA()
	{
		return ((::HNFADNMADCK(*)(::PVOID))((::PBYTE)hIl2Cpp + IEKIHGHDKHF_FLNILGBENPA_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IEKIHGHDKHF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 JJCNNGAKKOE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEKIHGHDKHF_JJCNNGAKKOE_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEKIHGHDKHF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IEKIHGHDKHF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 FAAICIAFNEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEKIHGHDKHF_FAAICIAFNEC_OFFSET))(this);
	}

	::System::Int32 AIGCIFJOIGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEKIHGHDKHF_AIGCIFJOIGH_OFFSET))(this);
	}
};
