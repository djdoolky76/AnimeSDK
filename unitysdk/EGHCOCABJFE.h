#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NICGIOKMMPM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EGHCOCABJFE_BLJEKIEAENH_OFFSET UNITYSDK_OFFSET(0x1A59C1F0)
#define EGHCOCABJFE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A59BE30)
#define EGHCOCABJFE_EDFNDLLKAAC_OFFSET UNITYSDK_OFFSET(0x1A59C4D0)
#define EGHCOCABJFE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A59C4C0)
#define EGHCOCABJFE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A59BE20)
#define EGHCOCABJFE_MFNOFADJCOJ_OFFSET UNITYSDK_OFFSET(0x1A59BF20)
#define EGHCOCABJFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A59BE10)

inline static constexpr unsigned int EGHCOCABJFE_TypeDefinitionIndex = 9365;

class EGHCOCABJFE : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* LKMNJOKMGBN; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* OCCJDGMNDDB; // 0x20
	::NICGIOKMMPM HBDPAIKANDB; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* FKDPJJOCAGD; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x41
	::System::Byte CNIAANMNOCF; // 0x42

	::System::Void _ctor(::NICGIOKMMPM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NICGIOKMMPM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EGHCOCABJFE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGHCOCABJFE_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGHCOCABJFE_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* MFNOFADJCOJ()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGHCOCABJFE_MFNOFADJCOJ_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* BLJEKIEAENH()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGHCOCABJFE_BLJEKIEAENH_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EGHCOCABJFE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* EDFNDLLKAAC()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGHCOCABJFE_EDFNDLLKAAC_OFFSET))(this);
	}
};
