#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FAE12D83ADC9E423;
namespace System { template <typename T> class Func_1; }

#define B3FD10C3F79810C8_EB0CE45572A746EC_B21786CBF4D11A9E_OFFSET UNITYSDK_OFFSET(0x3ECDD60)
#define B3FD10C3F79810C8_EB0CE45572A746EC__CCTOR_OFFSET UNITYSDK_OFFSET(0x3ECDED0)
#define B3FD10C3F79810C8_EB0CE45572A746EC__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B3FD10C3F79810C8_EB0CE45572A746EC_TypeDefinitionIndex = 15129;

class B3FD10C3F79810C8_EB0CE45572A746EC : public ::System::Object
{
public:
	static ::B3FD10C3F79810C8_EB0CE45572A746EC** StaticGet_FB0A7EB463FA294A()
	{
		return (::B3FD10C3F79810C8_EB0CE45572A746EC**)Il2CppClass::FromTypeDefinitionIndex(B3FD10C3F79810C8_EB0CE45572A746EC_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_1<::FAE12D83ADC9E423*>** StaticGet_FF5569C2F83D4795()
	{
		return (::System::Func_1<::FAE12D83ADC9E423*>**)Il2CppClass::FromTypeDefinitionIndex(B3FD10C3F79810C8_EB0CE45572A746EC_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B3FD10C3F79810C8_EB0CE45572A746EC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B3FD10C3F79810C8_EB0CE45572A746EC__CTOR_OFFSET))(this);
	}

	::FAE12D83ADC9E423* B21786CBF4D11A9E()
	{
		return ((::FAE12D83ADC9E423*(*)(::PVOID))((::PBYTE)hIl2Cpp + B3FD10C3F79810C8_EB0CE45572A746EC_B21786CBF4D11A9E_OFFSET))(this);
	}
};
