#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJAGALKIFHA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MAKAFNPJKNP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19DAEC20)
#define MAKAFNPJKNP_DBBHCKCDMMP_OFFSET UNITYSDK_OFFSET(0x19DAE980)
#define MAKAFNPJKNP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19DAEC00)
#define MAKAFNPJKNP_HEMAPHGPPGN_OFFSET UNITYSDK_OFFSET(0x19DAE870)
#define MAKAFNPJKNP_JHACGCMLJDF_OFFSET UNITYSDK_OFFSET(0x19DAE760)
#define MAKAFNPJKNP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19DAEC10)
#define MAKAFNPJKNP_OGECMPOCEAP_OFFSET UNITYSDK_OFFSET(0x19DAEAC0)
#define MAKAFNPJKNP__CTOR_OFFSET UNITYSDK_OFFSET(0x19DAE750)

inline static constexpr unsigned int MAKAFNPJKNP_TypeDefinitionIndex = 11347;

class MAKAFNPJKNP : public ::System::Object
{
public:
	::System::String* FLHAHBOFMFC; // 0x10
	::JJAGALKIFHA HBDPAIKANDB; // 0x18
	::System::String* BADJMHGMDBA; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::String* PKKMIPICIAJ; // 0x38
	::System::Int32 IFAFBPPHOJJ; // 0x40
	::System::Byte CNIAANMNOCF; // 0x44
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x45
	::System::Byte ACIOBDEBDNK; // 0x46
	::System::Byte _padding0[0x1];
	::System::Int32 OLFPCGKLMKF; // 0x48

	::System::Void _ctor(::JJAGALKIFHA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JJAGALKIFHA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MAKAFNPJKNP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* JHACGCMLJDF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAKAFNPJKNP_JHACGCMLJDF_OFFSET))(this);
	}

	::System::String* HEMAPHGPPGN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAKAFNPJKNP_HEMAPHGPPGN_OFFSET))(this);
	}

	::System::Int32 DBBHCKCDMMP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAKAFNPJKNP_DBBHCKCDMMP_OFFSET))(this);
	}

	::System::Int32 OGECMPOCEAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAKAFNPJKNP_OGECMPOCEAP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MAKAFNPJKNP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAKAFNPJKNP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAKAFNPJKNP_COFGIJJOFLP_OFFSET))(this);
	}
};
