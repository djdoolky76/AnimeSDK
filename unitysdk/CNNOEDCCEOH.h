#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIGMOMIMJEL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CNNOEDCCEOH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A58A190)
#define CNNOEDCCEOH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A58A550)
#define CNNOEDCCEOH_GCJPDHBKNCG_OFFSET UNITYSDK_OFFSET(0x1A58A280)
#define CNNOEDCCEOH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A58A180)
#define CNNOEDCCEOH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A58A170)

inline static constexpr unsigned int CNNOEDCCEOH_TypeDefinitionIndex = 13519;

class CNNOEDCCEOH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* MLGFEBJAKIG; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::GIGMOMIMJEL HBDPAIKANDB; // 0x20
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32

	::System::Void _ctor(::GIGMOMIMJEL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GIGMOMIMJEL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CNNOEDCCEOH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNOEDCCEOH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNOEDCCEOH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* GCJPDHBKNCG()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNOEDCCEOH_GCJPDHBKNCG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CNNOEDCCEOH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
