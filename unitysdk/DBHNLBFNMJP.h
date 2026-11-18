#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNFADNMADCK.h"
#include "unitysdk/JAKBAFMPLCL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DBHNLBFNMJP_AAJIKEECGLE_OFFSET UNITYSDK_OFFSET(0x1A187C10)
#define DBHNLBFNMJP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A188170)
#define DBHNLBFNMJP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A187C00)
#define DBHNLBFNMJP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A187F10)
#define DBHNLBFNMJP_NDMCIIGGBEJ_OFFSET UNITYSDK_OFFSET(0x1A187F20)
#define DBHNLBFNMJP_NHJAHJIKLLA_OFFSET UNITYSDK_OFFSET(0x1A188030)
#define DBHNLBFNMJP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A187BF0)

inline static constexpr unsigned int DBHNLBFNMJP_TypeDefinitionIndex = 14029;

class DBHNLBFNMJP : public ::System::Object
{
public:
	::System::String* NJEMCOFCEPI; // 0x10
	::System::Collections::Generic::List_1<::HNFADNMADCK>* EGMFHIGIONE; // 0x18
	::JAKBAFMPLCL HBDPAIKANDB; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 IOCDJCFHMKP; // 0x3C

	::System::Void _ctor(::JAKBAFMPLCL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JAKBAFMPLCL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DBHNLBFNMJP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DBHNLBFNMJP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::HNFADNMADCK>* AAJIKEECGLE()
	{
		return ((::System::Collections::Generic::List_1<::HNFADNMADCK>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBHNLBFNMJP_AAJIKEECGLE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBHNLBFNMJP_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* NDMCIIGGBEJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBHNLBFNMJP_NDMCIIGGBEJ_OFFSET))(this);
	}

	::System::Int32 NHJAHJIKLLA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBHNLBFNMJP_NHJAHJIKLLA_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBHNLBFNMJP_COFGIJJOFLP_OFFSET))(this);
	}
};
