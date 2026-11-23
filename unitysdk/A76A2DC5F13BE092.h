#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class A0CB7596830B422B;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define A76A2DC5F13BE092_EE7D53F5792D11AE_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define A76A2DC5F13BE092_F7C57FB67DE641F6_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define A76A2DC5F13BE092_F90798F621B05792_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define A76A2DC5F13BE092_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2367560)
#define A76A2DC5F13BE092__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A76A2DC5F13BE092_TypeDefinitionIndex = 3270;

class A76A2DC5F13BE092 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A0CB7596830B422B*>* A2BAEB0B1C6D3EBA; // 0x10

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A76A2DC5F13BE092*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A76A2DC5F13BE092*&))((::PBYTE)hIl2Cpp + A76A2DC5F13BE092_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A76A2DC5F13BE092__CTOR_OFFSET))(this);
	}

	static ::System::UInt32 F7C57FB67DE641F6(::A0CB7596830B422B* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::A0CB7596830B422B*))((::PBYTE)hIl2Cpp + A76A2DC5F13BE092_F7C57FB67DE641F6_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A0CB7596830B422B*>* EE7D53F5792D11AE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A0CB7596830B422B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + A76A2DC5F13BE092_EE7D53F5792D11AE_OFFSET))(this);
	}

	::System::Void F90798F621B05792(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A0CB7596830B422B*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A0CB7596830B422B*>*))((::PBYTE)hIl2Cpp + A76A2DC5F13BE092_F90798F621B05792_OFFSET))(this, E937D4885DAA1AE8);
	}
};
