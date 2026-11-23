#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A418C49FA6A8C1F7/E79E5F014F90F7AF.h"

namespace System { class String; }

#define A418C49FA6A8C1F7_E2B40C5CB19CE5FC_A382617DCBBFCEF3_OFFSET UNITYSDK_OFFSET(0x4344D80)
#define A418C49FA6A8C1F7_E2B40C5CB19CE5FC_E14EE53581D2B9CE_OFFSET UNITYSDK_OFFSET(0x4344E00)
#define A418C49FA6A8C1F7_E2B40C5CB19CE5FC__CCTOR_OFFSET UNITYSDK_OFFSET(0x4344FE0)
#define A418C49FA6A8C1F7_E2B40C5CB19CE5FC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x4345220)
#define A418C49FA6A8C1F7_E2B40C5CB19CE5FC__CTOR_OFFSET UNITYSDK_OFFSET(0x4345330)

namespace A418C49FA6A8C1F7
{
	inline static constexpr unsigned int E2B40C5CB19CE5FC_TypeDefinitionIndex = 13517;

	class E2B40C5CB19CE5FC : public ::A418C49FA6A8C1F7::E79E5F014F90F7AF
	{
	public:
		static ::System::String** StaticGet_E01E49E0EDEFB827()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(E2B40C5CB19CE5FC_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::String** StaticGet_ACB80A9F3534E9E2()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(E2B40C5CB19CE5FC_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::String** StaticGet_E8B9DE1F82FF1EDC()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(E2B40C5CB19CE5FC_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::System::String** StaticGet_EE000DBC5A60DD17()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(E2B40C5CB19CE5FC_TypeDefinitionIndex)->GetStaticField(0x18);
		}
		static ::System::String** StaticGet_AED2233A3B016352()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(E2B40C5CB19CE5FC_TypeDefinitionIndex)->GetStaticField(0x20);
		}
		static ::System::String** StaticGet_F40A2F6D08131216()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(E2B40C5CB19CE5FC_TypeDefinitionIndex)->GetStaticField(0x28);
		}
		static ::System::String** StaticGet_B8D5917F2A1237A9()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(E2B40C5CB19CE5FC_TypeDefinitionIndex)->GetStaticField(0x30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_E2B40C5CB19CE5FC__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_E2B40C5CB19CE5FC__CTOR_OFFSET))(this);
		}

		::System::Void E14EE53581D2B9CE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_E2B40C5CB19CE5FC_E14EE53581D2B9CE_OFFSET))(this);
		}

		::System::Void A382617DCBBFCEF3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_E2B40C5CB19CE5FC_A382617DCBBFCEF3_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* F0C60DB62AA3F5E0)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_E2B40C5CB19CE5FC__CTOR_1_OFFSET))(this, F0C60DB62AA3F5E0);
		}
	};
}
