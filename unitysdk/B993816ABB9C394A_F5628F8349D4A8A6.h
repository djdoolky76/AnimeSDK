#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EED6B35843181046_BF162B4946CB04B7;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define B993816ABB9C394A_F5628F8349D4A8A6_B64C411A6EDCFE99_OFFSET UNITYSDK_OFFSET(0x38D0100)
#define B993816ABB9C394A_F5628F8349D4A8A6_BFC577464D2D7559_OFFSET UNITYSDK_OFFSET(0x38CFDF0)
#define B993816ABB9C394A_F5628F8349D4A8A6_EFED250B3C111660_OFFSET UNITYSDK_OFFSET(0x38D0240)
#define B993816ABB9C394A_F5628F8349D4A8A6_FDF07B139B84DD8D_OFFSET UNITYSDK_OFFSET(0x38D0160)
#define B993816ABB9C394A_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x38D84D0)
#define B993816ABB9C394A_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B993816ABB9C394A_F5628F8349D4A8A6_TypeDefinitionIndex = 11738;

class B993816ABB9C394A_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::B993816ABB9C394A_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::B993816ABB9C394A_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(B993816ABB9C394A_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::System::String*>** StaticGet_B8997ACD3123474A()
	{
		return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(B993816ABB9C394A_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::EED6B35843181046_BF162B4946CB04B7** StaticGet_F2C54999C1BBBACC()
	{
		return (::EED6B35843181046_BF162B4946CB04B7**)Il2CppClass::FromTypeDefinitionIndex(B993816ABB9C394A_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::System::Action_1<::System::String*>** StaticGet_B94DBC0B6C6E8CBC()
	{
		return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(B993816ABB9C394A_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x18);
	}
	static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet_EA1384BFAE1D85DA()
	{
		return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(B993816ABB9C394A_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B993816ABB9C394A_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B993816ABB9C394A_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void B64C411A6EDCFE99(::System::String* B6018BB9F7294B44)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + B993816ABB9C394A_F5628F8349D4A8A6_B64C411A6EDCFE99_OFFSET))(this, B6018BB9F7294B44);
	}

	::System::Boolean BFC577464D2D7559(::System::String* BB01E686711AA41F)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + B993816ABB9C394A_F5628F8349D4A8A6_BFC577464D2D7559_OFFSET))(this, BB01E686711AA41F);
	}

	::System::Void FDF07B139B84DD8D(::System::String* B6018BB9F7294B44)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + B993816ABB9C394A_F5628F8349D4A8A6_FDF07B139B84DD8D_OFFSET))(this, B6018BB9F7294B44);
	}

	::System::Void EFED250B3C111660(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + B993816ABB9C394A_F5628F8349D4A8A6_EFED250B3C111660_OFFSET))(this, A6CAE7339066B0FB);
	}
};
