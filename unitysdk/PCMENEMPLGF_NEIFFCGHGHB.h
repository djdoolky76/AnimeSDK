#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PCMENEMPLGF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PCMENEMPLGF_NEIFFCGHGHB_KFBALGINANF_OFFSET UNITYSDK_OFFSET(0x160014F0)
#define PCMENEMPLGF_NEIFFCGHGHB__CTOR_OFFSET UNITYSDK_OFFSET(0x160014E0)

inline static constexpr unsigned int PCMENEMPLGF_NEIFFCGHGHB_TypeDefinitionIndex = 62854;

class PCMENEMPLGF_NEIFFCGHGHB : public ::System::Object
{
public:
	::PCMENEMPLGF* KLHPEBKNIFB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* MJMEDDHCABL; // 0x18
	::System::Collections::Generic::List_1<::System::Object*>* JIEIKFHLJAB; // 0x20
	::System::Int32 EOGLMAEPALE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_NEIFFCGHGHB__CTOR_OFFSET))(this);
	}

	::System::Void KFBALGINANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_NEIFFCGHGHB_KFBALGINANF_OFFSET))(this);
	}
};
