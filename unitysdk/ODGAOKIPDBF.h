#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJCDECGKEDB.h"
#include "unitysdk/HNFADNMADCK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ODGAOKIPDBF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1D0D0390)
#define ODGAOKIPDBF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1D0D05C0)
#define ODGAOKIPDBF_JPPKCFOKIMF_OFFSET UNITYSDK_OFFSET(0x1D0D08E0)
#define ODGAOKIPDBF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1D0D08D0)
#define ODGAOKIPDBF_MDGFAEHGPGG_OFFSET UNITYSDK_OFFSET(0x1D0D05D0)
#define ODGAOKIPDBF_PLMPAGMICCF_OFFSET UNITYSDK_OFFSET(0x1D0D0480)
#define ODGAOKIPDBF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0D0380)

inline static constexpr unsigned int ODGAOKIPDBF_TypeDefinitionIndex = 13093;

class ODGAOKIPDBF : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::AJCDECGKEDB HBDPAIKANDB; // 0x18
	::System::Collections::Generic::List_1<::HNFADNMADCK>* PFJODNMOIHC; // 0x28
	::System::Int32 MKBMILFACKL; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 LLJBFIIHJDI; // 0x38

	::System::Void _ctor(::AJCDECGKEDB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AJCDECGKEDB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ODGAOKIPDBF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGAOKIPDBF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PLMPAGMICCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGAOKIPDBF_PLMPAGMICCF_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ODGAOKIPDBF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::HNFADNMADCK>* MDGFAEHGPGG()
	{
		return ((::System::Collections::Generic::List_1<::HNFADNMADCK>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGAOKIPDBF_MDGFAEHGPGG_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGAOKIPDBF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 JPPKCFOKIMF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGAOKIPDBF_JPPKCFOKIMF_OFFSET))(this);
	}
};
