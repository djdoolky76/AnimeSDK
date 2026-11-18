#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PHCLFOFFJAN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define KMOCMEGPFFC_AAGGGICFPLB_OFFSET UNITYSDK_OFFSET(0x19D9BDE0)
#define KMOCMEGPFFC_BPLDKKKAFAD_OFFSET UNITYSDK_OFFSET(0x19D9BC80)
#define KMOCMEGPFFC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19D9B7B0)
#define KMOCMEGPFFC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19D9B7A0)
#define KMOCMEGPFFC_HJNAAHCPILF_OFFSET UNITYSDK_OFFSET(0x19D9BA00)
#define KMOCMEGPFFC_HMAGJBDALOC_OFFSET UNITYSDK_OFFSET(0x19D9B8A0)
#define KMOCMEGPFFC_IGDOFLKLJMJ_OFFSET UNITYSDK_OFFSET(0x19D9BB60)
#define KMOCMEGPFFC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19D9BC70)
#define KMOCMEGPFFC__CTOR_OFFSET UNITYSDK_OFFSET(0x19D9B790)

inline static constexpr unsigned int KMOCMEGPFFC_TypeDefinitionIndex = 10426;

class KMOCMEGPFFC : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* GKBCDCOJELH; // 0x18
	::PHCLFOFFJAN HBDPAIKANDB; // 0x20
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32
	::System::Byte _padding0[0x1];
	::System::Single EEDENAFKMMO; // 0x34
	::System::Single LPMJDLLEMDH; // 0x38
	::System::Single LELLAJHNPPI; // 0x3C
	::System::Single KEDKNJHBGJH; // 0x40

	::System::Void _ctor(::PHCLFOFFJAN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PHCLFOFFJAN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KMOCMEGPFFC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KMOCMEGPFFC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOCMEGPFFC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Single HMAGJBDALOC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOCMEGPFFC_HMAGJBDALOC_OFFSET))(this);
	}

	::System::Single HJNAAHCPILF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOCMEGPFFC_HJNAAHCPILF_OFFSET))(this);
	}

	::System::String* IGDOFLKLJMJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOCMEGPFFC_IGDOFLKLJMJ_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOCMEGPFFC_LJANCIBECFG_OFFSET))(this);
	}

	::System::Single BPLDKKKAFAD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOCMEGPFFC_BPLDKKKAFAD_OFFSET))(this);
	}

	::System::Single AAGGGICFPLB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOCMEGPFFC_AAGGGICFPLB_OFFSET))(this);
	}
};
