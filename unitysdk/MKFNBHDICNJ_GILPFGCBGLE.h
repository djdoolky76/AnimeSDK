#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MKFNBHDICNJ;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MKFNBHDICNJ_GILPFGCBGLE_CJOKKDOJFKI_OFFSET UNITYSDK_OFFSET(0x151E72B0)
#define MKFNBHDICNJ_GILPFGCBGLE_GNKLNALGLNF_OFFSET UNITYSDK_OFFSET(0x151E6F50)
#define MKFNBHDICNJ_GILPFGCBGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x151E6F40)

inline static constexpr unsigned int MKFNBHDICNJ_GILPFGCBGLE_TypeDefinitionIndex = 61378;

class MKFNBHDICNJ_GILPFGCBGLE : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* FEECNEBHDHG; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* PFLMAFGEHBH; // 0x18
	::MKFNBHDICNJ* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_GILPFGCBGLE__CTOR_OFFSET))(this);
	}

	::System::Void GNKLNALGLNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_GILPFGCBGLE_GNKLNALGLNF_OFFSET))(this);
	}

	::System::Void CJOKKDOJFKI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_GILPFGCBGLE_CJOKKDOJFKI_OFFSET))(this);
	}
};
