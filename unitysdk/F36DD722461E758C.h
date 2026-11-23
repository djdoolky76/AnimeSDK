#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class E1095B1DC3EECFAC;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F36DD722461E758C_E9B2840278E040EE_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define F36DD722461E758C_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define F36DD722461E758C_EFF22DDA8551F18D_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define F36DD722461E758C_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2652250)
#define F36DD722461E758C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F36DD722461E758C_TypeDefinitionIndex = 6160;

class F36DD722461E758C : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E1095B1DC3EECFAC*>* A1BDB954362FA351; // 0x10

	::System::Void EFF22DDA8551F18D(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E1095B1DC3EECFAC*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E1095B1DC3EECFAC*>*))((::PBYTE)hIl2Cpp + F36DD722461E758C_EFF22DDA8551F18D_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::E1095B1DC3EECFAC* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::E1095B1DC3EECFAC*))((::PBYTE)hIl2Cpp + F36DD722461E758C_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F36DD722461E758C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E1095B1DC3EECFAC*>* E9B2840278E040EE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E1095B1DC3EECFAC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F36DD722461E758C_E9B2840278E040EE_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F36DD722461E758C*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F36DD722461E758C*&))((::PBYTE)hIl2Cpp + F36DD722461E758C_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
