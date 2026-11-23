#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class E385B6199D0F07F2;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define E5FEA7438CA21F8B_A53A1A3F718F453C_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define E5FEA7438CA21F8B_E27940B39EC7E3A6_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define E5FEA7438CA21F8B_ED6DB523E8D8A1A6_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define E5FEA7438CA21F8B_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x252EF80)
#define E5FEA7438CA21F8B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E5FEA7438CA21F8B_TypeDefinitionIndex = 5324;

class E5FEA7438CA21F8B : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E385B6199D0F07F2*>* BCC30EFCA2570F11; // 0x10

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E5FEA7438CA21F8B*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E5FEA7438CA21F8B*&))((::PBYTE)hIl2Cpp + E5FEA7438CA21F8B_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void A53A1A3F718F453C(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E385B6199D0F07F2*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E385B6199D0F07F2*>*))((::PBYTE)hIl2Cpp + E5FEA7438CA21F8B_A53A1A3F718F453C_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E5FEA7438CA21F8B__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E385B6199D0F07F2*>* E27940B39EC7E3A6()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E385B6199D0F07F2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E5FEA7438CA21F8B_E27940B39EC7E3A6_OFFSET))(this);
	}

	static ::System::UInt32 ED6DB523E8D8A1A6(::E385B6199D0F07F2* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::E385B6199D0F07F2*))((::PBYTE)hIl2Cpp + E5FEA7438CA21F8B_ED6DB523E8D8A1A6_OFFSET))(E937D4885DAA1AE8);
	}
};
