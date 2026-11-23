#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A418C49FA6A8C1F7/B514C245E2BF0966.h"
#include "unitysdk/BF47C5BD32803E8C/F33467DC8925CC41.h"
#include "unitysdk/BF47C5BD32803E8C/FC56AD947303CFD5.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class FCECB52A00C1344E;

#define AC79CAF998090BFF_ABAB31265E604501_OFFSET UNITYSDK_OFFSET(0x423E2F0)
#define AC79CAF998090BFF_EFEE77937B4A0F82_OFFSET UNITYSDK_OFFSET(0x423E370)
#define AC79CAF998090BFF_F28DB5CFE6B7ACBA_OFFSET UNITYSDK_OFFSET(0x423E4D0)
#define AC79CAF998090BFF__CCTOR_OFFSET UNITYSDK_OFFSET(0x423F4D0)

inline static constexpr unsigned int AC79CAF998090BFF_TypeDefinitionIndex = 13076;

class AC79CAF998090BFF : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::BF47C5BD32803E8C::FC56AD947303CFD5>** StaticGet_E44E379DA1681549()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::BF47C5BD32803E8C::FC56AD947303CFD5>**)Il2CppClass::FromTypeDefinitionIndex(AC79CAF998090BFF_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Collections::Generic::Dictionary_2<::BF47C5BD32803E8C::FC56AD947303CFD5, ::System::String*>** StaticGet_BF5D73E2FDC7F799()
	{
		return (::System::Collections::Generic::Dictionary_2<::BF47C5BD32803E8C::FC56AD947303CFD5, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AC79CAF998090BFF_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::FCECB52A00C1344E<::BF47C5BD32803E8C::FC56AD947303CFD5>** StaticGet_FF4B0F0E56B8EA0D()
	{
		return (::FCECB52A00C1344E<::BF47C5BD32803E8C::FC56AD947303CFD5>**)Il2CppClass::FromTypeDefinitionIndex(AC79CAF998090BFF_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::System::Collections::Generic::Dictionary_2<::BF47C5BD32803E8C::FC56AD947303CFD5, ::A418C49FA6A8C1F7::B514C245E2BF0966>** StaticGet_A5F897FF233D7696()
	{
		return (::System::Collections::Generic::Dictionary_2<::BF47C5BD32803E8C::FC56AD947303CFD5, ::A418C49FA6A8C1F7::B514C245E2BF0966>**)Il2CppClass::FromTypeDefinitionIndex(AC79CAF998090BFF_TypeDefinitionIndex)->GetStaticField(0x18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AC79CAF998090BFF__CCTOR_OFFSET))();
	}

	static ::System::Boolean EFEE77937B4A0F82(::BF47C5BD32803E8C::FC56AD947303CFD5 A612F5A56697A412, ::BF47C5BD32803E8C::FC56AD947303CFD5 F5AEFA05C9F71B82)
	{
		return ((::System::Boolean(*)(::BF47C5BD32803E8C::FC56AD947303CFD5, ::BF47C5BD32803E8C::FC56AD947303CFD5))((::PBYTE)hIl2Cpp + AC79CAF998090BFF_EFEE77937B4A0F82_OFFSET))(A612F5A56697A412, F5AEFA05C9F71B82);
	}

	static ::System::Boolean ABAB31265E604501(::BF47C5BD32803E8C::FC56AD947303CFD5 F5AEFA05C9F71B82)
	{
		return ((::System::Boolean(*)(::BF47C5BD32803E8C::FC56AD947303CFD5))((::PBYTE)hIl2Cpp + AC79CAF998090BFF_ABAB31265E604501_OFFSET))(F5AEFA05C9F71B82);
	}

	static ::System::Boolean F28DB5CFE6B7ACBA(::BF47C5BD32803E8C::F33467DC8925CC41 F5ED866017D4F5C9, ::System::String* E937D4885DAA1AE8, ::System::Int32& E2DDBF807B5E3542)
	{
		return ((::System::Boolean(*)(::BF47C5BD32803E8C::F33467DC8925CC41, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + AC79CAF998090BFF_F28DB5CFE6B7ACBA_OFFSET))(F5ED866017D4F5C9, E937D4885DAA1AE8, E2DDBF807B5E3542);
	}
};
