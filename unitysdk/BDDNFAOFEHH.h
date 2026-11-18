#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBHDIGJCEOD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BDDNFAOFEHH_ALGBLFEGHGN_OFFSET UNITYSDK_OFFSET(0x17EEDFA0)
#define BDDNFAOFEHH_CKMJPDHMPIH_OFFSET UNITYSDK_OFFSET(0x17EEDE50)
#define BDDNFAOFEHH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17EEE280)
#define BDDNFAOFEHH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17EEE270)
#define BDDNFAOFEHH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17EEDF90)
#define BDDNFAOFEHH__CTOR_OFFSET UNITYSDK_OFFSET(0x17EEDE40)

inline static constexpr unsigned int BDDNFAOFEHH_TypeDefinitionIndex = 12895;

class BDDNFAOFEHH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* EGDPEMLMPFF; // 0x10
	::OBHDIGJCEOD HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 OEPLGKKPABG; // 0x34

	::System::Void _ctor(::OBHDIGJCEOD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OBHDIGJCEOD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BDDNFAOFEHH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 CKMJPDHMPIH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDNFAOFEHH_CKMJPDHMPIH_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDNFAOFEHH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* ALGBLFEGHGN()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDNFAOFEHH_ALGBLFEGHGN_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BDDNFAOFEHH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDNFAOFEHH_COFGIJJOFLP_OFFSET))(this);
	}
};
