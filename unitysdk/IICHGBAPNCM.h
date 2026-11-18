#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNOBIBEJCBH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IICHGBAPNCM_BLKHOLFDEDF_OFFSET UNITYSDK_OFFSET(0x1A4F8C40)
#define IICHGBAPNCM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A4F8B50)
#define IICHGBAPNCM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A4F8B40)
#define IICHGBAPNCM_HJNGAMBABOP_OFFSET UNITYSDK_OFFSET(0x1A4F8A00)
#define IICHGBAPNCM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A4F9050)
#define IICHGBAPNCM_LKINMLPFBOO_OFFSET UNITYSDK_OFFSET(0x1A4F8D80)
#define IICHGBAPNCM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F89F0)

inline static constexpr unsigned int IICHGBAPNCM_TypeDefinitionIndex = 16060;

class IICHGBAPNCM : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::DNOBIBEJCBH HBDPAIKANDB; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* MCJKIIICPIL; // 0x28
	::System::Int32 FDDEECNCEMO; // 0x30
	::System::Int32 FFIGDLJIMBO; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A

	::System::Void _ctor(::DNOBIBEJCBH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DNOBIBEJCBH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IICHGBAPNCM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 HJNGAMBABOP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IICHGBAPNCM_HJNGAMBABOP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IICHGBAPNCM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IICHGBAPNCM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 BLKHOLFDEDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IICHGBAPNCM_BLKHOLFDEDF_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* LKINMLPFBOO()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IICHGBAPNCM_LKINMLPFBOO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IICHGBAPNCM_LJANCIBECFG_OFFSET))(this);
	}
};
