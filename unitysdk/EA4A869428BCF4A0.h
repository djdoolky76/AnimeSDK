#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class BFFBD078430D643D;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EA4A869428BCF4A0_EABDD224C48B76EB_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define EA4A869428BCF4A0_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define EA4A869428BCF4A0_F03AAA1BCF21F9CC_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define EA4A869428BCF4A0_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x265F7E0)
#define EA4A869428BCF4A0__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EA4A869428BCF4A0_TypeDefinitionIndex = 6268;

class EA4A869428BCF4A0 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BFFBD078430D643D*>* B0661205892283E1; // 0x10

	static ::System::UInt32 EB8DF78C1D71130D(::BFFBD078430D643D* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::BFFBD078430D643D*))((::PBYTE)hIl2Cpp + EA4A869428BCF4A0_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::EA4A869428BCF4A0*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::EA4A869428BCF4A0*&))((::PBYTE)hIl2Cpp + EA4A869428BCF4A0_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EA4A869428BCF4A0__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BFFBD078430D643D*>* F03AAA1BCF21F9CC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BFFBD078430D643D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EA4A869428BCF4A0_F03AAA1BCF21F9CC_OFFSET))(this);
	}

	::System::Void EABDD224C48B76EB(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BFFBD078430D643D*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BFFBD078430D643D*>*))((::PBYTE)hIl2Cpp + EA4A869428BCF4A0_EABDD224C48B76EB_OFFSET))(this, E937D4885DAA1AE8);
	}
};
