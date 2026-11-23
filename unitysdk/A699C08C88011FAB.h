#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define A699C08C88011FAB_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x270D920)
#define A699C08C88011FAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A699C08C88011FAB_TypeDefinitionIndex = 2909;

class A699C08C88011FAB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* ABF7AFEB6262E7C1; // 0x10

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A699C08C88011FAB*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A699C08C88011FAB*&))((::PBYTE)hIl2Cpp + A699C08C88011FAB_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A699C08C88011FAB__CTOR_OFFSET))(this);
	}
};
