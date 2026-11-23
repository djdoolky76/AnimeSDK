#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F628B53C970A337A;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define E17BFE166A6338F1_B6C52DE3E38AC715_OFFSET UNITYSDK_OFFSET(0x2792A90)
#define E17BFE166A6338F1__CTOR_OFFSET UNITYSDK_OFFSET(0x2792BD0)

inline static constexpr unsigned int E17BFE166A6338F1_TypeDefinitionIndex = 16567;

class E17BFE166A6338F1 : public ::System::Object
{
public:
	::System::Int32 B3663648201C5CAF; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::F628B53C970A337A*>* B27D100291B76C15; // 0x18

	::System::Void B6C52DE3E38AC715(::System::Int32 A2EA53007126E03C)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + E17BFE166A6338F1_B6C52DE3E38AC715_OFFSET))(this, A2EA53007126E03C);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E17BFE166A6338F1__CTOR_OFFSET))(this);
	}
};
