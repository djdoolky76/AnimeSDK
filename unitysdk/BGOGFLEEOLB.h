#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKOMBLAGKLA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BGOGFLEEOLB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17A7B620)
#define BGOGFLEEOLB_DBBHCKCDMMP_OFFSET UNITYSDK_OFFSET(0x17A7B350)
#define BGOGFLEEOLB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17A7B200)
#define BGOGFLEEOLB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17A7B850)
#define BGOGFLEEOLB_MENEFNNFOAD_OFFSET UNITYSDK_OFFSET(0x17A7B710)
#define BGOGFLEEOLB_OKGKFCDPCHE_OFFSET UNITYSDK_OFFSET(0x17A7B210)
#define BGOGFLEEOLB__CTOR_OFFSET UNITYSDK_OFFSET(0x17A7B1F0)

inline static constexpr unsigned int BGOGFLEEOLB_TypeDefinitionIndex = 14384;

class BGOGFLEEOLB : public ::System::Object
{
public:
	::DKOMBLAGKLA HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* OLFPCGKLMKF; // 0x28
	::System::Int32 OBANGPGCHHP; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 FHMNGLJEFNL; // 0x38

	::System::Void _ctor(::DKOMBLAGKLA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DKOMBLAGKLA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BGOGFLEEOLB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BGOGFLEEOLB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 OKGKFCDPCHE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOGFLEEOLB_OKGKFCDPCHE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* DBBHCKCDMMP()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOGFLEEOLB_DBBHCKCDMMP_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOGFLEEOLB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 MENEFNNFOAD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOGFLEEOLB_MENEFNNFOAD_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOGFLEEOLB_LJANCIBECFG_OFFSET))(this);
	}
};
