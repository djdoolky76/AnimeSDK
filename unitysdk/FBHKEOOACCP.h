#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBLLPBNCGJP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FBHKEOOACCP_CDAOLHIHAFD_OFFSET UNITYSDK_OFFSET(0x17AAF280)
#define FBHKEOOACCP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17AAEB10)
#define FBHKEOOACCP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17AAEC00)
#define FBHKEOOACCP_GAJONBKCFLG_OFFSET UNITYSDK_OFFSET(0x17AAED20)
#define FBHKEOOACCP_GBCOMPPFAAA_OFFSET UNITYSDK_OFFSET(0x17AAEC10)
#define FBHKEOOACCP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17AAEFF0)
#define FBHKEOOACCP_PKJMAACHLDO_OFFSET UNITYSDK_OFFSET(0x17AAF140)
#define FBHKEOOACCP_PLJNLMLDKAH_OFFSET UNITYSDK_OFFSET(0x17AAEA00)
#define FBHKEOOACCP_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x17AAF000)
#define FBHKEOOACCP__CTOR_OFFSET UNITYSDK_OFFSET(0x17AAE9F0)

inline static constexpr unsigned int FBHKEOOACCP_TypeDefinitionIndex = 17552;

class FBHKEOOACCP : public ::System::Object
{
public:
	::DBLLPBNCGJP HBDPAIKANDB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* BOBPLHKMBLA; // 0x20
	::System::String* ELMACGLKNOI; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::String* HEAOJENFEHI; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* MBOHLBFKDBA; // 0x40
	::System::Int32 MKACEMFEAEP; // 0x48
	::System::Byte CNIAANMNOCF; // 0x4C
	::System::Byte ACIOBDEBDNK; // 0x4D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4E
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x50

	::System::Void _ctor(::DBLLPBNCGJP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DBLLPBNCGJP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FBHKEOOACCP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* PLJNLMLDKAH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHKEOOACCP_PLJNLMLDKAH_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHKEOOACCP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FBHKEOOACCP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* GBCOMPPFAAA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHKEOOACCP_GBCOMPPFAAA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* GAJONBKCFLG()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHKEOOACCP_GAJONBKCFLG_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHKEOOACCP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHKEOOACCP_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 PKJMAACHLDO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHKEOOACCP_PKJMAACHLDO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* CDAOLHIHAFD()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHKEOOACCP_CDAOLHIHAFD_OFFSET))(this);
	}
};
