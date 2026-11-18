#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KBGGJELAAOG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BKOEKIEIMHE_ADBBCNFGHPJ_OFFSET UNITYSDK_OFFSET(0x1572EC90)
#define BKOEKIEIMHE_AGMHGLLEDCE_OFFSET UNITYSDK_OFFSET(0x1572E9C0)
#define BKOEKIEIMHE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1572EDB0)
#define BKOEKIEIMHE_DCGJGALIIHB_OFFSET UNITYSDK_OFFSET(0x1572E8A0)
#define BKOEKIEIMHE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1572E9B0)
#define BKOEKIEIMHE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1572EDA0)
#define BKOEKIEIMHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1572E890)

inline static constexpr unsigned int BKOEKIEIMHE_TypeDefinitionIndex = 16959;

class BKOEKIEIMHE : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* DDCEOGKNPOI; // 0x18
	::System::String* FGECIGPJPCF; // 0x20
	::KBGGJELAAOG HBDPAIKANDB; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* KBGBALHPOKA; // 0x38
	::System::Byte CNIAANMNOCF; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x41
	::System::Byte ACIOBDEBDNK; // 0x42

	::System::Void _ctor(::KBGGJELAAOG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KBGGJELAAOG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BKOEKIEIMHE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* DCGJGALIIHB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOEKIEIMHE_DCGJGALIIHB_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BKOEKIEIMHE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* AGMHGLLEDCE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOEKIEIMHE_AGMHGLLEDCE_OFFSET))(this);
	}

	::System::String* ADBBCNFGHPJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOEKIEIMHE_ADBBCNFGHPJ_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOEKIEIMHE_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOEKIEIMHE_COFGIJJOFLP_OFFSET))(this);
	}
};
