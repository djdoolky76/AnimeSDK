#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AF5FBA80BA4AF1CC/EF6679D94BCCCB20.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define A6012E1A0376B235_A66245FDD0182C57_1_OFFSET UNITYSDK_OFFSET(0x3E6E420)
#define A6012E1A0376B235_A66245FDD0182C57_OFFSET UNITYSDK_OFFSET(0x3E6E410)

inline static constexpr unsigned int A6012E1A0376B235_TypeDefinitionIndex = 14876;

class A6012E1A0376B235 : public ::System::Object
{
public:
	static ::System::String* A66245FDD0182C57(::AF5FBA80BA4AF1CC::EF6679D94BCCCB20 B714679C324FF96E)
	{
		return ((::System::String*(*)(::AF5FBA80BA4AF1CC::EF6679D94BCCCB20))((::PBYTE)hIl2Cpp + A6012E1A0376B235_A66245FDD0182C57_OFFSET))(B714679C324FF96E);
	}

	static ::System::String* A66245FDD0182C57_1(::System::Int32 B714679C324FF96E)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + A6012E1A0376B235_A66245FDD0182C57_1_OFFSET))(B714679C324FF96E);
	}
};
