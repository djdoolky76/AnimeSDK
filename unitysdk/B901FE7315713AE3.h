#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class B692F76900AB572E;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B901FE7315713AE3_A11477FB240ADAB4_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define B901FE7315713AE3_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define B901FE7315713AE3_F40AC25F72A7BC0F_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define B901FE7315713AE3_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x25EF0D0)
#define B901FE7315713AE3__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B901FE7315713AE3_TypeDefinitionIndex = 5713;

class B901FE7315713AE3 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B692F76900AB572E*>* F38D45DDE554AF0A; // 0x10

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B901FE7315713AE3*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B901FE7315713AE3*&))((::PBYTE)hIl2Cpp + B901FE7315713AE3_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::B692F76900AB572E* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::B692F76900AB572E*))((::PBYTE)hIl2Cpp + B901FE7315713AE3_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Void A11477FB240ADAB4(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B692F76900AB572E*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B692F76900AB572E*>*))((::PBYTE)hIl2Cpp + B901FE7315713AE3_A11477FB240ADAB4_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B901FE7315713AE3__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B692F76900AB572E*>* F40AC25F72A7BC0F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B692F76900AB572E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B901FE7315713AE3_F40AC25F72A7BC0F_OFFSET))(this);
	}
};
