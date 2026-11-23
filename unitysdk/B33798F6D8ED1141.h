#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class E47B7F726403288C;
class E5D19C6EEA48EE3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B33798F6D8ED1141_A7F4CDA6F59B4E88_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define B33798F6D8ED1141_E45DE17CEA8CF828_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define B33798F6D8ED1141_EA1FCF4A2DD24379_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define B33798F6D8ED1141_F11B6A85CE0B95E8_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define B33798F6D8ED1141_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x24F1E40)
#define B33798F6D8ED1141__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B33798F6D8ED1141_TypeDefinitionIndex = 5158;

class B33798F6D8ED1141 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::E47B7F726403288C*>* E44C82CE1D3C4C7B; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::E5D19C6EEA48EE3F*>* F691D7DA3DF4685D; // 0x18

	::System::Collections::Generic::Dictionary_2<::System::String*, ::E5D19C6EEA48EE3F*>* EA1FCF4A2DD24379()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::E5D19C6EEA48EE3F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B33798F6D8ED1141_EA1FCF4A2DD24379_OFFSET))(this);
	}

	::System::Void F11B6A85CE0B95E8(::System::Collections::Generic::Dictionary_2<::System::String*, ::E5D19C6EEA48EE3F*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::E5D19C6EEA48EE3F*>*))((::PBYTE)hIl2Cpp + B33798F6D8ED1141_F11B6A85CE0B95E8_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void A7F4CDA6F59B4E88(::System::Collections::Generic::Dictionary_2<::System::String*, ::E47B7F726403288C*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::E47B7F726403288C*>*))((::PBYTE)hIl2Cpp + B33798F6D8ED1141_A7F4CDA6F59B4E88_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B33798F6D8ED1141__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B33798F6D8ED1141*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B33798F6D8ED1141*&))((::PBYTE)hIl2Cpp + B33798F6D8ED1141_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::E47B7F726403288C*>* E45DE17CEA8CF828()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::E47B7F726403288C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B33798F6D8ED1141_E45DE17CEA8CF828_OFFSET))(this);
	}
};
