#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A8FA77E95A5D1550.h"
#include "unitysdk/AEE8489B91368410.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define EA7D2A904F6E9FDD_BC8FCB218D25F8E8_OFFSET UNITYSDK_OFFSET(0x18BDB10)
#define EA7D2A904F6E9FDD__CTOR_OFFSET UNITYSDK_OFFSET(0x18BDEF0)

inline static constexpr unsigned int EA7D2A904F6E9FDD_TypeDefinitionIndex = 1347;

class EA7D2A904F6E9FDD : public ::A8FA77E95A5D1550
{
public:
	::System::Collections::Generic::List_1<::AEE8489B91368410>* F08103FE5F950884; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EA7D2A904F6E9FDD__CTOR_OFFSET))(this);
	}

	::System::Boolean BC8FCB218D25F8E8(::System::Single EB5670302F34D4B7)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EA7D2A904F6E9FDD_BC8FCB218D25F8E8_OFFSET))(this, EB5670302F34D4B7);
	}
};
