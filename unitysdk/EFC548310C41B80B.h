#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EFC548310C41B80B_E0751046A20D06F8_OFFSET UNITYSDK_OFFSET(0x3A344A0)
#define EFC548310C41B80B_E888BBCA536F542B_OFFSET UNITYSDK_OFFSET(0x3A346F0)
#define EFC548310C41B80B_EA57DF87F338BC96_OFFSET UNITYSDK_OFFSET(0x3A34450)
#define EFC548310C41B80B_F2479B4535F520D0_OFFSET UNITYSDK_OFFSET(0x3A34670)
#define EFC548310C41B80B__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A34720)
#define EFC548310C41B80B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EFC548310C41B80B_TypeDefinitionIndex = 12948;

class EFC548310C41B80B : public ::System::Object
{
public:
	static ::EFC548310C41B80B** StaticGet_EE999965A1D2099B()
	{
		return (::EFC548310C41B80B**)Il2CppClass::FromTypeDefinitionIndex(EFC548310C41B80B_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFC548310C41B80B__CCTOR_OFFSET))();
	}

	::System::Void E888BBCA536F542B(::System::String* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EFC548310C41B80B_E888BBCA536F542B_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFC548310C41B80B__CTOR_OFFSET))(this);
	}

	::System::Void EA57DF87F338BC96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFC548310C41B80B_EA57DF87F338BC96_OFFSET))(this);
	}

	::System::Void E0751046A20D06F8(::System::String* F1DA3CEDFEA65142)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EFC548310C41B80B_E0751046A20D06F8_OFFSET))(this, F1DA3CEDFEA65142);
	}

	::System::Void F2479B4535F520D0(::System::String* F1DA3CEDFEA65142)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EFC548310C41B80B_F2479B4535F520D0_OFFSET))(this, F1DA3CEDFEA65142);
	}
};
