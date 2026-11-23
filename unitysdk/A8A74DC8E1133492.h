#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

namespace System { class String; }

#define A8A74DC8E1133492_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x20A3450)
#define A8A74DC8E1133492__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A8A74DC8E1133492_TypeDefinitionIndex = 8634;

class A8A74DC8E1133492 : public ::System::Object
{
public:
	::System::String* EFCC378D42892A51; // 0x10

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::A8A74DC8E1133492* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::A8A74DC8E1133492*))((::PBYTE)hIl2Cpp + A8A74DC8E1133492_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A8A74DC8E1133492__CTOR_OFFSET))(this);
	}
};
