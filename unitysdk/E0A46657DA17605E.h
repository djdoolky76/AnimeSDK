#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A8FA77E95A5D1550.h"
#include "unitysdk/AEE8489B91368410.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define E0A46657DA17605E_BC8FCB218D25F8E8_OFFSET UNITYSDK_OFFSET(0x16856F0)
#define E0A46657DA17605E__CTOR_OFFSET UNITYSDK_OFFSET(0x1686220)

inline static constexpr unsigned int E0A46657DA17605E_TypeDefinitionIndex = 401;

class E0A46657DA17605E : public ::A8FA77E95A5D1550
{
public:
	::System::Collections::Generic::List_1<::AEE8489B91368410>* F08103FE5F950884; // 0x28

	::System::Boolean BC8FCB218D25F8E8(::System::Single EB5670302F34D4B7)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + E0A46657DA17605E_BC8FCB218D25F8E8_OFFSET))(this, EB5670302F34D4B7);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E0A46657DA17605E__CTOR_OFFSET))(this);
	}
};
