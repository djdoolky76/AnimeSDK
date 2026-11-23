#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define A093DD4781149F43_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2375670)
#define A093DD4781149F43__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A093DD4781149F43_TypeDefinitionIndex = 3264;

class A093DD4781149F43 : public ::System::Object
{
public:
	::System::Single EE534B0BED4999D9; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* AD2FE6A03463D082; // 0x18

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A093DD4781149F43*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A093DD4781149F43*&))((::PBYTE)hIl2Cpp + A093DD4781149F43_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A093DD4781149F43__CTOR_OFFSET))(this);
	}
};
