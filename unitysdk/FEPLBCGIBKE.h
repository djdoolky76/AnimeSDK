#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AOOEBCMOIAI.h"
#include "unitysdk/PMDKGCCDGMN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FEPLBCGIBKE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A5A35D0)
#define FEPLBCGIBKE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A5A35C0)
#define FEPLBCGIBKE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A5A36C0)
#define FEPLBCGIBKE_NJCPDOJLDNI_OFFSET UNITYSDK_OFFSET(0x1A5A32F0)
#define FEPLBCGIBKE_ONCIKLPDOJA_OFFSET UNITYSDK_OFFSET(0x1A5A36D0)
#define FEPLBCGIBKE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5A32E0)

inline static constexpr unsigned int FEPLBCGIBKE_TypeDefinitionIndex = 17485;

class FEPLBCGIBKE : public ::System::Object
{
public:
	::System::String* CKNDNKGLKEL; // 0x10
	::System::Collections::Generic::List_1<::PMDKGCCDGMN>* OPFJBBBBNAI; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::AOOEBCMOIAI HBDPAIKANDB; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* MMFAMJCHIPH; // 0x38
	::System::Int32 OKBBGPGIODD; // 0x40
	::System::Byte CNIAANMNOCF; // 0x44
	::System::Byte ACIOBDEBDNK; // 0x45
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x46

	::System::Void _ctor(::AOOEBCMOIAI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AOOEBCMOIAI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FEPLBCGIBKE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* NJCPDOJLDNI()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPLBCGIBKE_NJCPDOJLDNI_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FEPLBCGIBKE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPLBCGIBKE_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPLBCGIBKE_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::PMDKGCCDGMN>* ONCIKLPDOJA()
	{
		return ((::System::Collections::Generic::List_1<::PMDKGCCDGMN>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPLBCGIBKE_ONCIKLPDOJA_OFFSET))(this);
	}
};
