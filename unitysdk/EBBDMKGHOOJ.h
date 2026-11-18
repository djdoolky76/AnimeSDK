#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOFMKLFEEFH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define EBBDMKGHOOJ_CCIIJKDNIAD_OFFSET UNITYSDK_OFFSET(0x19F43550)
#define EBBDMKGHOOJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19F436A0)
#define EBBDMKGHOOJ_DNBHFHFGGEJ_OFFSET UNITYSDK_OFFSET(0x19F431B0)
#define EBBDMKGHOOJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19F43690)
#define EBBDMKGHOOJ_ICCGHCLODHL_OFFSET UNITYSDK_OFFSET(0x19F43300)
#define EBBDMKGHOOJ_IPJONOOFHFO_OFFSET UNITYSDK_OFFSET(0x19F43790)
#define EBBDMKGHOOJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19F432F0)
#define EBBDMKGHOOJ_NFNJGNKIELJ_OFFSET UNITYSDK_OFFSET(0x19F430A0)
#define EBBDMKGHOOJ_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19F43410)
#define EBBDMKGHOOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19F43090)

inline static constexpr unsigned int EBBDMKGHOOJ_TypeDefinitionIndex = 10138;

class EBBDMKGHOOJ : public ::System::Object
{
public:
	::System::String* EGBLIADLGNO; // 0x10
	::EOFMKLFEEFH HBDPAIKANDB; // 0x18
	::System::String* ADPPGGJPBMH; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 ALNEMGPKLLL; // 0x3C
	::System::Int32 MOENHPCJOAE; // 0x40
	::System::Int32 MAMJJIGGPEF; // 0x44
	::System::Int32 PCMOJLNOPPM; // 0x48

	::System::Void _ctor(::EOFMKLFEEFH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EOFMKLFEEFH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EBBDMKGHOOJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* NFNJGNKIELJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBDMKGHOOJ_NFNJGNKIELJ_OFFSET))(this);
	}

	::System::Int32 DNBHFHFGGEJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBDMKGHOOJ_DNBHFHFGGEJ_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBDMKGHOOJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* ICCGHCLODHL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBDMKGHOOJ_ICCGHCLODHL_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBDMKGHOOJ_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 CCIIJKDNIAD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBDMKGHOOJ_CCIIJKDNIAD_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EBBDMKGHOOJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBDMKGHOOJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 IPJONOOFHFO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBDMKGHOOJ_IPJONOOFHFO_OFFSET))(this);
	}
};
