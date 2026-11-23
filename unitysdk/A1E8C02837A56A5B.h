#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class AC6F35A8B50F1B37;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define A1E8C02837A56A5B_E53C8562574D9F32_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define A1E8C02837A56A5B_F1B2F7ED6BA74FCF_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define A1E8C02837A56A5B_F4328A17777B8E59_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define A1E8C02837A56A5B_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2622C00)
#define A1E8C02837A56A5B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A1E8C02837A56A5B_TypeDefinitionIndex = 5895;

class A1E8C02837A56A5B : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AC6F35A8B50F1B37*>* A7AB9EB7F5B396A0; // 0x10

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A1E8C02837A56A5B*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A1E8C02837A56A5B*&))((::PBYTE)hIl2Cpp + A1E8C02837A56A5B_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AC6F35A8B50F1B37*>* E53C8562574D9F32()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AC6F35A8B50F1B37*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + A1E8C02837A56A5B_E53C8562574D9F32_OFFSET))(this);
	}

	static ::System::UInt32 F1B2F7ED6BA74FCF(::AC6F35A8B50F1B37* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::AC6F35A8B50F1B37*))((::PBYTE)hIl2Cpp + A1E8C02837A56A5B_F1B2F7ED6BA74FCF_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A1E8C02837A56A5B__CTOR_OFFSET))(this);
	}

	::System::Void F4328A17777B8E59(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AC6F35A8B50F1B37*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AC6F35A8B50F1B37*>*))((::PBYTE)hIl2Cpp + A1E8C02837A56A5B_F4328A17777B8E59_OFFSET))(this, E937D4885DAA1AE8);
	}
};
