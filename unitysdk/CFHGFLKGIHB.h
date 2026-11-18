#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHLPENGNGJD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CFHGFLKGIHB_BLKIAJAOILD_OFFSET UNITYSDK_OFFSET(0x1578DF20)
#define CFHGFLKGIHB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1578D470)
#define CFHGFLKGIHB_DEIIGILEEFJ_OFFSET UNITYSDK_OFFSET(0x1578DC40)
#define CFHGFLKGIHB_FHNJELHKDHG_OFFSET UNITYSDK_OFFSET(0x1578D560)
#define CFHGFLKGIHB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1578E1F0)
#define CFHGFLKGIHB_GNFFCPMHBNN_OFFSET UNITYSDK_OFFSET(0x1578E200)
#define CFHGFLKGIHB_KALADOFBEGH_OFFSET UNITYSDK_OFFSET(0x1578D830)
#define CFHGFLKGIHB_LFECPNNIDHC_OFFSET UNITYSDK_OFFSET(0x1578DB00)
#define CFHGFLKGIHB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1578DF10)
#define CFHGFLKGIHB__CTOR_OFFSET UNITYSDK_OFFSET(0x1578D460)

inline static constexpr unsigned int CFHGFLKGIHB_TypeDefinitionIndex = 9538;

class CFHGFLKGIHB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* JLBHALNHKAK; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* IFINJEIIIOI; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* KLLONEIGNIB; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* KMFADHNDNGL; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::HHLPENGNGJD HBDPAIKANDB; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* OBINGOMDODI; // 0x48
	::System::Byte CNIAANMNOCF; // 0x50
	::System::Byte ACIOBDEBDNK; // 0x51
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x52
	::System::Byte _padding0[0x1];
	::System::Int32 HMFAEACJGAH; // 0x54

	::System::Void _ctor(::HHLPENGNGJD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HHLPENGNGJD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CFHGFLKGIHB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHGFLKGIHB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* FHNJELHKDHG()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHGFLKGIHB_FHNJELHKDHG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* KALADOFBEGH()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHGFLKGIHB_KALADOFBEGH_OFFSET))(this);
	}

	::System::Int32 LFECPNNIDHC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHGFLKGIHB_LFECPNNIDHC_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* DEIIGILEEFJ()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHGFLKGIHB_DEIIGILEEFJ_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHGFLKGIHB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* BLKIAJAOILD()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHGFLKGIHB_BLKIAJAOILD_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CFHGFLKGIHB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* GNFFCPMHBNN()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHGFLKGIHB_GNFFCPMHBNN_OFFSET))(this);
	}
};
