#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InlevelCameraState.h"
#include "unitysdk/NDLAFLLJANL.h"
#include "unitysdk/System/ValueTuple_2.h"

class AGJFDPBLDDF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PPODAINACLI_FJNNHOGKICD_OFFSET UNITYSDK_OFFSET(0x1D63ACA0)
#define PPODAINACLI_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x1D63ACB0)
#define PPODAINACLI_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1D63AAB0)
#define PPODAINACLI_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1D63AE20)
#define PPODAINACLI_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1D63AC10)
#define PPODAINACLI_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1D63A970)
#define PPODAINACLI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D63AB00)
#define PPODAINACLI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D63AB80)

inline static constexpr unsigned int PPODAINACLI_TypeDefinitionIndex = 70300;

class PPODAINACLI : public ::NDLAFLLJANL
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x9A; // 0x0
	::AGJFDPBLDDF* POKKLENPCOI; // 0x78
	::AGJFDPBLDDF* CGNHGEEFJKN; // 0x80
	::AGJFDPBLDDF* EPEPPCHIOCG; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* BKGLHCBMDJB; // 0x90
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Single>>* BFMKDJHFDAB; // 0x98
	::AGJFDPBLDDF* JLJOLJOPEOP; // 0xA0
	::MoleMole::Config::InlevelCameraState CECHIEELOCP; // 0xA8
	::System::Single HEBNEPNNHJH; // 0xAC
	::System::Boolean FDHPGMGINBL; // 0xB0
	::System::Boolean MKCCPBNPHGM; // 0xB1
	::System::Boolean FMGKMKFKICD; // 0xB2
	::System::Boolean ONJNOAHKIFO; // 0xB3
	::System::Boolean LAGEDGAGNKA; // 0xB4
	::System::Boolean LGIFKHIGAON; // 0xB5
	::System::Byte _padding0[0x2];
	::MoleMole::Config::InlevelCameraState HKHJKOKGIGM; // 0xB8

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPODAINACLI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPODAINACLI__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPODAINACLI_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPODAINACLI_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPODAINACLI_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void FJNNHOGKICD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPODAINACLI_FJNNHOGKICD_OFFSET))(this);
	}

	::System::Void GALGFCPKMGC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPODAINACLI_GALGFCPKMGC_OFFSET))(this);
	}

	static ::PPODAINACLI* JFDOOELFAOA()
	{
		return ((::PPODAINACLI*(*)())((::PBYTE)hIl2Cpp + PPODAINACLI_JFDOOELFAOA_OFFSET))();
	}
};
