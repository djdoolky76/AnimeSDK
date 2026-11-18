#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FPMHMAKIJLJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define FJAENPFCFEM_ANOOECGILCH_OFFSET UNITYSDK_OFFSET(0x15A75A10)
#define FJAENPFCFEM_CJBMHNCHNHO_OFFSET UNITYSDK_OFFSET(0x15A757F0)
#define FJAENPFCFEM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x15A75B50)
#define FJAENPFCFEM_EOANKJGDHEO_OFFSET UNITYSDK_OFFSET(0x15A75900)
#define FJAENPFCFEM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x15A75C40)
#define FJAENPFCFEM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x15A757E0)
#define FJAENPFCFEM__CTOR_OFFSET UNITYSDK_OFFSET(0x15A757D0)

inline static constexpr unsigned int FJAENPFCFEM_TypeDefinitionIndex = 16024;

class FJAENPFCFEM : public ::System::Object
{
public:
	::System::String* LGMPJOMOMBN; // 0x10
	::FPMHMAKIJLJ HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::String* CJLCCJKEHME; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 KKIGEOKBHHA; // 0x3C

	::System::Void _ctor(::FPMHMAKIJLJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FPMHMAKIJLJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FJAENPFCFEM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJAENPFCFEM_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* CJBMHNCHNHO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJAENPFCFEM_CJBMHNCHNHO_OFFSET))(this);
	}

	::System::String* EOANKJGDHEO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJAENPFCFEM_EOANKJGDHEO_OFFSET))(this);
	}

	::System::Int32 ANOOECGILCH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJAENPFCFEM_ANOOECGILCH_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJAENPFCFEM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FJAENPFCFEM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
