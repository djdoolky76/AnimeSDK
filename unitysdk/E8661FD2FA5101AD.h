#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E0204F40C9742352.h"
#include "unitysdk/System/Threading/F0BF3AC54BEC2EEF.h"

namespace System { class Object; }
namespace System::Threading { class E3E5DF04DCFE6819; }

#define E8661FD2FA5101AD_A8E89459E97F1E1D_OFFSET UNITYSDK_OFFSET(0x1F2A920)
#define E8661FD2FA5101AD_AE445CECF8B0E532_OFFSET UNITYSDK_OFFSET(0x3F2FD40)
#define E8661FD2FA5101AD_BABAB79F4BE81BAD_OFFSET UNITYSDK_OFFSET(0x3F2FCF0)
#define E8661FD2FA5101AD_E943356A50E98733_OFFSET UNITYSDK_OFFSET(0x32B2AE0)
#define E8661FD2FA5101AD_F2C4E97AE7BC061C_OFFSET UNITYSDK_OFFSET(0x3F301E0)
#define E8661FD2FA5101AD_FAD49BA0EDC239F6_OFFSET UNITYSDK_OFFSET(0x3F2FCA0)
#define E8661FD2FA5101AD__CCTOR_OFFSET UNITYSDK_OFFSET(0x3F30570)
#define E8661FD2FA5101AD__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E8661FD2FA5101AD_TypeDefinitionIndex = 19871;

class E8661FD2FA5101AD : public ::System::Threading::F0BF3AC54BEC2EEF
{
public:
	static ::E0204F40C9742352* StaticGet_B2B41E03D7EF1218()
	{
		return (::E0204F40C9742352*)Il2CppClass::FromTypeDefinitionIndex(E8661FD2FA5101AD_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Boolean* StaticGet_BB0BD63821AA46A6()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(E8661FD2FA5101AD_TypeDefinitionIndex)->GetStaticField(0x4);
	}
	static ::System::Int32* StaticGet_AD7A03BCEC70B5F1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(E8661FD2FA5101AD_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::Il2CppArray<::System::Object*>** StaticGet_BEEA0DF37894DB66()
	{
		return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(E8661FD2FA5101AD_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::System::Int32* StaticGet_BD7DE0F5249F899A()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(E8661FD2FA5101AD_TypeDefinitionIndex)->GetStaticField(0x18);
	}
	static ::Il2CppArray<::System::Object*>** StaticGet_BE4AD7CD03B40B2F()
	{
		return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(E8661FD2FA5101AD_TypeDefinitionIndex)->GetStaticField(0x20);
	}
	static ::System::Int32* StaticGet_E81E222FD2013A1D()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(E8661FD2FA5101AD_TypeDefinitionIndex)->GetStaticField(0x28);
	}

	::System::Threading::F0BF3AC54BEC2EEF* A8E89459E97F1E1D()
	{
		return ((::System::Threading::F0BF3AC54BEC2EEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + E8661FD2FA5101AD_A8E89459E97F1E1D_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E8661FD2FA5101AD__CTOR_OFFSET))(this);
	}

	static ::System::Void F2C4E97AE7BC061C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E8661FD2FA5101AD_F2C4E97AE7BC061C_OFFSET))();
	}

	::System::Void AE445CECF8B0E532(::System::Threading::E3E5DF04DCFE6819* E9CAEB929DE1EB8F, ::System::Object* E5EB06E4FD2C32F7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Threading::E3E5DF04DCFE6819*, ::System::Object*))((::PBYTE)hIl2Cpp + E8661FD2FA5101AD_AE445CECF8B0E532_OFFSET))(this, E9CAEB929DE1EB8F, E5EB06E4FD2C32F7);
	}

	::System::Void FAD49BA0EDC239F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E8661FD2FA5101AD_FAD49BA0EDC239F6_OFFSET))(this);
	}

	::System::Void E943356A50E98733(::System::Threading::E3E5DF04DCFE6819* E9CAEB929DE1EB8F, ::System::Object* E5EB06E4FD2C32F7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Threading::E3E5DF04DCFE6819*, ::System::Object*))((::PBYTE)hIl2Cpp + E8661FD2FA5101AD_E943356A50E98733_OFFSET))(this, E9CAEB929DE1EB8F, E5EB06E4FD2C32F7);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E8661FD2FA5101AD__CCTOR_OFFSET))();
	}

	::System::Void BABAB79F4BE81BAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E8661FD2FA5101AD_BABAB79F4BE81BAD_OFFSET))(this);
	}
};
