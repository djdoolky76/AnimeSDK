#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMMBMCOEOBL.h"
#include "unitysdk/HNFADNMADCK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLHFOIKNJNL_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x15791140)
#define CLHFOIKNJNL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x157915A0)
#define CLHFOIKNJNL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x15791280)
#define CLHFOIKNJNL_HEKPBIBDDKG_OFFSET UNITYSDK_OFFSET(0x15791000)
#define CLHFOIKNJNL_KFPGBFGOKPD_OFFSET UNITYSDK_OFFSET(0x15791290)
#define CLHFOIKNJNL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x15791590)
#define CLHFOIKNJNL_OFDMDENBHEM_OFFSET UNITYSDK_OFFSET(0x15790EC0)
#define CLHFOIKNJNL__CTOR_OFFSET UNITYSDK_OFFSET(0x15790EB0)

inline static constexpr unsigned int CLHFOIKNJNL_TypeDefinitionIndex = 16917;

class CLHFOIKNJNL : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::HNFADNMADCK>* EMGIFGIKHIA; // 0x10
	::FMMBMCOEOBL HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 DKMAJCMICMI; // 0x30
	::System::Int32 OCLNCKEGKOP; // 0x34
	::System::Int32 EMEJJKOJIJC; // 0x38
	::System::Int32 NAOMCPDKOFP; // 0x3C
	::System::Int32 NIPLAEMAACB; // 0x40
	::System::Int32 DHBHBGMBMOG; // 0x44
	::System::Int32 NKIGNPCFAAA; // 0x48
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4C
	::System::Byte ACIOBDEBDNK; // 0x4D
	::System::Byte CNIAANMNOCF; // 0x4E

	::System::Void _ctor(::FMMBMCOEOBL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FMMBMCOEOBL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CLHFOIKNJNL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 OFDMDENBHEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHFOIKNJNL_OFDMDENBHEM_OFFSET))(this);
	}

	::System::Int32 HEKPBIBDDKG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHFOIKNJNL_HEKPBIBDDKG_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHFOIKNJNL_ACOEONABOJL_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLHFOIKNJNL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::HNFADNMADCK>* KFPGBFGOKPD()
	{
		return ((::System::Collections::Generic::List_1<::HNFADNMADCK>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHFOIKNJNL_KFPGBFGOKPD_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHFOIKNJNL_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHFOIKNJNL_COFGIJJOFLP_OFFSET))(this);
	}
};
