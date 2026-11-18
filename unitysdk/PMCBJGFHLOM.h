#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFPEKOBFDLH.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PMCBJGFHLOM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1EE08D20)
#define PMCBJGFHLOM_DBBHCKCDMMP_OFFSET UNITYSDK_OFFSET(0x1EE08960)
#define PMCBJGFHLOM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1EE08E10)
#define PMCBJGFHLOM_HOPFMLBPBEL_OFFSET UNITYSDK_OFFSET(0x1EE086B0)
#define PMCBJGFHLOM_IDIDBGEMNEC_OFFSET UNITYSDK_OFFSET(0x1EE08E20)
#define PMCBJGFHLOM_LJAJKEDFMML_OFFSET UNITYSDK_OFFSET(0x1EE08AA0)
#define PMCBJGFHLOM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1EE086A0)
#define PMCBJGFHLOM_OKGHLEBHPLP_OFFSET UNITYSDK_OFFSET(0x1EE08BE0)
#define PMCBJGFHLOM_POCIKGHFLOH_OFFSET UNITYSDK_OFFSET(0x1EE08800)
#define PMCBJGFHLOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE08690)

inline static constexpr unsigned int PMCBJGFHLOM_TypeDefinitionIndex = 14623;

class PMCBJGFHLOM : public ::System::Object
{
public:
	::Foundation::AssetPath HDGOCFIAFFB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* NEFBOIDKGIC; // 0x20
	::System::String* MMINILAAECL; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::EFPEKOBFDLH HBDPAIKANDB; // 0x38
	::System::UInt64 PNDKOKLJEFL; // 0x48
	::System::Int32 CKMDFJAGPLI; // 0x50
	::System::Byte ACIOBDEBDNK; // 0x54
	::System::Byte CNIAANMNOCF; // 0x55
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x56
	::System::Byte _padding0[0x1];
	::System::Int32 OLFPCGKLMKF; // 0x58
	::System::Int32 FKBABFJDILG; // 0x5C

	::System::Void _ctor(::EFPEKOBFDLH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EFPEKOBFDLH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PMCBJGFHLOM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCBJGFHLOM_LJANCIBECFG_OFFSET))(this);
	}

	::System::UInt64 HOPFMLBPBEL()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCBJGFHLOM_HOPFMLBPBEL_OFFSET))(this);
	}

	::Foundation::AssetPath POCIKGHFLOH()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCBJGFHLOM_POCIKGHFLOH_OFFSET))(this);
	}

	::System::Int32 DBBHCKCDMMP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCBJGFHLOM_DBBHCKCDMMP_OFFSET))(this);
	}

	::System::Int32 LJAJKEDFMML()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCBJGFHLOM_LJAJKEDFMML_OFFSET))(this);
	}

	::System::Int32 OKGHLEBHPLP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCBJGFHLOM_OKGHLEBHPLP_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCBJGFHLOM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PMCBJGFHLOM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* IDIDBGEMNEC()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCBJGFHLOM_IDIDBGEMNEC_OFFSET))(this);
	}
};
