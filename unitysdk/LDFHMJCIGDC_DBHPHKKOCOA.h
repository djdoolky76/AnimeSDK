#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDFINMINMCL.h"
#include "unitysdk/System/Object.h"

class LDFHMJCIGDC;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LDFHMJCIGDC_DBHPHKKOCOA_IJKLEJJFIPF_OFFSET UNITYSDK_OFFSET(0x1683BAD0)
#define LDFHMJCIGDC_DBHPHKKOCOA__CTOR_OFFSET UNITYSDK_OFFSET(0x1683BAC0)

inline static constexpr unsigned int LDFHMJCIGDC_DBHPHKKOCOA_TypeDefinitionIndex = 49143;

class LDFHMJCIGDC_DBHPHKKOCOA : public ::System::Object
{
public:
	::LDFHMJCIGDC* KLHPEBKNIFB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* BKCKCBKJNKK; // 0x18
	::System::Action_1<::System::Boolean>* EFGDHJCMKMG; // 0x20
	::LDFINMINMCL CJECGFFLFGH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_DBHPHKKOCOA__CTOR_OFFSET))(this);
	}

	::System::Void IJKLEJJFIPF(::System::Boolean JBNBMFNNELP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_DBHPHKKOCOA_IJKLEJJFIPF_OFFSET))(this, JBNBMFNNELP);
	}
};
