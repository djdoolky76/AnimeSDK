#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class E15A3200525A360A;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ECB9F1F60B93EF46_A0BC0F7B83C18327_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define ECB9F1F60B93EF46_A43086F67CCFB84A_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define ECB9F1F60B93EF46_F1550E997725D991_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define ECB9F1F60B93EF46_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x25078E0)
#define ECB9F1F60B93EF46__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ECB9F1F60B93EF46_TypeDefinitionIndex = 5256;

class ECB9F1F60B93EF46 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E15A3200525A360A*>* B6A0AC794A9D6B80; // 0x10

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::ECB9F1F60B93EF46*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::ECB9F1F60B93EF46*&))((::PBYTE)hIl2Cpp + ECB9F1F60B93EF46_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E15A3200525A360A*>* A0BC0F7B83C18327()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E15A3200525A360A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECB9F1F60B93EF46_A0BC0F7B83C18327_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECB9F1F60B93EF46__CTOR_OFFSET))(this);
	}

	::System::Void A43086F67CCFB84A(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E15A3200525A360A*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E15A3200525A360A*>*))((::PBYTE)hIl2Cpp + ECB9F1F60B93EF46_A43086F67CCFB84A_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::UInt32 F1550E997725D991(::E15A3200525A360A* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::E15A3200525A360A*))((::PBYTE)hIl2Cpp + ECB9F1F60B93EF46_F1550E997725D991_OFFSET))(E937D4885DAA1AE8);
	}
};
