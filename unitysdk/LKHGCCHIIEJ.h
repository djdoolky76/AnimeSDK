#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FIJKMIEJLHI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LKHGCCHIIEJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BA8B610)
#define LKHGCCHIIEJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BA8B1E0)
#define LKHGCCHIIEJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BA8B600)
#define LKHGCCHIIEJ_MFLMGECAGIA_OFFSET UNITYSDK_OFFSET(0x1BA8B1F0)
#define LKHGCCHIIEJ_OEIPFGDECBI_OFFSET UNITYSDK_OFFSET(0x1BA8B330)
#define LKHGCCHIIEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA8B1D0)

inline static constexpr unsigned int LKHGCCHIIEJ_TypeDefinitionIndex = 16883;

class LKHGCCHIIEJ : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* NIOPPCPPCGL; // 0x18
	::FIJKMIEJLHI HBDPAIKANDB; // 0x20
	::System::Int32 FEIOEHMLAIM; // 0x30
	::System::Int32 JMCDNAHGIGC; // 0x34
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A

	::System::Void _ctor(::FIJKMIEJLHI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FIJKMIEJLHI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LKHGCCHIIEJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LKHGCCHIIEJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MFLMGECAGIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHGCCHIIEJ_MFLMGECAGIA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* OEIPFGDECBI()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHGCCHIIEJ_OEIPFGDECBI_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHGCCHIIEJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHGCCHIIEJ_COFGIJJOFLP_OFFSET))(this);
	}
};
