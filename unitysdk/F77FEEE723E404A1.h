#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class B21A1E9D1651F5AE;
class E5A1BD5ED3AA08CA;
class F02B8870D5188880;
class F80C0164065337EC;
class FFE431922CDB51DB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define F77FEEE723E404A1_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x21D5FF0)
#define F77FEEE723E404A1_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x21D59D0)
#define F77FEEE723E404A1__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F77FEEE723E404A1_TypeDefinitionIndex = 8914;

class F77FEEE723E404A1 : public ::System::Object
{
public:
	::System::UInt32 ED833F0C42B4BAF2; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::E5A1BD5ED3AA08CA*>* BA5F0AD3F0945815; // 0x18
	::System::Collections::Generic::List_1<::F80C0164065337EC*>* B37E17408DB1767B; // 0x20
	::System::Collections::Generic::List_1<::B21A1E9D1651F5AE*>* A12ABC2FD4EA2EEC; // 0x28
	::System::Collections::Generic::List_1<::F02B8870D5188880*>* F00A066B0E31A679; // 0x30
	::System::String* A963FD20EE294E1C; // 0x38
	::System::UInt32 F15DED49F43372B1; // 0x40
	::System::Byte _padding1[0x4];
	::System::Collections::Generic::List_1<::FFE431922CDB51DB*>* A3E2D0E01DCCBC23; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F77FEEE723E404A1__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::F77FEEE723E404A1* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::F77FEEE723E404A1*))((::PBYTE)hIl2Cpp + F77FEEE723E404A1_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F77FEEE723E404A1*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F77FEEE723E404A1*&))((::PBYTE)hIl2Cpp + F77FEEE723E404A1_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
