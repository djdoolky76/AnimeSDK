#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/B92BBABCE5ECD236.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B1415F48FB5E27BC_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x26C6BD0)
#define B1415F48FB5E27BC__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B1415F48FB5E27BC_TypeDefinitionIndex = 6617;

class B1415F48FB5E27BC : public ::System::Object
{
public:
	::System::UInt32 BBDA55B8B235A7F7; // 0x10
	::E68AA4EB51923C98::B92BBABCE5ECD236 EE62D2165FDEB6BF; // 0x14
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* E1B9B209DA801537; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B1415F48FB5E27BC__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B1415F48FB5E27BC*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B1415F48FB5E27BC*&))((::PBYTE)hIl2Cpp + B1415F48FB5E27BC_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
