#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class F2C4CB16FE531C0D;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define A4B0AE3AEFC8FE01_B0A2906A0C5952F5_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define A4B0AE3AEFC8FE01_EC38B50977840C79_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define A4B0AE3AEFC8FE01_F1160F04AB35E68C_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define A4B0AE3AEFC8FE01_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x23A43A0)
#define A4B0AE3AEFC8FE01__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A4B0AE3AEFC8FE01_TypeDefinitionIndex = 3600;

class A4B0AE3AEFC8FE01 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F2C4CB16FE531C0D*>* ADAB79388544008C; // 0x10

	::System::Void EC38B50977840C79(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F2C4CB16FE531C0D*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F2C4CB16FE531C0D*>*))((::PBYTE)hIl2Cpp + A4B0AE3AEFC8FE01_EC38B50977840C79_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::UInt32 B0A2906A0C5952F5(::F2C4CB16FE531C0D* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::F2C4CB16FE531C0D*))((::PBYTE)hIl2Cpp + A4B0AE3AEFC8FE01_B0A2906A0C5952F5_OFFSET))(E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A4B0AE3AEFC8FE01*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A4B0AE3AEFC8FE01*&))((::PBYTE)hIl2Cpp + A4B0AE3AEFC8FE01_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A4B0AE3AEFC8FE01__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F2C4CB16FE531C0D*>* F1160F04AB35E68C()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F2C4CB16FE531C0D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + A4B0AE3AEFC8FE01_F1160F04AB35E68C_OFFSET))(this);
	}
};
