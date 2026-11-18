#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IPCFDOGGOEI.h"
#include "unitysdk/OLJNEALFFCI.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JKEJELKPABD_CHAFMFFDPND_OFFSET UNITYSDK_OFFSET(0x1B13E960)
#define JKEJELKPABD_EGBJDDKNCAE_OFFSET UNITYSDK_OFFSET(0x1B13E940)
#define JKEJELKPABD_GHDFHJNNLLA_OFFSET UNITYSDK_OFFSET(0x1B13E970)
#define JKEJELKPABD_GOIIHJFIDDF_OFFSET UNITYSDK_OFFSET(0x1B13E930)
#define JKEJELKPABD_JEFGMHPMBCO_OFFSET UNITYSDK_OFFSET(0x1B13E910)
#define JKEJELKPABD_KGELIDBGBFI_OFFSET UNITYSDK_OFFSET(0x1B13E920)
#define JKEJELKPABD_PMDPCEFBKLP_OFFSET UNITYSDK_OFFSET(0x1B13E950)
#define JKEJELKPABD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B13E900)

inline static constexpr unsigned int JKEJELKPABD_TypeDefinitionIndex = 17114;

class JKEJELKPABD : public ::IPCFDOGGOEI
{
public:
	::System::Void _ctor(::OLJNEALFFCI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OLJNEALFFCI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JKEJELKPABD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* JEFGMHPMBCO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKEJELKPABD_JEFGMHPMBCO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* KGELIDBGBFI()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKEJELKPABD_KGELIDBGBFI_OFFSET))(this);
	}

	::System::String* GOIIHJFIDDF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKEJELKPABD_GOIIHJFIDDF_OFFSET))(this);
	}

	::System::String* EGBJDDKNCAE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKEJELKPABD_EGBJDDKNCAE_OFFSET))(this);
	}

	::System::String* PMDPCEFBKLP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKEJELKPABD_PMDPCEFBKLP_OFFSET))(this);
	}

	::System::String* CHAFMFFDPND()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKEJELKPABD_CHAFMFFDPND_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* GHDFHJNNLLA()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKEJELKPABD_GHDFHJNNLLA_OFFSET))(this);
	}
};
