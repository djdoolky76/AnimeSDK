#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class FAB0F771EC039CE2;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FF4103011FFB777C_A0C069029B798BCF_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define FF4103011FFB777C_B31C663D2719BCD6_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define FF4103011FFB777C_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define FF4103011FFB777C_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x244D9D0)
#define FF4103011FFB777C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FF4103011FFB777C_TypeDefinitionIndex = 2523;

class FF4103011FFB777C : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FAB0F771EC039CE2*>* A550653B2F6278BC; // 0x10

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FAB0F771EC039CE2*>* A0C069029B798BCF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FAB0F771EC039CE2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FF4103011FFB777C_A0C069029B798BCF_OFFSET))(this);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::FAB0F771EC039CE2* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::FAB0F771EC039CE2*))((::PBYTE)hIl2Cpp + FF4103011FFB777C_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Void B31C663D2719BCD6(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FAB0F771EC039CE2*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FAB0F771EC039CE2*>*))((::PBYTE)hIl2Cpp + FF4103011FFB777C_B31C663D2719BCD6_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::FF4103011FFB777C*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::FF4103011FFB777C*&))((::PBYTE)hIl2Cpp + FF4103011FFB777C_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FF4103011FFB777C__CTOR_OFFSET))(this);
	}
};
