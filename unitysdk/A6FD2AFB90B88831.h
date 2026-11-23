#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define A6FD2AFB90B88831_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x2299650)
#define A6FD2AFB90B88831_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2299430)
#define A6FD2AFB90B88831__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A6FD2AFB90B88831_TypeDefinitionIndex = 7054;

class A6FD2AFB90B88831 : public ::System::Object
{
public:
	::System::UInt32 FE2FB0D55556BFD9; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::System::UInt32>* E55309AB802A5D27; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A6FD2AFB90B88831__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::A6FD2AFB90B88831* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::A6FD2AFB90B88831*))((::PBYTE)hIl2Cpp + A6FD2AFB90B88831_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A6FD2AFB90B88831*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A6FD2AFB90B88831*&))((::PBYTE)hIl2Cpp + A6FD2AFB90B88831_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
