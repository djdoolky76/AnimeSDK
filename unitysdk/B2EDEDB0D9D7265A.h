#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class B6ED3C557C8CAD85;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B2EDEDB0D9D7265A_ABE9C29FEF3BCB3F_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define B2EDEDB0D9D7265A_AD018C9081BA1255_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define B2EDEDB0D9D7265A_EBA557CF497CF457_OFFSET UNITYSDK_OFFSET(0x1F38580)
#define B2EDEDB0D9D7265A_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2381520)
#define B2EDEDB0D9D7265A__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B2EDEDB0D9D7265A_TypeDefinitionIndex = 3434;

class B2EDEDB0D9D7265A : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::B6ED3C557C8CAD85*>* A433DB4AA0C64120; // 0x10

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B2EDEDB0D9D7265A*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B2EDEDB0D9D7265A*&))((::PBYTE)hIl2Cpp + B2EDEDB0D9D7265A_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B2EDEDB0D9D7265A__CTOR_OFFSET))(this);
	}

	static ::System::String* EBA557CF497CF457(::B6ED3C557C8CAD85* E937D4885DAA1AE8)
	{
		return ((::System::String*(*)(::B6ED3C557C8CAD85*))((::PBYTE)hIl2Cpp + B2EDEDB0D9D7265A_EBA557CF497CF457_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Void ABE9C29FEF3BCB3F(::System::Collections::Generic::Dictionary_2<::System::String*, ::B6ED3C557C8CAD85*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::B6ED3C557C8CAD85*>*))((::PBYTE)hIl2Cpp + B2EDEDB0D9D7265A_ABE9C29FEF3BCB3F_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::B6ED3C557C8CAD85*>* AD018C9081BA1255()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::B6ED3C557C8CAD85*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B2EDEDB0D9D7265A_AD018C9081BA1255_OFFSET))(this);
	}
};
