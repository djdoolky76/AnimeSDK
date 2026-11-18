#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKMFNKALBJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AJHGJDMMFDM_ABKLOIALJIM_OFFSET UNITYSDK_OFFSET(0x157724E0)
#define AJHGJDMMFDM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x157727B0)
#define AJHGJDMMFDM_FEAJCFGHHIB_OFFSET UNITYSDK_OFFSET(0x15772210)
#define AJHGJDMMFDM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x157720F0)
#define AJHGJDMMFDM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x157728A0)
#define AJHGJDMMFDM_NLANHBHBECA_OFFSET UNITYSDK_OFFSET(0x15772100)
#define AJHGJDMMFDM__CTOR_OFFSET UNITYSDK_OFFSET(0x157720E0)

inline static constexpr unsigned int AJHGJDMMFDM_TypeDefinitionIndex = 15188;

class AJHGJDMMFDM : public ::System::Object
{
public:
	::JHKMFNKALBJ HBDPAIKANDB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* EIGKEFNEDJE; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* MBNJPMKGNCJ; // 0x28
	::System::String* PKDENKDMAGL; // 0x30
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x40
	::System::Byte CNIAANMNOCF; // 0x41
	::System::Byte ACIOBDEBDNK; // 0x42

	::System::Void _ctor(::JHKMFNKALBJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JHKMFNKALBJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AJHGJDMMFDM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AJHGJDMMFDM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* NLANHBHBECA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJHGJDMMFDM_NLANHBHBECA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* FEAJCFGHHIB()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJHGJDMMFDM_FEAJCFGHHIB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* ABKLOIALJIM()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJHGJDMMFDM_ABKLOIALJIM_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJHGJDMMFDM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AJHGJDMMFDM_LJANCIBECFG_OFFSET))(this);
	}
};
