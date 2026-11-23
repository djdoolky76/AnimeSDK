#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class B8BEC2FAC7C5C948;
class F1D4BEAD7ED87D3B;
namespace System { class String; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_AE7F5EAD3100E7A4; }

#define F28DBBA4179BDC6A_A792763ECDA9ACF0_1_OFFSET UNITYSDK_OFFSET(0x43F36F0)
#define F28DBBA4179BDC6A_A792763ECDA9ACF0_OFFSET UNITYSDK_OFFSET(0x43F3900)
#define F28DBBA4179BDC6A_EA8E10F18B76AD2E_OFFSET UNITYSDK_OFFSET(0x43F3AF0)
#define F28DBBA4179BDC6A_FD792C24FE49920B_OFFSET UNITYSDK_OFFSET(0x43F3BB0)
#define F28DBBA4179BDC6A__CCTOR_OFFSET UNITYSDK_OFFSET(0x43F3F40)
#define F28DBBA4179BDC6A__CTOR_OFFSET UNITYSDK_OFFSET(0x43F3FD0)

inline static constexpr unsigned int F28DBBA4179BDC6A_TypeDefinitionIndex = 19440;

class F28DBBA4179BDC6A : public ::System::Object
{
public:
	static ::B8BEC2FAC7C5C948** StaticGet_ADD700A5C1B3AC95()
	{
		return (::B8BEC2FAC7C5C948**)Il2CppClass::FromTypeDefinitionIndex(F28DBBA4179BDC6A_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::F1D4BEAD7ED87D3B* EF28425FE7CD7C67; // 0x10
	::ZenFulcrum::EmbeddedBrowser::BrowserNative_AE7F5EAD3100E7A4* F04B0AB19820A7CA; // 0x18
	::System::String* F79B4D487F303AB2; // 0x20
	::System::String* E937D4885DAA1AE8; // 0x28
	::System::String* FD0ADA5A8EB95003; // 0x30
	::System::String* EFF983A80A48BB2A; // 0x38
	::System::DateTime FC96628A5D1BA9E0; // 0x40
	::System::DateTime FBC56AACABF288CC; // 0x48
	::System::Nullable_1<::System::DateTime> ED33884EE685719C; // 0x50
	::System::Byte _padding0[0x8];
	::System::Boolean EB1905A1FEBBCAF6; // 0x60
	::System::Boolean B767B6FBA72CDE89; // 0x61

	::System::Void FD792C24FE49920B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F28DBBA4179BDC6A_FD792C24FE49920B_OFFSET))(this);
	}

	static ::System::Void A792763ECDA9ACF0(::ZenFulcrum::EmbeddedBrowser::BrowserNative_AE7F5EAD3100E7A4* BADCD2C933ABE188, ::F28DBBA4179BDC6A* B3E3A8495E17DE76)
	{
		return ((::System::Void(*)(::ZenFulcrum::EmbeddedBrowser::BrowserNative_AE7F5EAD3100E7A4*, ::F28DBBA4179BDC6A*))((::PBYTE)hIl2Cpp + F28DBBA4179BDC6A_A792763ECDA9ACF0_OFFSET))(BADCD2C933ABE188, B3E3A8495E17DE76);
	}

	static ::System::Void A792763ECDA9ACF0_1(::F28DBBA4179BDC6A* BADCD2C933ABE188, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_AE7F5EAD3100E7A4* B3E3A8495E17DE76)
	{
		return ((::System::Void(*)(::F28DBBA4179BDC6A*, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_AE7F5EAD3100E7A4*))((::PBYTE)hIl2Cpp + F28DBBA4179BDC6A_A792763ECDA9ACF0_1_OFFSET))(BADCD2C933ABE188, B3E3A8495E17DE76);
	}

	::System::Void _ctor(::F1D4BEAD7ED87D3B* EF28425FE7CD7C67)
	{
		return ((::System::Void(*)(::PVOID, ::F1D4BEAD7ED87D3B*))((::PBYTE)hIl2Cpp + F28DBBA4179BDC6A__CTOR_OFFSET))(this, EF28425FE7CD7C67);
	}

	::System::Void EA8E10F18B76AD2E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F28DBBA4179BDC6A_EA8E10F18B76AD2E_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F28DBBA4179BDC6A__CCTOR_OFFSET))();
	}
};
