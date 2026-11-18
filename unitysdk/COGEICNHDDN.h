#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLEEEEAMKIL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define COGEICNHDDN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19BFBDB0)
#define COGEICNHDDN_COIOANDHGPD_OFFSET UNITYSDK_OFFSET(0x19BFC180)
#define COGEICNHDDN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19BFC2C0)
#define COGEICNHDDN_HJMMEJLLNMP_OFFSET UNITYSDK_OFFSET(0x19BFBEA0)
#define COGEICNHDDN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19BFC170)
#define COGEICNHDDN__CTOR_OFFSET UNITYSDK_OFFSET(0x19BFBDA0)

inline static constexpr unsigned int COGEICNHDDN_TypeDefinitionIndex = 12237;

class COGEICNHDDN : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* GIGLDBAGOOG; // 0x18
	::HLEEEEAMKIL HBDPAIKANDB; // 0x20
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 IMIPEGAAJJJ; // 0x34

	::System::Void _ctor(::HLEEEEAMKIL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HLEEEEAMKIL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + COGEICNHDDN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COGEICNHDDN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* HJMMEJLLNMP()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + COGEICNHDDN_HJMMEJLLNMP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COGEICNHDDN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 COIOANDHGPD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COGEICNHDDN_COIOANDHGPD_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + COGEICNHDDN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
