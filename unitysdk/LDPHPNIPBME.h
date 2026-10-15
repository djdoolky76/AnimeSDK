#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class LDPHPNIPBME;

#define LDPHPNIPBME_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB644D20)
#define LDPHPNIPBME_CTOR_OFFSET UNITYSDK_OFFSET(0xB644DD0)
#define LDPHPNIPBME_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0xB644CC0)
#define LDPHPNIPBME_GET_DESC_OFFSET UNITYSDK_OFFSET(0xB644CA0)
#define LDPHPNIPBME_GET_ISPERCENTAGE_OFFSET UNITYSDK_OFFSET(0xB644D00)
#define LDPHPNIPBME_GET_ISSHOWCURRENCY_OFFSET UNITYSDK_OFFSET(0xB644CE0)
#define LDPHPNIPBME_SET_AMOUNT_OFFSET UNITYSDK_OFFSET(0xB644CD0)
#define LDPHPNIPBME_SET_DESC_OFFSET UNITYSDK_OFFSET(0xB644CB0)
#define LDPHPNIPBME_SET_ISPERCENTAGE_OFFSET UNITYSDK_OFFSET(0xB644D10)
#define LDPHPNIPBME_SET_ISSHOWCURRENCY_OFFSET UNITYSDK_OFFSET(0xB644CF0)

	class LDPHPNIPBME : public ::System::Object
	{
	public:
		::System::UInt32 _Amount_k__BackingField; // 0x10
		::System::Boolean _IsShowCurrency_k__BackingField; // 0x14
		::System::Boolean _IsPercentage_k__BackingField; // 0x15
		::System::Byte _padding0[0x2];
		::RPG::Client::TextID _Desc_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::Client::TextID a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LDPHPNIPBME_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPHPNIPBME_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + LDPHPNIPBME_SET_DESC_OFFSET))(this, a1);
		}

		::System::UInt32 get_Amount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPHPNIPBME_GET_AMOUNT_OFFSET))(this);
		}

		::System::Void set_Amount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDPHPNIPBME_SET_AMOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShowCurrency()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPHPNIPBME_GET_ISSHOWCURRENCY_OFFSET))(this);
		}

		::System::Void set_IsShowCurrency(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LDPHPNIPBME_SET_ISSHOWCURRENCY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPercentage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPHPNIPBME_GET_ISPERCENTAGE_OFFSET))(this);
		}

		::System::Void set_IsPercentage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LDPHPNIPBME_SET_ISPERCENTAGE_OFFSET))(this, a1);
		}

		static ::LDPHPNIPBME* BPLPBPMEODA(::RPG::Client::TextID a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::LDPHPNIPBME*(*)(::RPG::Client::TextID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LDPHPNIPBME_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

	};
