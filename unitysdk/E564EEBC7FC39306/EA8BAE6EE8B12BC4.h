#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A418C49FA6A8C1F7/B9A8F16A870DE44E.h"

namespace System { class String; }

#define E564EEBC7FC39306_EA8BAE6EE8B12BC4_AE99FB5963D478D7_OFFSET UNITYSDK_OFFSET(0x30FAAB0)
#define E564EEBC7FC39306_EA8BAE6EE8B12BC4__CCTOR_OFFSET UNITYSDK_OFFSET(0x433D950)
#define E564EEBC7FC39306_EA8BAE6EE8B12BC4__CTOR_OFFSET UNITYSDK_OFFSET(0x433DA40)

namespace E564EEBC7FC39306
{
	inline static constexpr unsigned int EA8BAE6EE8B12BC4_TypeDefinitionIndex = 13576;

	class EA8BAE6EE8B12BC4 : public ::A418C49FA6A8C1F7::B9A8F16A870DE44E
	{
	public:
		static ::System::String** StaticGet_E01E49E0EDEFB827()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(EA8BAE6EE8B12BC4_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::String** StaticGet_AF6D14B37C1C506B()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(EA8BAE6EE8B12BC4_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		::A418C49FA6A8C1F7::B9A8F16A870DE44E* F555937847E107D0; // 0x3D8

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E564EEBC7FC39306_EA8BAE6EE8B12BC4__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E564EEBC7FC39306_EA8BAE6EE8B12BC4__CTOR_OFFSET))(this);
		}

		::A418C49FA6A8C1F7::B9A8F16A870DE44E* AE99FB5963D478D7()
		{
			return ((::A418C49FA6A8C1F7::B9A8F16A870DE44E*(*)(::PVOID))((::PBYTE)hIl2Cpp + E564EEBC7FC39306_EA8BAE6EE8B12BC4_AE99FB5963D478D7_OFFSET))(this);
		}
	};
}
