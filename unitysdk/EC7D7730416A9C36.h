#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class E8690DF7C7FB7E60;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EC7D7730416A9C36_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x23638F0)
#define EC7D7730416A9C36__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EC7D7730416A9C36_TypeDefinitionIndex = 3295;

class EC7D7730416A9C36 : public ::System::Object
{
public:
	::System::UInt64 A42B9A08B09FDC5D; // 0x10
	::System::String* BFDDDCCEFC23E5FA; // 0x18
	::System::Collections::Generic::List_1<::E8690DF7C7FB7E60*>* E9B0D51B89857587; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EC7D7730416A9C36__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::EC7D7730416A9C36*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::EC7D7730416A9C36*&))((::PBYTE)hIl2Cpp + EC7D7730416A9C36_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
