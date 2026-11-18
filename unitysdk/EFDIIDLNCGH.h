#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHIGOGDHHIO.h"
#include "unitysdk/Share/EScenePropertyType.h"
#include "unitysdk/ACKJPCONCMJ.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EFDIIDLNCGH_HDMBIPNPPDH_OFFSET UNITYSDK_OFFSET(0x1A19BE10)
#define EFDIIDLNCGH_KIDPINJIONI_OFFSET UNITYSDK_OFFSET(0x1A19BE30)
#define EFDIIDLNCGH_KMBAOIPAIFM_OFFSET UNITYSDK_OFFSET(0x1A19BE40)
#define EFDIIDLNCGH_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x1A19BE20)
#define EFDIIDLNCGH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A19BD90)

inline static constexpr unsigned int EFDIIDLNCGH_TypeDefinitionIndex = 12224;

class EFDIIDLNCGH : public ::LHIGOGDHHIO
{
public:
	::System::Collections::Generic::List_1<::System::UInt16>* _FHGGLFDCDKL_k__BackingField; // 0x60
	::System::Byte _CPMAOIBBFPE_k__BackingField; // 0x68

	::System::Void _ctor(::ACKJPCONCMJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::ACKJPCONCMJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EFDIIDLNCGH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::UInt16>* HDMBIPNPPDH()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt16>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDIIDLNCGH_HDMBIPNPPDH_OFFSET))(this);
	}

	::System::Byte LPFMNKEFPMM()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDIIDLNCGH_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::Boolean KIDPINJIONI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDIIDLNCGH_KIDPINJIONI_OFFSET))(this);
	}

	::Share::EScenePropertyType KMBAOIPAIFM()
	{
		return ((::Share::EScenePropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDIIDLNCGH_KMBAOIPAIFM_OFFSET))(this);
	}
};
