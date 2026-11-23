#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EC24E560351DEB7F_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x267D6E0)
#define EC24E560351DEB7F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EC24E560351DEB7F_TypeDefinitionIndex = 6413;

class EC24E560351DEB7F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* FB87F5BEF577983B; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>* FC6748A5FCA5039A; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* BF4BDA9998C0EE99; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* E363B033898E084B; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* B57C02AACF8F58D5; // 0x30
	::System::Collections::Generic::List_1<::System::UInt64>* BAFD90A14EE78A63; // 0x38

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::EC24E560351DEB7F*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::EC24E560351DEB7F*&))((::PBYTE)hIl2Cpp + EC24E560351DEB7F_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EC24E560351DEB7F__CTOR_OFFSET))(this);
	}
};
