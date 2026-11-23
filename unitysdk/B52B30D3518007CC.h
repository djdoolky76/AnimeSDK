#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Config/WwiseBank.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class FA9B773E8C9B97E9;

#define B52B30D3518007CC_A4320094E04909DA_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define B52B30D3518007CC_A49E0B44CFB2B9FB_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define B52B30D3518007CC_B65937216502321B_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define B52B30D3518007CC_FA705040341D9846_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define B52B30D3518007CC_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x24D3EC0)
#define B52B30D3518007CC__CTOR_OFFSET UNITYSDK_OFFSET(0x24D4100)

inline static constexpr unsigned int B52B30D3518007CC_TypeDefinitionIndex = 4882;

class B52B30D3518007CC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* B13E934927A87DD7; // 0x10
	::FA9B773E8C9B97E9<::ABC::Config::WwiseBank>* E40A6F54D72D2897; // 0x18

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* B65937216502321B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B52B30D3518007CC_B65937216502321B_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B52B30D3518007CC__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B52B30D3518007CC*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B52B30D3518007CC*&))((::PBYTE)hIl2Cpp + B52B30D3518007CC_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void A49E0B44CFB2B9FB(::FA9B773E8C9B97E9<::ABC::Config::WwiseBank>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::FA9B773E8C9B97E9<::ABC::Config::WwiseBank>*))((::PBYTE)hIl2Cpp + B52B30D3518007CC_A49E0B44CFB2B9FB_OFFSET))(this, E937D4885DAA1AE8);
	}

	::FA9B773E8C9B97E9<::ABC::Config::WwiseBank>* FA705040341D9846()
	{
		return ((::FA9B773E8C9B97E9<::ABC::Config::WwiseBank>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B52B30D3518007CC_FA705040341D9846_OFFSET))(this);
	}

	::System::Void A4320094E04909DA(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + B52B30D3518007CC_A4320094E04909DA_OFFSET))(this, E937D4885DAA1AE8);
	}
};
