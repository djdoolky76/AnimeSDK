#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/B0F78077FA5F1CBE.h"
#include "unitysdk/System/E24BBB008EAA7CEF.h"
#include "unitysdk/System/Object.h"

class E98AF858C32293BC;
namespace System { class Exception; }
namespace System { class Type; }

#define EE6A4C49F4D20B82_BD9CD726F874B523_OFFSET UNITYSDK_OFFSET(0x3BE9240)
#define EE6A4C49F4D20B82_E311A270C9BA5B78_OFFSET UNITYSDK_OFFSET(0x3BE93E0)
#define EE6A4C49F4D20B82_F2A09AACD4FBC6DD_OFFSET UNITYSDK_OFFSET(0x3BE91D0)
#define EE6A4C49F4D20B82__CCTOR_OFFSET UNITYSDK_OFFSET(0x3BE9400)
#define EE6A4C49F4D20B82__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F26BB0)
#define EE6A4C49F4D20B82__CTOR_OFFSET UNITYSDK_OFFSET(0x3BE9580)

inline static constexpr unsigned int EE6A4C49F4D20B82_TypeDefinitionIndex = 11322;

class EE6A4C49F4D20B82 : public ::System::Object
{
public:
	static ::EE6A4C49F4D20B82** StaticGet_E97B0BAC12C491A7()
	{
		return (::EE6A4C49F4D20B82**)Il2CppClass::FromTypeDefinitionIndex(EE6A4C49F4D20B82_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::EE6A4C49F4D20B82** StaticGet_A6AA1B20A30F5B29()
	{
		return (::EE6A4C49F4D20B82**)Il2CppClass::FromTypeDefinitionIndex(EE6A4C49F4D20B82_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::EE6A4C49F4D20B82** StaticGet_B195AD0566760E93()
	{
		return (::EE6A4C49F4D20B82**)Il2CppClass::FromTypeDefinitionIndex(EE6A4C49F4D20B82_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::EE6A4C49F4D20B82** StaticGet_B8DE7A4577A10E7C()
	{
		return (::EE6A4C49F4D20B82**)Il2CppClass::FromTypeDefinitionIndex(EE6A4C49F4D20B82_TypeDefinitionIndex)->GetStaticField(0x18);
	}
	static ::EE6A4C49F4D20B82** StaticGet_A3BC6D16CCE4A206()
	{
		return (::EE6A4C49F4D20B82**)Il2CppClass::FromTypeDefinitionIndex(EE6A4C49F4D20B82_TypeDefinitionIndex)->GetStaticField(0x20);
	}
	::System::E24BBB008EAA7CEF EA1E145B43BBA796; // 0x10
	::System::Byte _padding0[0x4];
	::E98AF858C32293BC* A8ADB352E48012CE; // 0x18

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EE6A4C49F4D20B82__CCTOR_OFFSET))();
	}

	static ::EE6A4C49F4D20B82* BD9CD726F874B523(::System::Threading::B0F78077FA5F1CBE A84D57260767D5BD, ::System::Boolean A8583A3A76C00DE0)
	{
		return ((::EE6A4C49F4D20B82*(*)(::System::Threading::B0F78077FA5F1CBE, ::System::Boolean))((::PBYTE)hIl2Cpp + EE6A4C49F4D20B82_BD9CD726F874B523_OFFSET))(A84D57260767D5BD, A8583A3A76C00DE0);
	}

	static ::System::Object* F2A09AACD4FBC6DD(::System::Type* A288CB28FC2A6DA3)
	{
		return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + EE6A4C49F4D20B82_F2A09AACD4FBC6DD_OFFSET))(A288CB28FC2A6DA3);
	}

	::System::Void E311A270C9BA5B78()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EE6A4C49F4D20B82_E311A270C9BA5B78_OFFSET))(this);
	}

	::System::Void _ctor(::System::Threading::B0F78077FA5F1CBE A84D57260767D5BD, ::System::Exception* E2B6D81F69EA0D9B)
	{
		return ((::System::Void(*)(::PVOID, ::System::Threading::B0F78077FA5F1CBE, ::System::Exception*))((::PBYTE)hIl2Cpp + EE6A4C49F4D20B82__CTOR_OFFSET))(this, A84D57260767D5BD, E2B6D81F69EA0D9B);
	}

	::System::Void _ctor_1(::System::E24BBB008EAA7CEF E5EB06E4FD2C32F7)
	{
		return ((::System::Void(*)(::PVOID, ::System::E24BBB008EAA7CEF))((::PBYTE)hIl2Cpp + EE6A4C49F4D20B82__CTOR_1_OFFSET))(this, E5EB06E4FD2C32F7);
	}
};
