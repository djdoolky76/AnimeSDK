#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class BC2F1FADB790FE87;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define A490CC9C2ADB3078_A012BEF09FA46BE0_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define A490CC9C2ADB3078_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define A490CC9C2ADB3078_EFD0844EBC328DB5_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define A490CC9C2ADB3078_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x244F3E0)
#define A490CC9C2ADB3078__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A490CC9C2ADB3078_TypeDefinitionIndex = 2492;

class A490CC9C2ADB3078 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BC2F1FADB790FE87*>* F278C329FDD19ADC; // 0x10

	::System::Void EFD0844EBC328DB5(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BC2F1FADB790FE87*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BC2F1FADB790FE87*>*))((::PBYTE)hIl2Cpp + A490CC9C2ADB3078_EFD0844EBC328DB5_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BC2F1FADB790FE87*>* A012BEF09FA46BE0()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BC2F1FADB790FE87*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + A490CC9C2ADB3078_A012BEF09FA46BE0_OFFSET))(this);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::BC2F1FADB790FE87* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::BC2F1FADB790FE87*))((::PBYTE)hIl2Cpp + A490CC9C2ADB3078_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A490CC9C2ADB3078__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A490CC9C2ADB3078*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A490CC9C2ADB3078*&))((::PBYTE)hIl2Cpp + A490CC9C2ADB3078_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
