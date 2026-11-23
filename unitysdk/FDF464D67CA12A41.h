#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define FDF464D67CA12A41_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x21D7700)
#define FDF464D67CA12A41_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x21D74E0)
#define FDF464D67CA12A41__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FDF464D67CA12A41_TypeDefinitionIndex = 8939;

class FDF464D67CA12A41 : public ::System::Object
{
public:
	::System::UInt32 B2348FF049F24404; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::System::UInt32>* F0C85D07E6FD2942; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDF464D67CA12A41__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::FDF464D67CA12A41* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::FDF464D67CA12A41*))((::PBYTE)hIl2Cpp + FDF464D67CA12A41_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::FDF464D67CA12A41*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::FDF464D67CA12A41*&))((::PBYTE)hIl2Cpp + FDF464D67CA12A41_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
