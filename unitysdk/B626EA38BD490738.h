#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class FF4AD11EE9DA82E6;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B626EA38BD490738_A89FDF55D650D421_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define B626EA38BD490738_B8D37043254A8448_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define B626EA38BD490738_E1327D9669871D81_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define B626EA38BD490738_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x26833F0)
#define B626EA38BD490738__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B626EA38BD490738_TypeDefinitionIndex = 6447;

class B626EA38BD490738 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FF4AD11EE9DA82E6*>* A5D7B6331385517F; // 0x10

	::System::Void B8D37043254A8448(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FF4AD11EE9DA82E6*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FF4AD11EE9DA82E6*>*))((::PBYTE)hIl2Cpp + B626EA38BD490738_B8D37043254A8448_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::UInt32 E1327D9669871D81(::FF4AD11EE9DA82E6* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::FF4AD11EE9DA82E6*))((::PBYTE)hIl2Cpp + B626EA38BD490738_E1327D9669871D81_OFFSET))(E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B626EA38BD490738*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B626EA38BD490738*&))((::PBYTE)hIl2Cpp + B626EA38BD490738_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FF4AD11EE9DA82E6*>* A89FDF55D650D421()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FF4AD11EE9DA82E6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B626EA38BD490738_A89FDF55D650D421_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B626EA38BD490738__CTOR_OFFSET))(this);
	}
};
