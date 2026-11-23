#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class EF31E549F5EA7A38;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AE7F7DFBBE4731A1_E68A11C912F28CA5_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define AE7F7DFBBE4731A1_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define AE7F7DFBBE4731A1_EEABCC2FA759E13E_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define AE7F7DFBBE4731A1_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x25EB0C0)
#define AE7F7DFBBE4731A1__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AE7F7DFBBE4731A1_TypeDefinitionIndex = 5748;

class AE7F7DFBBE4731A1 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EF31E549F5EA7A38*>* F501AE9ABFBAE022; // 0x10

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EF31E549F5EA7A38*>* E68A11C912F28CA5()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EF31E549F5EA7A38*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AE7F7DFBBE4731A1_E68A11C912F28CA5_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::AE7F7DFBBE4731A1*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::AE7F7DFBBE4731A1*&))((::PBYTE)hIl2Cpp + AE7F7DFBBE4731A1_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void EEABCC2FA759E13E(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EF31E549F5EA7A38*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EF31E549F5EA7A38*>*))((::PBYTE)hIl2Cpp + AE7F7DFBBE4731A1_EEABCC2FA759E13E_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AE7F7DFBBE4731A1__CTOR_OFFSET))(this);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::EF31E549F5EA7A38* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::EF31E549F5EA7A38*))((::PBYTE)hIl2Cpp + AE7F7DFBBE4731A1_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}
};
