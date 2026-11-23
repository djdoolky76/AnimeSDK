#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B561744EC5D7D459;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define E39D822B102D4804__CTOR_OFFSET UNITYSDK_OFFSET(0x3EF6A50)

inline static constexpr unsigned int E39D822B102D4804_TypeDefinitionIndex = 15240;

class E39D822B102D4804 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* AC8B3654011E148D; // 0x10
	::B561744EC5D7D459* FA0ACB28F78B70A7; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E39D822B102D4804__CTOR_OFFSET))(this);
	}
};
