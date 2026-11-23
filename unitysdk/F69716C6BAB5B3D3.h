#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class E3814E543DF1A8BD;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F69716C6BAB5B3D3_EDDC83EB18060F73_OFFSET UNITYSDK_OFFSET(0x16A7BC0)
#define F69716C6BAB5B3D3_F6696792C4A7E8D6_OFFSET UNITYSDK_OFFSET(0x16A7C80)
#define F69716C6BAB5B3D3_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x254B8E0)
#define F69716C6BAB5B3D3_FF24751695120DEC_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define F69716C6BAB5B3D3_FF3A9FBAE67B413E_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define F69716C6BAB5B3D3__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F69716C6BAB5B3D3_TypeDefinitionIndex = 5450;

class F69716C6BAB5B3D3 : public ::System::Object
{
public:
	::System::UInt32 F78CFA0C288DDEF6; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::E3814E543DF1A8BD*>* F448E54C029563AF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F69716C6BAB5B3D3__CTOR_OFFSET))(this);
	}

	::System::Void FF3A9FBAE67B413E(::System::Collections::Generic::Dictionary_2<::System::Int32, ::E3814E543DF1A8BD*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::E3814E543DF1A8BD*>*))((::PBYTE)hIl2Cpp + F69716C6BAB5B3D3_FF3A9FBAE67B413E_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void F6696792C4A7E8D6(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + F69716C6BAB5B3D3_F6696792C4A7E8D6_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F69716C6BAB5B3D3*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F69716C6BAB5B3D3*&))((::PBYTE)hIl2Cpp + F69716C6BAB5B3D3_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::E3814E543DF1A8BD*>* FF24751695120DEC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::E3814E543DF1A8BD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F69716C6BAB5B3D3_FF24751695120DEC_OFFSET))(this);
	}

	::System::UInt32 EDDC83EB18060F73()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + F69716C6BAB5B3D3_EDDC83EB18060F73_OFFSET))(this);
	}
};
