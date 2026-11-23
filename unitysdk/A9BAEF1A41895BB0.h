#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class B692F76900AB572E;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define A9BAEF1A41895BB0_E51445B380A443C7_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define A9BAEF1A41895BB0_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define A9BAEF1A41895BB0_FAA8646EE3CD75D1_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define A9BAEF1A41895BB0_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x23F1160)
#define A9BAEF1A41895BB0__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A9BAEF1A41895BB0_TypeDefinitionIndex = 3854;

class A9BAEF1A41895BB0 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B692F76900AB572E*>* E0944F1A6CBA638F; // 0x10

	::System::Void E51445B380A443C7(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B692F76900AB572E*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B692F76900AB572E*>*))((::PBYTE)hIl2Cpp + A9BAEF1A41895BB0_E51445B380A443C7_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B692F76900AB572E*>* FAA8646EE3CD75D1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B692F76900AB572E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + A9BAEF1A41895BB0_FAA8646EE3CD75D1_OFFSET))(this);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::B692F76900AB572E* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::B692F76900AB572E*))((::PBYTE)hIl2Cpp + A9BAEF1A41895BB0_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A9BAEF1A41895BB0__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A9BAEF1A41895BB0*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A9BAEF1A41895BB0*&))((::PBYTE)hIl2Cpp + A9BAEF1A41895BB0_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
