#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class F30AA18541C759D3;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define E2F66963D51EF225_A2E715A19B97C2B7_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define E2F66963D51EF225_E339720C297973E4_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define E2F66963D51EF225_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define E2F66963D51EF225_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x235B950)
#define E2F66963D51EF225__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E2F66963D51EF225_TypeDefinitionIndex = 3219;

class E2F66963D51EF225 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F30AA18541C759D3*>* A5D64571CEC2EBFC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E2F66963D51EF225__CTOR_OFFSET))(this);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::F30AA18541C759D3* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::F30AA18541C759D3*))((::PBYTE)hIl2Cpp + E2F66963D51EF225_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F30AA18541C759D3*>* A2E715A19B97C2B7()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F30AA18541C759D3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E2F66963D51EF225_A2E715A19B97C2B7_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E2F66963D51EF225*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E2F66963D51EF225*&))((::PBYTE)hIl2Cpp + E2F66963D51EF225_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void E339720C297973E4(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F30AA18541C759D3*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F30AA18541C759D3*>*))((::PBYTE)hIl2Cpp + E2F66963D51EF225_E339720C297973E4_OFFSET))(this, E937D4885DAA1AE8);
	}
};
