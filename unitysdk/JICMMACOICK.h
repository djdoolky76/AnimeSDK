#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LCKNJEIAIPH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JICMMACOICK_COBHFNFAMJC_OFFSET UNITYSDK_OFFSET(0x1748BFA0)
#define JICMMACOICK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1748BEA0)
#define JICMMACOICK_DLOPLJFNAHO_OFFSET UNITYSDK_OFFSET(0x1748C0E0)
#define JICMMACOICK_FCPGPFEHCJH_OFFSET UNITYSDK_OFFSET(0x1748BD50)
#define JICMMACOICK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1748BF90)
#define JICMMACOICK_IPBDBKFKJPA_OFFSET UNITYSDK_OFFSET(0x1748BC40)
#define JICMMACOICK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1748BE90)
#define JICMMACOICK__CTOR_OFFSET UNITYSDK_OFFSET(0x1748BC30)

inline static constexpr unsigned int JICMMACOICK_TypeDefinitionIndex = 16904;

class JICMMACOICK : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* IMAFCDDJOME; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* OBGELIEBPPL; // 0x20
	::LCKNJEIAIPH HBDPAIKANDB; // 0x28
	::System::String* OLPBFKHFIGK; // 0x38
	::System::String* OPOHNGDAJLD; // 0x40
	::System::Int32 KIALABKLANK; // 0x48
	::System::Int32 FLJKHHBKDKB; // 0x4C
	::System::Int32 KKGMDBPJKEB; // 0x50
	::System::Byte CNIAANMNOCF; // 0x54
	::System::Byte ACIOBDEBDNK; // 0x55
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x56

	::System::Void _ctor(::LCKNJEIAIPH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LCKNJEIAIPH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JICMMACOICK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* IPBDBKFKJPA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JICMMACOICK_IPBDBKFKJPA_OFFSET))(this);
	}

	::System::Int32 FCPGPFEHCJH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JICMMACOICK_FCPGPFEHCJH_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JICMMACOICK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JICMMACOICK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JICMMACOICK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 COBHFNFAMJC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JICMMACOICK_COBHFNFAMJC_OFFSET))(this);
	}

	::System::Int32 DLOPLJFNAHO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JICMMACOICK_DLOPLJFNAHO_OFFSET))(this);
	}
};
