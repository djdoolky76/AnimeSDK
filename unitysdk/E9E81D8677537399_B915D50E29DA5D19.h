#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E9E81D8677537399;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define E9E81D8677537399_B915D50E29DA5D19_AB99B8168340B606_OFFSET UNITYSDK_OFFSET(0x39F9840)
#define E9E81D8677537399_B915D50E29DA5D19_FD82CE93A7FEDF03_OFFSET UNITYSDK_OFFSET(0x39F9870)
#define E9E81D8677537399_B915D50E29DA5D19__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E9E81D8677537399_B915D50E29DA5D19_TypeDefinitionIndex = 11864;

class E9E81D8677537399_B915D50E29DA5D19 : public ::System::Object
{
public:
	::E9E81D8677537399* A544919C800E2923; // 0x10
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E9E81D8677537399_B915D50E29DA5D19__CTOR_OFFSET))(this);
	}

	::System::Void AB99B8168340B606()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E9E81D8677537399_B915D50E29DA5D19_AB99B8168340B606_OFFSET))(this);
	}

	::System::Void FD82CE93A7FEDF03()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E9E81D8677537399_B915D50E29DA5D19_FD82CE93A7FEDF03_OFFSET))(this);
	}
};
