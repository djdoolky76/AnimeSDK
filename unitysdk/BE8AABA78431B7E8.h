#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F5332973C906716E;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BE8AABA78431B7E8_B27A4B7E0C34D606_OFFSET UNITYSDK_OFFSET(0x2A1E670)
#define BE8AABA78431B7E8_BDD3E08703C1C2A0_OFFSET UNITYSDK_OFFSET(0x2A1E750)
#define BE8AABA78431B7E8_E0A777083772FC9E_OFFSET UNITYSDK_OFFSET(0x2A1E310)
#define BE8AABA78431B7E8_E6E041E2E98E834C_OFFSET UNITYSDK_OFFSET(0x2A1E9E0)
#define BE8AABA78431B7E8_FAB87DB2C06CAADC_OFFSET UNITYSDK_OFFSET(0x2A1E220)
#define BE8AABA78431B7E8_FC1D81F03297D8E8_OFFSET UNITYSDK_OFFSET(0x2A1E5B0)
#define BE8AABA78431B7E8_FD36230F68490094_OFFSET UNITYSDK_OFFSET(0x2A1FF40)
#define BE8AABA78431B7E8_FF7E73AF936D215D_OFFSET UNITYSDK_OFFSET(0x2A1FD90)
#define BE8AABA78431B7E8__CCTOR_OFFSET UNITYSDK_OFFSET(0x2A1FFF0)
#define BE8AABA78431B7E8__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BE8AABA78431B7E8_TypeDefinitionIndex = 15973;

class BE8AABA78431B7E8 : public ::System::Object
{
public:
	static ::F5332973C906716E** StaticGet_E457BD937148AEA2()
	{
		return (::F5332973C906716E**)Il2CppClass::FromTypeDefinitionIndex(BE8AABA78431B7E8_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::BE8AABA78431B7E8** StaticGet_EE999965A1D2099B()
	{
		return (::BE8AABA78431B7E8**)Il2CppClass::FromTypeDefinitionIndex(BE8AABA78431B7E8_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	::System::String* FD6DCC24386F5129; // 0x10
	::System::String* B215C673AF54A103; // 0x18
	::System::String* ABFA68B21C098D6B; // 0x20
	::System::String* B597959C724C2E46; // 0x28
	::System::String* F57B6E096ED38B8B; // 0x30

	::System::String* E0A777083772FC9E()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BE8AABA78431B7E8_E0A777083772FC9E_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BE8AABA78431B7E8__CTOR_OFFSET))(this);
	}

	::System::Boolean FAB87DB2C06CAADC(::System::String* B0CC96C669688492, ::System::String* B81E65ABBF61262D)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + BE8AABA78431B7E8_FAB87DB2C06CAADC_OFFSET))(this, B0CC96C669688492, B81E65ABBF61262D);
	}

	::System::String* FC1D81F03297D8E8(::System::String* A5C299C395D3E1B2)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BE8AABA78431B7E8_FC1D81F03297D8E8_OFFSET))(this, A5C299C395D3E1B2);
	}

	::System::Void BDD3E08703C1C2A0(::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + BE8AABA78431B7E8_BDD3E08703C1C2A0_OFFSET))(this, E04D2BE64FCE9814);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BE8AABA78431B7E8__CCTOR_OFFSET))();
	}

	::System::Void E6E041E2E98E834C(::System::Collections::Generic::List_1<::System::String*>* F3311B8F33675CD4, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + BE8AABA78431B7E8_E6E041E2E98E834C_OFFSET))(this, F3311B8F33675CD4, E04D2BE64FCE9814);
	}

	::System::Void FD36230F68490094(::System::String* A5C299C395D3E1B2, ::System::String* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + BE8AABA78431B7E8_FD36230F68490094_OFFSET))(this, A5C299C395D3E1B2, E937D4885DAA1AE8);
	}

	::System::String* B27A4B7E0C34D606(::System::Int32 F92B63DEB63D2101)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BE8AABA78431B7E8_B27A4B7E0C34D606_OFFSET))(this, F92B63DEB63D2101);
	}

	::System::Void FF7E73AF936D215D(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + BE8AABA78431B7E8_FF7E73AF936D215D_OFFSET))(this, E04D2BE64FCE9814);
	}
};
