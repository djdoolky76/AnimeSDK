#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IBAIPMAIDFI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OANNEDPHBNN_BDIJPEFFGAG_OFFSET UNITYSDK_OFFSET(0x195BFD90)
#define OANNEDPHBNN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x195BFCA0)
#define OANNEDPHBNN_ENMJGJDEDII_OFFSET UNITYSDK_OFFSET(0x195C01B0)
#define OANNEDPHBNN_FMLLPJFNOFG_OFFSET UNITYSDK_OFFSET(0x195BFEE0)
#define OANNEDPHBNN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x195C02F0)
#define OANNEDPHBNN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x195BFED0)
#define OANNEDPHBNN__CTOR_OFFSET UNITYSDK_OFFSET(0x195BFC90)

inline static constexpr unsigned int OANNEDPHBNN_TypeDefinitionIndex = 13949;

class OANNEDPHBNN : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* IDGBKMIFMHA; // 0x18
	::IBAIPMAIDFI HBDPAIKANDB; // 0x20
	::System::Int32 DBLHDCLAJDH; // 0x30
	::System::Int32 GPEOAENBHOP; // 0x34
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A

	::System::Void _ctor(::IBAIPMAIDFI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IBAIPMAIDFI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OANNEDPHBNN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OANNEDPHBNN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 BDIJPEFFGAG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OANNEDPHBNN_BDIJPEFFGAG_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OANNEDPHBNN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* FMLLPJFNOFG()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OANNEDPHBNN_FMLLPJFNOFG_OFFSET))(this);
	}

	::System::Int32 ENMJGJDEDII()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OANNEDPHBNN_ENMJGJDEDII_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OANNEDPHBNN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
