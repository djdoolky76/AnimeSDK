#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MKLOOABDHFA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CCJJKHFBEBN_AJJCOBKHJNB_OFFSET UNITYSDK_OFFSET(0x17A84060)
#define CCJJKHFBEBN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17A83E20)
#define CCJJKHFBEBN_FECFCHMJHML_OFFSET UNITYSDK_OFFSET(0x17A84510)
#define CCJJKHFBEBN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17A842E0)
#define CCJJKHFBEBN_GKAMCMIJFHJ_OFFSET UNITYSDK_OFFSET(0x17A83B50)
#define CCJJKHFBEBN_HJEFCNNHHEO_OFFSET UNITYSDK_OFFSET(0x17A83F20)
#define CCJJKHFBEBN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17A83F10)
#define CCJJKHFBEBN_LLNNAHCIAOM_OFFSET UNITYSDK_OFFSET(0x17A84620)
#define CCJJKHFBEBN_MEAKGMCFGAL_OFFSET UNITYSDK_OFFSET(0x17A84400)
#define CCJJKHFBEBN_MNGNAMLGGJN_OFFSET UNITYSDK_OFFSET(0x17A842F0)
#define CCJJKHFBEBN_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x17A841A0)
#define CCJJKHFBEBN__CTOR_OFFSET UNITYSDK_OFFSET(0x17A83B40)

inline static constexpr unsigned int CCJJKHFBEBN_TypeDefinitionIndex = 16120;

class CCJJKHFBEBN : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* OKBBGPGIODD; // 0x10
	::System::String* EMDOKBMBFAB; // 0x18
	::System::String* AFAFGDJPGNF; // 0x20
	::MKLOOABDHFA HBDPAIKANDB; // 0x28
	::System::String* FPDCABEOFOC; // 0x38
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x40
	::System::String* BOFBGDGCHCD; // 0x48
	::System::Byte ACIOBDEBDNK; // 0x50
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x51
	::System::Byte CNIAANMNOCF; // 0x52
	::System::Byte _padding0[0x1];
	::System::Int32 HIAJPPOHKLD; // 0x54
	::System::Int32 PCMOJLNOPPM; // 0x58
	::System::Int32 ONPMJGJBNOA; // 0x5C

	::System::Void _ctor(::MKLOOABDHFA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MKLOOABDHFA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CCJJKHFBEBN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* GKAMCMIJFHJ()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJKHFBEBN_GKAMCMIJFHJ_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJKHFBEBN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJKHFBEBN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 HJEFCNNHHEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJKHFBEBN_HJEFCNNHHEO_OFFSET))(this);
	}

	::System::Int32 AJJCOBKHJNB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJKHFBEBN_AJJCOBKHJNB_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJKHFBEBN_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CCJJKHFBEBN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* MNGNAMLGGJN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJKHFBEBN_MNGNAMLGGJN_OFFSET))(this);
	}

	::System::String* MEAKGMCFGAL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJKHFBEBN_MEAKGMCFGAL_OFFSET))(this);
	}

	::System::String* FECFCHMJHML()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJKHFBEBN_FECFCHMJHML_OFFSET))(this);
	}

	::System::String* LLNNAHCIAOM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJKHFBEBN_LLNNAHCIAOM_OFFSET))(this);
	}
};
