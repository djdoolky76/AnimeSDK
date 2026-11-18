#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MLKIBJKCDMJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MLKIBJKCDMJ_LJBDFLLMCFK_BHIDLPINEDM_OFFSET UNITYSDK_OFFSET(0x17D4AB80)
#define MLKIBJKCDMJ_LJBDFLLMCFK_JBBIMOKMHMP_OFFSET UNITYSDK_OFFSET(0x17D4ABD0)
#define MLKIBJKCDMJ_LJBDFLLMCFK__CTOR_OFFSET UNITYSDK_OFFSET(0x17D4AB70)

inline static constexpr unsigned int MLKIBJKCDMJ_LJBDFLLMCFK_TypeDefinitionIndex = 85279;

class MLKIBJKCDMJ_LJBDFLLMCFK : public ::System::Object
{
public:
	::MLKIBJKCDMJ* KLHPEBKNIFB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* AGPAEHEEIAK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKIBJKCDMJ_LJBDFLLMCFK__CTOR_OFFSET))(this);
	}

	::System::Boolean BHIDLPINEDM(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MLKIBJKCDMJ_LJBDFLLMCFK_BHIDLPINEDM_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Int32 JBBIMOKMHMP(::System::Int32 EJCBEJMGFAJ, ::System::Int32 EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MLKIBJKCDMJ_LJBDFLLMCFK_JBBIMOKMHMP_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
