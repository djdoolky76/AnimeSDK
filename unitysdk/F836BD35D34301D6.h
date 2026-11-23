#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define F836BD35D34301D6_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x239CE30)
#define F836BD35D34301D6_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x239CB80)
#define F836BD35D34301D6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F836BD35D34301D6_TypeDefinitionIndex = 3524;

class F836BD35D34301D6 : public ::System::Object
{
public:
	::System::UInt32 F8A05088F33E6295; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::System::UInt32>* A945B710EABA53AD; // 0x18
	::System::UInt32 B4EFDEA84AFCDA3E; // 0x20

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F836BD35D34301D6*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F836BD35D34301D6*&))((::PBYTE)hIl2Cpp + F836BD35D34301D6_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::F836BD35D34301D6* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::F836BD35D34301D6*))((::PBYTE)hIl2Cpp + F836BD35D34301D6_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F836BD35D34301D6__CTOR_OFFSET))(this);
	}
};
