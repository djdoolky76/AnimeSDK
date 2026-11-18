#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJNCIFMOLCF.h"
#include "unitysdk/HNFADNMADCK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HMHCIFOCALG_BIKBPACEGNE_OFFSET UNITYSDK_OFFSET(0x19535CF0)
#define HMHCIFOCALG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19535FD0)
#define HMHCIFOCALG_DEKJNEHKOOD_OFFSET UNITYSDK_OFFSET(0x195360D0)
#define HMHCIFOCALG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19535FC0)
#define HMHCIFOCALG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x195360C0)
#define HMHCIFOCALG__CTOR_OFFSET UNITYSDK_OFFSET(0x19535CE0)

inline static constexpr unsigned int HMHCIFOCALG_TypeDefinitionIndex = 14020;

class HMHCIFOCALG : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* AODHGMIOMEJ; // 0x10
	::System::Collections::Generic::List_1<::HNFADNMADCK>* NFBDJNKANBF; // 0x18
	::FJNCIFMOLCF HBDPAIKANDB; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A

	::System::Void _ctor(::FJNCIFMOLCF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FJNCIFMOLCF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HMHCIFOCALG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* BIKBPACEGNE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHCIFOCALG_BIKBPACEGNE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HMHCIFOCALG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHCIFOCALG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHCIFOCALG_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::HNFADNMADCK>* DEKJNEHKOOD()
	{
		return ((::System::Collections::Generic::List_1<::HNFADNMADCK>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHCIFOCALG_DEKJNEHKOOD_OFFSET))(this);
	}
};
