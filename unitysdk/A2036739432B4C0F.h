#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class EAB2414E7F8AF889;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define A2036739432B4C0F_B1EDB2A264A98909_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define A2036739432B4C0F_B2FB873F5FD228E4_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define A2036739432B4C0F_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define A2036739432B4C0F_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2344FB0)
#define A2036739432B4C0F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A2036739432B4C0F_TypeDefinitionIndex = 3182;

class A2036739432B4C0F : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EAB2414E7F8AF889*>* B740CA1CFDE68454; // 0x10

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EAB2414E7F8AF889*>* B2FB873F5FD228E4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EAB2414E7F8AF889*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + A2036739432B4C0F_B2FB873F5FD228E4_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A2036739432B4C0F__CTOR_OFFSET))(this);
	}

	::System::Void B1EDB2A264A98909(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EAB2414E7F8AF889*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EAB2414E7F8AF889*>*))((::PBYTE)hIl2Cpp + A2036739432B4C0F_B1EDB2A264A98909_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A2036739432B4C0F*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A2036739432B4C0F*&))((::PBYTE)hIl2Cpp + A2036739432B4C0F_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::EAB2414E7F8AF889* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::EAB2414E7F8AF889*))((::PBYTE)hIl2Cpp + A2036739432B4C0F_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}
};
