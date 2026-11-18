#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKECLCANLOC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GDMFNCCHBNM_BELMIKIMNBG_OFFSET UNITYSDK_OFFSET(0x166437B0)
#define GDMFNCCHBNM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x16643B90)
#define GDMFNCCHBNM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x16643DD0)
#define GDMFNCCHBNM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x16643DC0)
#define GDMFNCCHBNM_OMIIHJAJIGN_OFFSET UNITYSDK_OFFSET(0x166438C0)
#define GDMFNCCHBNM_PIHGHHFEHED_OFFSET UNITYSDK_OFFSET(0x16643C80)
#define GDMFNCCHBNM__CTOR_OFFSET UNITYSDK_OFFSET(0x166437A0)

inline static constexpr unsigned int GDMFNCCHBNM_TypeDefinitionIndex = 11687;

class GDMFNCCHBNM : public ::System::Object
{
public:
	::System::String* NPFIPILNLBF; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::FKECLCANLOC HBDPAIKANDB; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* NNANIEAONLM; // 0x30
	::System::Int32 NJEDAMEABLJ; // 0x38
	::System::Byte CNIAANMNOCF; // 0x3C
	::System::Byte ACIOBDEBDNK; // 0x3D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3E

	::System::Void _ctor(::FKECLCANLOC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FKECLCANLOC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GDMFNCCHBNM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* BELMIKIMNBG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMFNCCHBNM_BELMIKIMNBG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* OMIIHJAJIGN()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMFNCCHBNM_OMIIHJAJIGN_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMFNCCHBNM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PIHGHHFEHED()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMFNCCHBNM_PIHGHHFEHED_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMFNCCHBNM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GDMFNCCHBNM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
