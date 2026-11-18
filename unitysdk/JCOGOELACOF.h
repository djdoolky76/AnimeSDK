#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FLMIBEMKKMI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JCOGOELACOF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x161150A0)
#define JCOGOELACOF_DCAMONJGNHG_OFFSET UNITYSDK_OFFSET(0x161152F0)
#define JCOGOELACOF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x161152E0)
#define JCOGOELACOF_LFGIDEIHCID_OFFSET UNITYSDK_OFFSET(0x16115190)
#define JCOGOELACOF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x161152D0)
#define JCOGOELACOF__CTOR_OFFSET UNITYSDK_OFFSET(0x16115090)

inline static constexpr unsigned int JCOGOELACOF_TypeDefinitionIndex = 14091;

class JCOGOELACOF : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* MNBNMLDLKCL; // 0x18
	::FLMIBEMKKMI HBDPAIKANDB; // 0x20
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 CKALBMAMAKP; // 0x34

	::System::Void _ctor(::FLMIBEMKKMI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FLMIBEMKKMI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JCOGOELACOF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCOGOELACOF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 LFGIDEIHCID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCOGOELACOF_LFGIDEIHCID_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCOGOELACOF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JCOGOELACOF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* DCAMONJGNHG()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCOGOELACOF_DCAMONJGNHG_OFFSET))(this);
	}
};
