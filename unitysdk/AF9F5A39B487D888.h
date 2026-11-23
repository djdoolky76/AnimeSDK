#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class A339FAC4C7846604;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AF9F5A39B487D888_AF5E87A8A90F62C5_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define AF9F5A39B487D888_F507B9724A610A47_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define AF9F5A39B487D888_F5B4A75A7D728975_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define AF9F5A39B487D888_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x242C530)
#define AF9F5A39B487D888__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AF9F5A39B487D888_TypeDefinitionIndex = 4302;

class AF9F5A39B487D888 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A339FAC4C7846604*>* AF922CCE575969C8; // 0x10

	static ::System::UInt32 F5B4A75A7D728975(::A339FAC4C7846604* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::A339FAC4C7846604*))((::PBYTE)hIl2Cpp + AF9F5A39B487D888_F5B4A75A7D728975_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AF9F5A39B487D888__CTOR_OFFSET))(this);
	}

	::System::Void AF5E87A8A90F62C5(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A339FAC4C7846604*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A339FAC4C7846604*>*))((::PBYTE)hIl2Cpp + AF9F5A39B487D888_AF5E87A8A90F62C5_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A339FAC4C7846604*>* F507B9724A610A47()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A339FAC4C7846604*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AF9F5A39B487D888_F507B9724A610A47_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::AF9F5A39B487D888*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::AF9F5A39B487D888*&))((::PBYTE)hIl2Cpp + AF9F5A39B487D888_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
