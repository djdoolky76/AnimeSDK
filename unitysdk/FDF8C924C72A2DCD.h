#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }

#define FDF8C924C72A2DCD_A81F5BC5B0547A8F_OFFSET UNITYSDK_OFFSET(0x3ABF870)
#define FDF8C924C72A2DCD_ADA763FD091F91CC_OFFSET UNITYSDK_OFFSET(0x3ABE600)
#define FDF8C924C72A2DCD_E84EEA677217F9F4_OFFSET UNITYSDK_OFFSET(0x3ABE810)
#define FDF8C924C72A2DCD_EA037AAECA9DE5AB_OFFSET UNITYSDK_OFFSET(0x3ABF4B0)
#define FDF8C924C72A2DCD_EBEA0AA3650405EE_OFFSET UNITYSDK_OFFSET(0x3ABF160)
#define FDF8C924C72A2DCD_FEEFCCA03AD1827A_OFFSET UNITYSDK_OFFSET(0x3ABF640)
#define FDF8C924C72A2DCD__CCTOR_OFFSET UNITYSDK_OFFSET(0x3ABF8F0)
#define FDF8C924C72A2DCD__CTOR_OFFSET UNITYSDK_OFFSET(0x276AAD0)

inline static constexpr unsigned int FDF8C924C72A2DCD_TypeDefinitionIndex = 12108;

class FDF8C924C72A2DCD : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_EEDEF00C83B15615()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FDF8C924C72A2DCD_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::FDF8C924C72A2DCD** StaticGet_EE999965A1D2099B()
	{
		return (::FDF8C924C72A2DCD**)Il2CppClass::FromTypeDefinitionIndex(FDF8C924C72A2DCD_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	::System::Boolean AFFCEF8D852854D5; // 0x10

	::System::String* FEEFCCA03AD1827A()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDF8C924C72A2DCD_FEEFCCA03AD1827A_OFFSET))(this);
	}

	::System::String* E84EEA677217F9F4(::System::String* B960AC235824C6C8, ::System::String* F1BF0FE85E9DD584)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FDF8C924C72A2DCD_E84EEA677217F9F4_OFFSET))(this, B960AC235824C6C8, F1BF0FE85E9DD584);
	}

	::System::Void A81F5BC5B0547A8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDF8C924C72A2DCD_A81F5BC5B0547A8F_OFFSET))(this);
	}

	::System::Void EBEA0AA3650405EE(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + FDF8C924C72A2DCD_EBEA0AA3650405EE_OFFSET))(this, A6CAE7339066B0FB);
	}

	::System::Void ADA763FD091F91CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDF8C924C72A2DCD_ADA763FD091F91CC_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDF8C924C72A2DCD__CTOR_OFFSET))(this);
	}

	::System::Void EA037AAECA9DE5AB(::System::String* F1BF0FE85E9DD584)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FDF8C924C72A2DCD_EA037AAECA9DE5AB_OFFSET))(this, F1BF0FE85E9DD584);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDF8C924C72A2DCD__CCTOR_OFFSET))();
	}
};
