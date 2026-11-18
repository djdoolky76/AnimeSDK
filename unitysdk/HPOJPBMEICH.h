#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ODGHHDPCFEA.h"
#include "unitysdk/FNACKANDHBK.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HPOJPBMEICH_LEIBHDDBNKH_OFFSET UNITYSDK_OFFSET(0x16101690)
#define HPOJPBMEICH_PKNMKENCGBM_OFFSET UNITYSDK_OFFSET(0x16101640)
#define HPOJPBMEICH__CTOR_OFFSET UNITYSDK_OFFSET(0x16101230)

inline static constexpr unsigned int HPOJPBMEICH_TypeDefinitionIndex = 13946;

class HPOJPBMEICH : public ::ODGHHDPCFEA
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* BAICHJHABFK; // 0x38
	::Il2CppArray<::System::UInt64>* HNDAKHJCBGL; // 0x40
	::System::Single AAEBAFAMFCC; // 0x48
	::System::Single KLFOHAJGNMA; // 0x4C
	::System::Single KEKLOPKLAIM; // 0x50

	::System::Void _ctor(::FNACKANDHBK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FNACKANDHBK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HPOJPBMEICH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void PKNMKENCGBM(::Il2CppArray<::System::UInt64>* FEMMFOPFGKP, ::System::Int32 BIOGEIHKABE)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt64>*, ::System::Int32))((::PBYTE)hIl2Cpp + HPOJPBMEICH_PKNMKENCGBM_OFFSET))(this, FEMMFOPFGKP, BIOGEIHKABE);
	}

	::System::Boolean LEIBHDDBNKH(::Il2CppArray<::System::UInt64>* FEMMFOPFGKP, ::System::Int32 HODAIDNDKHD)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt64>*, ::System::Int32))((::PBYTE)hIl2Cpp + HPOJPBMEICH_LEIBHDDBNKH_OFFSET))(this, FEMMFOPFGKP, HODAIDNDKHD);
	}
};
