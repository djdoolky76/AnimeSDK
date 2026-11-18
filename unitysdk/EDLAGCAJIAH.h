#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NJADODDEDDN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EDLAGCAJIAH_CNHOKELPBBD_OFFSET UNITYSDK_OFFSET(0x1A597800)
#define EDLAGCAJIAH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A5972F0)
#define EDLAGCAJIAH_DCAMONJGNHG_OFFSET UNITYSDK_OFFSET(0x1A5973E0)
#define EDLAGCAJIAH_DMMNHBNKBEE_OFFSET UNITYSDK_OFFSET(0x1A597520)
#define EDLAGCAJIAH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A5972E0)
#define EDLAGCAJIAH_KPGPOHNDMGL_OFFSET UNITYSDK_OFFSET(0x1A597910)
#define EDLAGCAJIAH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A5977F0)
#define EDLAGCAJIAH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5972D0)

inline static constexpr unsigned int EDLAGCAJIAH_TypeDefinitionIndex = 17142;

class EDLAGCAJIAH : public ::System::Object
{
public:
	::System::String* NMINPGGEJGG; // 0x10
	::NJADODDEDDN HBDPAIKANDB; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* JMCDNAHGIGC; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* DHDFOCJJJFI; // 0x30
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x40
	::System::Byte CNIAANMNOCF; // 0x41
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 MNBNMLDLKCL; // 0x44

	::System::Void _ctor(::NJADODDEDDN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NJADODDEDDN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EDLAGCAJIAH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EDLAGCAJIAH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLAGCAJIAH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 DCAMONJGNHG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLAGCAJIAH_DCAMONJGNHG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* DMMNHBNKBEE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLAGCAJIAH_DMMNHBNKBEE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLAGCAJIAH_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* CNHOKELPBBD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLAGCAJIAH_CNHOKELPBBD_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* KPGPOHNDMGL()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLAGCAJIAH_KPGPOHNDMGL_OFFSET))(this);
	}
};
