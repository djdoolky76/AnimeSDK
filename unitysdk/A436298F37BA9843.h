#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

namespace System { class String; }

#define A436298F37BA9843_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x2063490)
#define A436298F37BA9843__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A436298F37BA9843_TypeDefinitionIndex = 8394;

class A436298F37BA9843 : public ::System::Object
{
public:
	::System::String* E5D3FB221F3C9479; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A436298F37BA9843__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::A436298F37BA9843* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::A436298F37BA9843*))((::PBYTE)hIl2Cpp + A436298F37BA9843_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
