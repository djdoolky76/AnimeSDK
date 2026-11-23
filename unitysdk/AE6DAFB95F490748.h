#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class F0F8162C507DB7B8;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AE6DAFB95F490748_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2342C70)
#define AE6DAFB95F490748__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AE6DAFB95F490748_TypeDefinitionIndex = 2323;

class AE6DAFB95F490748 : public ::System::Object
{
public:
	::System::Int32 E8A1A1345CE071C9; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::F0F8162C507DB7B8*>* F8434180EE23F359; // 0x18

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::AE6DAFB95F490748*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::AE6DAFB95F490748*&))((::PBYTE)hIl2Cpp + AE6DAFB95F490748_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AE6DAFB95F490748__CTOR_OFFSET))(this);
	}
};
