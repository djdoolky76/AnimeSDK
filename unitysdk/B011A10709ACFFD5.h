#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/FD2131D3C224366E.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class E504CD983AAFF3D0;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define B011A10709ACFFD5_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x2187800)
#define B011A10709ACFFD5_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2187340)
#define B011A10709ACFFD5__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B011A10709ACFFD5_TypeDefinitionIndex = 8778;

class B011A10709ACFFD5 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* E3361134E09B0258; // 0x10
	::System::UInt32 B0F7112F6783445E; // 0x18
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::System::UInt32>* EEBD52B5119BD66F; // 0x20
	::E68AA4EB51923C98::FD2131D3C224366E E5BAACFC5D7A0841; // 0x28
	::System::Byte _padding1[0x4];
	::System::Collections::Generic::List_1<::System::UInt32>* EBCF0EF125541CC7; // 0x30
	::System::UInt32 E8F40A0B5426C4B3; // 0x38
	::System::Byte _padding2[0x4];
	::E504CD983AAFF3D0* E5867EC5EA8C72E2; // 0x40

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::B011A10709ACFFD5* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::B011A10709ACFFD5*))((::PBYTE)hIl2Cpp + B011A10709ACFFD5_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B011A10709ACFFD5*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B011A10709ACFFD5*&))((::PBYTE)hIl2Cpp + B011A10709ACFFD5_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B011A10709ACFFD5__CTOR_OFFSET))(this);
	}
};
