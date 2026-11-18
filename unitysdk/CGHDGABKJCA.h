#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/POMJPDHIJKO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CGHDGABKJCA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B999410)
#define CGHDGABKJCA_COKGLHCGLIM_OFFSET UNITYSDK_OFFSET(0x1B999640)
#define CGHDGABKJCA_DHPNLFNDKJE_OFFSET UNITYSDK_OFFSET(0x1B999500)
#define CGHDGABKJCA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B999920)
#define CGHDGABKJCA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B999910)
#define CGHDGABKJCA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B999400)

inline static constexpr unsigned int CGHDGABKJCA_TypeDefinitionIndex = 11623;

class CGHDGABKJCA : public ::System::Object
{
public:
	::POMJPDHIJKO HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* KPGGPKFNLDP; // 0x28
	::System::Int32 ACHCFPHBPMP; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x35
	::System::Byte CNIAANMNOCF; // 0x36

	::System::Void _ctor(::POMJPDHIJKO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::POMJPDHIJKO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CGHDGABKJCA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGHDGABKJCA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 DHPNLFNDKJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGHDGABKJCA_DHPNLFNDKJE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* COKGLHCGLIM()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGHDGABKJCA_COKGLHCGLIM_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGHDGABKJCA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CGHDGABKJCA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
