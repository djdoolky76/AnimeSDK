#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class E6C70E94704CA8A3;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define E8D5BB0BC6A4D6E3_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x206EB40)
#define E8D5BB0BC6A4D6E3_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x206E8B0)
#define E8D5BB0BC6A4D6E3__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E8D5BB0BC6A4D6E3_TypeDefinitionIndex = 8492;

class E8D5BB0BC6A4D6E3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* A4C6FCD5EAEF11D0; // 0x10
	::System::UInt32 EFF204E37F66F07C; // 0x18
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::E6C70E94704CA8A3*>* B8B173D93D422B5B; // 0x20

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::E8D5BB0BC6A4D6E3* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::E8D5BB0BC6A4D6E3*))((::PBYTE)hIl2Cpp + E8D5BB0BC6A4D6E3_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E8D5BB0BC6A4D6E3*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E8D5BB0BC6A4D6E3*&))((::PBYTE)hIl2Cpp + E8D5BB0BC6A4D6E3_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E8D5BB0BC6A4D6E3__CTOR_OFFSET))(this);
	}
};
