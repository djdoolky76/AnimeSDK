#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OOCCOADDKFK.h"
#include "unitysdk/PKGDHDNLMFH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FAIEOJEEMLB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19F50DD0)
#define FAIEOJEEMLB_FIGNOOEDDNC_OFFSET UNITYSDK_OFFSET(0x19F51160)
#define FAIEOJEEMLB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19F51430)
#define FAIEOJEEMLB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19F51150)
#define FAIEOJEEMLB_OJFHNDJPMEF_OFFSET UNITYSDK_OFFSET(0x19F51000)
#define FAIEOJEEMLB_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19F50EC0)
#define FAIEOJEEMLB__CTOR_OFFSET UNITYSDK_OFFSET(0x19F50DC0)

inline static constexpr unsigned int FAIEOJEEMLB_TypeDefinitionIndex = 15620;

class FAIEOJEEMLB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* PCCPGAMLEMB; // 0x10
	::PKGDHDNLMFH HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x34
	::OOCCOADDKFK FIEBEJPFHPP; // 0x38

	::System::Void _ctor(::PKGDHDNLMFH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PKGDHDNLMFH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FAIEOJEEMLB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAIEOJEEMLB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAIEOJEEMLB_PPIFNHNGCGO_OFFSET))(this);
	}

	::OOCCOADDKFK OJFHNDJPMEF()
	{
		return ((::OOCCOADDKFK(*)(::PVOID))((::PBYTE)hIl2Cpp + FAIEOJEEMLB_OJFHNDJPMEF_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAIEOJEEMLB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* FIGNOOEDDNC()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAIEOJEEMLB_FIGNOOEDDNC_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FAIEOJEEMLB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
