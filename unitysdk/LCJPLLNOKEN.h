#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGDIEIJMAJA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LCJPLLNOKEN_BGKBLDJIFJB_OFFSET UNITYSDK_OFFSET(0x18BE0B60)
#define LCJPLLNOKEN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18BE0ED0)
#define LCJPLLNOKEN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18BE0740)
#define LCJPLLNOKEN_GLMCDIELEBD_OFFSET UNITYSDK_OFFSET(0x18BE0890)
#define LCJPLLNOKEN_GODNJEDDKCG_OFFSET UNITYSDK_OFFSET(0x18BE0750)
#define LCJPLLNOKEN_KAJAPFMPANP_OFFSET UNITYSDK_OFFSET(0x18BE0D90)
#define LCJPLLNOKEN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18BE0D80)
#define LCJPLLNOKEN_LJJNKNBHIJE_OFFSET UNITYSDK_OFFSET(0x18BE0C70)
#define LCJPLLNOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x18BE0730)

inline static constexpr unsigned int LCJPLLNOKEN_TypeDefinitionIndex = 9649;

class LCJPLLNOKEN : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* ODFBFEBLNFM; // 0x18
	::OGDIEIJMAJA HBDPAIKANDB; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* MNJBKNDDBGJ; // 0x30
	::System::String* NINJEMLLDGI; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x40
	::System::Byte CNIAANMNOCF; // 0x41
	::System::Byte ACIOBDEBDNK; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 JAMNKILIILM; // 0x44
	::System::Int32 DLKPFKMEOOI; // 0x48

	::System::Void _ctor(::OGDIEIJMAJA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OGDIEIJMAJA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LCJPLLNOKEN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LCJPLLNOKEN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 GODNJEDDKCG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJPLLNOKEN_GODNJEDDKCG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* GLMCDIELEBD()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJPLLNOKEN_GLMCDIELEBD_OFFSET))(this);
	}

	::System::String* BGKBLDJIFJB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJPLLNOKEN_BGKBLDJIFJB_OFFSET))(this);
	}

	::System::String* LJJNKNBHIJE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJPLLNOKEN_LJJNKNBHIJE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJPLLNOKEN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 KAJAPFMPANP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJPLLNOKEN_KAJAPFMPANP_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJPLLNOKEN_COFGIJJOFLP_OFFSET))(this);
	}
};
