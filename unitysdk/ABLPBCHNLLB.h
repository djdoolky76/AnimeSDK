#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class FBHPDPBIGPK;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ABLPBCHNLLB_IJHMGGIHEEM_OFFSET UNITYSDK_OFFSET(0x7C8C90)
#define ABLPBCHNLLB__CTOR_OFFSET UNITYSDK_OFFSET(0x52E440)

inline static constexpr unsigned int ABLPBCHNLLB_TypeDefinitionIndex = 66952;

struct alignas(8) ABLPBCHNLLB
{
	::System::Boolean NGCJDIOIHNC; // 0x10
	::System::Byte _padding0[0x7];
	::System::Collections::Generic::List_1<::FBHPDPBIGPK*>* IDPIDNFENAI; // 0x18

	::System::Void _ctor(::System::Collections::Generic::List_1<::FBHPDPBIGPK*>* IDPIDNFENAI, ::System::Boolean NGCJDIOIHNC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FBHPDPBIGPK*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ABLPBCHNLLB__CTOR_OFFSET))(this, IDPIDNFENAI, NGCJDIOIHNC);
	}

	::System::Boolean IJHMGGIHEEM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABLPBCHNLLB_IJHMGGIHEEM_OFFSET))(this);
	}
};
