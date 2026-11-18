#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LFJJHNGEGKN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FCOIKBLNHME_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17AB0920)
#define FCOIKBLNHME_DLBMCODFPON_OFFSET UNITYSDK_OFFSET(0x17AB0A10)
#define FCOIKBLNHME_FNLEDPJHPCC_OFFSET UNITYSDK_OFFSET(0x17AB0810)
#define FCOIKBLNHME_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17AB05A0)
#define FCOIKBLNHME_HDAGGDKMDAI_OFFSET UNITYSDK_OFFSET(0x17AB0490)
#define FCOIKBLNHME_LGBNLOOHBPA_OFFSET UNITYSDK_OFFSET(0x17AB05B0)
#define FCOIKBLNHME_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17AB0C90)
#define FCOIKBLNHME_PCHEGMCMINK_OFFSET UNITYSDK_OFFSET(0x17AB0B50)
#define FCOIKBLNHME__CTOR_OFFSET UNITYSDK_OFFSET(0x17AB0480)

inline static constexpr unsigned int FCOIKBLNHME_TypeDefinitionIndex = 15660;

class FCOIKBLNHME : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* BKGOMDBILLM; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* ILNMFOIEBCD; // 0x20
	::System::String* KBBFLAFIJCG; // 0x28
	::LFJJHNGEGKN HBDPAIKANDB; // 0x30
	::System::Int32 MEELHACPIMD; // 0x40
	::System::Int32 KGFJLHOMLLM; // 0x44
	::System::Byte ACIOBDEBDNK; // 0x48
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x49
	::System::Byte CNIAANMNOCF; // 0x4A

	::System::Void _ctor(::LFJJHNGEGKN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LFJJHNGEGKN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FCOIKBLNHME__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* HDAGGDKMDAI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOIKBLNHME_HDAGGDKMDAI_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FCOIKBLNHME_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::String*>* LGBNLOOHBPA()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOIKBLNHME_LGBNLOOHBPA_OFFSET))(this);
	}

	::System::String* FNLEDPJHPCC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOIKBLNHME_FNLEDPJHPCC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOIKBLNHME_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 DLBMCODFPON()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOIKBLNHME_DLBMCODFPON_OFFSET))(this);
	}

	::System::Int32 PCHEGMCMINK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOIKBLNHME_PCHEGMCMINK_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOIKBLNHME_LJANCIBECFG_OFFSET))(this);
	}
};
