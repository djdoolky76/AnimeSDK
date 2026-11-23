#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EBFF92DDDDB4A767_A3CD73C43CE7EC11_OFFSET UNITYSDK_OFFSET(0x2064C00)
#define EBFF92DDDDB4A767_A84BFB6C97CFDFDE_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define EBFF92DDDDB4A767_B286E4F015A972D1_OFFSET UNITYSDK_OFFSET(0x38F5D10)
#define EBFF92DDDDB4A767_B2CAC1EED94D6026_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define EBFF92DDDDB4A767_B6C17465115B89B2_OFFSET UNITYSDK_OFFSET(0x184BDF0)
#define EBFF92DDDDB4A767_E23D17B81B6CB38B_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define EBFF92DDDDB4A767_E5D3433A10A872D3_OFFSET UNITYSDK_OFFSET(0x19FB3C0)
#define EBFF92DDDDB4A767_E6303A0DC9FFE4F8_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define EBFF92DDDDB4A767_EA62DA8ACB87F364_OFFSET UNITYSDK_OFFSET(0x16BD3B0)
#define EBFF92DDDDB4A767_FC97B833607AA590_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define EBFF92DDDDB4A767__CTOR_OFFSET UNITYSDK_OFFSET(0x38F6060)

inline static constexpr unsigned int EBFF92DDDDB4A767_TypeDefinitionIndex = 11765;

struct alignas(8) EBFF92DDDDB4A767
{
	::System::String* F98175EE50F5DEAE; // 0x10
	::System::String* AB1BF11AE6703287; // 0x18
	::System::String* A4B2C1EF1D52DCEA; // 0x20
	::System::String* B15D44BF169AB834; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* EF5CD5B536526691; // 0x30

	::System::String* FC97B833607AA590()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFF92DDDDB4A767_FC97B833607AA590_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* B286E4F015A972D1(::System::String* B38A9B2983CE63FE)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EBFF92DDDDB4A767_B286E4F015A972D1_OFFSET))(this, B38A9B2983CE63FE);
	}

	::System::Void E23D17B81B6CB38B(::System::String* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EBFF92DDDDB4A767_E23D17B81B6CB38B_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor(::System::String* BFE81B04DA8D7ED3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EBFF92DDDDB4A767__CTOR_OFFSET))(this, BFE81B04DA8D7ED3);
	}

	::System::Void A84BFB6C97CFDFDE(::System::String* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EBFF92DDDDB4A767_A84BFB6C97CFDFDE_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void A3CD73C43CE7EC11(::System::String* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EBFF92DDDDB4A767_A3CD73C43CE7EC11_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void EA62DA8ACB87F364(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + EBFF92DDDDB4A767_EA62DA8ACB87F364_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* B2CAC1EED94D6026()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFF92DDDDB4A767_B2CAC1EED94D6026_OFFSET))(this);
	}

	::System::Void E5D3433A10A872D3(::System::String* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EBFF92DDDDB4A767_E5D3433A10A872D3_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::String* B6C17465115B89B2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFF92DDDDB4A767_B6C17465115B89B2_OFFSET))(this);
	}

	::System::String* E6303A0DC9FFE4F8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFF92DDDDB4A767_E6303A0DC9FFE4F8_OFFSET))(this);
	}
};
