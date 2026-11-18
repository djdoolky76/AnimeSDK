#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OFEPJCHJCGK;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ShaderVariantCollection; }

#define OFEPJCHJCGK_BBPLELILJPA_BFFKHJMDHNB_OFFSET UNITYSDK_OFFSET(0x15F68CA0)
#define OFEPJCHJCGK_BBPLELILJPA__CTOR_OFFSET UNITYSDK_OFFSET(0x15F68C90)

inline static constexpr unsigned int OFEPJCHJCGK_BBPLELILJPA_TypeDefinitionIndex = 70706;

class OFEPJCHJCGK_BBPLELILJPA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::ShaderVariantCollection*>* CFMKDHLKLJD; // 0x10
	::OFEPJCHJCGK* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_BBPLELILJPA__CTOR_OFFSET))(this);
	}

	::System::Void BFFKHJMDHNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_BBPLELILJPA_BFFKHJMDHNB_OFFSET))(this);
	}
};
