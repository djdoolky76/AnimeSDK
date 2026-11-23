#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class B6F867BD004303AC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define A071A61C513770B2_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x25DF620)
#define A071A61C513770B2__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A071A61C513770B2_TypeDefinitionIndex = 5710;

class A071A61C513770B2 : public ::System::Object
{
public:
	::System::String* A963FD20EE294E1C; // 0x10
	::System::Collections::Generic::List_1<::B6F867BD004303AC*>* B430B002DF54F682; // 0x18

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A071A61C513770B2*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A071A61C513770B2*&))((::PBYTE)hIl2Cpp + A071A61C513770B2_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A071A61C513770B2__CTOR_OFFSET))(this);
	}
};
