#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BDBEAB74F48E2533_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2469020)
#define BDBEAB74F48E2533__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BDBEAB74F48E2533_TypeDefinitionIndex = 4357;

class BDBEAB74F48E2533 : public ::System::Object
{
public:
	::System::Int32 E830D5090F322986; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::System::String*>* B30D24570537FB52; // 0x18
	::System::Int32 FFE015A3084F2A29; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDBEAB74F48E2533__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::BDBEAB74F48E2533*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::BDBEAB74F48E2533*&))((::PBYTE)hIl2Cpp + BDBEAB74F48E2533_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
