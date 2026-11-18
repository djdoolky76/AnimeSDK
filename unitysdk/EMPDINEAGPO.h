#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNFADNMADCK.h"
#include "unitysdk/IONKMMOCFMM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EMPDINEAGPO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B9BE690)
#define EMPDINEAGPO_DCDMFJMFNIB_OFFSET UNITYSDK_OFFSET(0x1B9BE9E0)
#define EMPDINEAGPO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B9BE780)
#define EMPDINEAGPO_IBCBFMCKECN_OFFSET UNITYSDK_OFFSET(0x1B9BE790)
#define EMPDINEAGPO_IBLJFEMFEHM_OFFSET UNITYSDK_OFFSET(0x1B9BE8D0)
#define EMPDINEAGPO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B9BE680)
#define EMPDINEAGPO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9BE670)

inline static constexpr unsigned int EMPDINEAGPO_TypeDefinitionIndex = 15278;

class EMPDINEAGPO : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::Collections::Generic::List_1<::HNFADNMADCK>* FJCPFFNDOJN; // 0x18
	::System::String* OFNBKIFEJJM; // 0x20
	::IONKMMOCFMM HBDPAIKANDB; // 0x28
	::System::Int32 NOKJLNNIHEC; // 0x38
	::System::Byte CNIAANMNOCF; // 0x3C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3D
	::System::Byte ACIOBDEBDNK; // 0x3E

	::System::Void _ctor(::IONKMMOCFMM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IONKMMOCFMM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EMPDINEAGPO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPDINEAGPO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPDINEAGPO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EMPDINEAGPO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 IBCBFMCKECN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPDINEAGPO_IBCBFMCKECN_OFFSET))(this);
	}

	::System::String* IBLJFEMFEHM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPDINEAGPO_IBLJFEMFEHM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::HNFADNMADCK>* DCDMFJMFNIB()
	{
		return ((::System::Collections::Generic::List_1<::HNFADNMADCK>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPDINEAGPO_DCDMFJMFNIB_OFFSET))(this);
	}
};
