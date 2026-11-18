#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAHLLDKNDAL.h"
#include "unitysdk/IKOPEHLPKNG.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FNAFOIJOEDC_CIHOEFIACDE_OFFSET UNITYSDK_OFFSET(0x19AF6310)
#define FNAFOIJOEDC_CLIMHIDJPAF_OFFSET UNITYSDK_OFFSET(0x19AF5FC0)
#define FNAFOIJOEDC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19AF5EC0)
#define FNAFOIJOEDC_EMIHFPAGBCB_OFFSET UNITYSDK_OFFSET(0x19AF6550)
#define FNAFOIJOEDC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19AF6540)
#define FNAFOIJOEDC_HJEIBLDGJCG_OFFSET UNITYSDK_OFFSET(0x19AF5C80)
#define FNAFOIJOEDC_KMFKPPFIJHC_OFFSET UNITYSDK_OFFSET(0x19AF58F0)
#define FNAFOIJOEDC_LGIAKKLOPFM_OFFSET UNITYSDK_OFFSET(0x19AF5B60)
#define FNAFOIJOEDC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19AF6670)
#define FNAFOIJOEDC_MEBILJEFDDH_OFFSET UNITYSDK_OFFSET(0x19AF5DA0)
#define FNAFOIJOEDC_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19AF61F0)
#define FNAFOIJOEDC__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF58E0)

inline static constexpr unsigned int FNAFOIJOEDC_TypeDefinitionIndex = 16339;

class FNAFOIJOEDC : public ::System::Object
{
public:
	::FAHLLDKNDAL HBDPAIKANDB; // 0x10
	::System::String* INKNBOKEIEN; // 0x20
	::System::Nullable_1<::IKOPEHLPKNG> IKIPBDINFMK; // 0x28
	::System::Byte _padding0[0x10];
	::System::String* IMLIAPEALGC; // 0x40
	::System::String* PCMOJLNOPPM; // 0x48
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x50
	::System::Nullable_1<::IKOPEHLPKNG> LPHFNFHIJAF; // 0x58
	::System::Byte _padding1[0x10];
	::System::String* JBCMIFKHLAI; // 0x70
	::System::Collections::Generic::List_1<::System::String*>* JOAALMKLNBH; // 0x78
	::System::String* EADOCLJMIJK; // 0x80
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x88
	::System::Byte CNIAANMNOCF; // 0x89
	::System::Byte GCHCDJCFCEG; // 0x8A
	::System::Byte ACIOBDEBDNK; // 0x8B

	::System::Void _ctor(::FAHLLDKNDAL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FAHLLDKNDAL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FNAFOIJOEDC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::String*>* KMFKPPFIJHC()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAFOIJOEDC_KMFKPPFIJHC_OFFSET))(this);
	}

	::System::String* LGIAKKLOPFM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAFOIJOEDC_LGIAKKLOPFM_OFFSET))(this);
	}

	::System::String* HJEIBLDGJCG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAFOIJOEDC_HJEIBLDGJCG_OFFSET))(this);
	}

	::System::String* MEBILJEFDDH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAFOIJOEDC_MEBILJEFDDH_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAFOIJOEDC_COFGIJJOFLP_OFFSET))(this);
	}

	::IKOPEHLPKNG CLIMHIDJPAF()
	{
		return ((::IKOPEHLPKNG(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAFOIJOEDC_CLIMHIDJPAF_OFFSET))(this);
	}

	::System::String* PPIFNHNGCGO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAFOIJOEDC_PPIFNHNGCGO_OFFSET))(this);
	}

	::IKOPEHLPKNG CIHOEFIACDE()
	{
		return ((::IKOPEHLPKNG(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAFOIJOEDC_CIHOEFIACDE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FNAFOIJOEDC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* EMIHFPAGBCB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAFOIJOEDC_EMIHFPAGBCB_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAFOIJOEDC_LJANCIBECFG_OFFSET))(this);
	}
};
