#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LENENBDEDLJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JJHEEGJNPDA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B635A60)
#define JJHEEGJNPDA_EHCHPIJJLDA_OFFSET UNITYSDK_OFFSET(0x1B6354A0)
#define JJHEEGJNPDA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B635A50)
#define JJHEEGJNPDA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B635770)
#define JJHEEGJNPDA_MLDHINHDACM_OFFSET UNITYSDK_OFFSET(0x1B635780)
#define JJHEEGJNPDA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B635490)

inline static constexpr unsigned int JJHEEGJNPDA_TypeDefinitionIndex = 13956;

class JJHEEGJNPDA : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* KDKKBJMCGOK; // 0x18
	::LENENBDEDLJ HBDPAIKANDB; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* BNBLMGJEJLN; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A

	::System::Void _ctor(::LENENBDEDLJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LENENBDEDLJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JJHEEGJNPDA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* EHCHPIJJLDA()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHEEGJNPDA_EHCHPIJJLDA_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHEEGJNPDA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* MLDHINHDACM()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHEEGJNPDA_MLDHINHDACM_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JJHEEGJNPDA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHEEGJNPDA_COFGIJJOFLP_OFFSET))(this);
	}
};
