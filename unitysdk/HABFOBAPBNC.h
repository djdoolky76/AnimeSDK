#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GFDPJKFGDDK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HABFOBAPBNC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1746D160)
#define HABFOBAPBNC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1746CE70)
#define HABFOBAPBNC_IPBKKODBEEE_OFFSET UNITYSDK_OFFSET(0x1746CE90)
#define HABFOBAPBNC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1746CE80)
#define HABFOBAPBNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1746CE60)

inline static constexpr unsigned int HABFOBAPBNC_TypeDefinitionIndex = 15691;

class HABFOBAPBNC : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* OCDJDGMOFLG; // 0x18
	::GFDPJKFGDDK HBDPAIKANDB; // 0x20
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32

	::System::Void _ctor(::GFDPJKFGDDK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GFDPJKFGDDK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HABFOBAPBNC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HABFOBAPBNC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HABFOBAPBNC_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* IPBKKODBEEE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HABFOBAPBNC_IPBKKODBEEE_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HABFOBAPBNC_COFGIJJOFLP_OFFSET))(this);
	}
};
