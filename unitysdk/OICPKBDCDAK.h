#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class GANHKIDFADF;

#define OICPKBDCDAK_ENOHGJBKFCC_OFFSET UNITYSDK_OFFSET(0x1FF6E630)
#define OICPKBDCDAK_MIMMCMMPCKN_OFFSET UNITYSDK_OFFSET(0x1FF6E560)
#define OICPKBDCDAK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF6E500)

inline static constexpr unsigned int OICPKBDCDAK_TypeDefinitionIndex = 18204;

class OICPKBDCDAK : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Byte>** StaticGet_EBCJNNDIJJJ()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(OICPKBDCDAK_TypeDefinitionIndex)->GetStaticField(0x84A0);
	}
	static ::Il2CppArray<::System::Byte>** StaticGet_EMLKCGOELNJ()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(OICPKBDCDAK_TypeDefinitionIndex)->GetStaticField(0x84A8);
	}
	static ::GANHKIDFADF** StaticGet_NIHJOLLCCNJ()
	{
		return (::GANHKIDFADF**)Il2CppClass::FromTypeDefinitionIndex(OICPKBDCDAK_TypeDefinitionIndex)->GetStaticField(0x84B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OICPKBDCDAK__CCTOR_OFFSET))();
	}

	static ::System::Void MIMMCMMPCKN(::CFMGIKJLMBJ* NAPFALLANDL)
	{
		return ((::System::Void(*)(::CFMGIKJLMBJ*))((::PBYTE)hIl2Cpp + OICPKBDCDAK_MIMMCMMPCKN_OFFSET))(NAPFALLANDL);
	}

	static ::System::Void ENOHGJBKFCC(::CFMGIKJLMBJ* NAPFALLANDL)
	{
		return ((::System::Void(*)(::CFMGIKJLMBJ*))((::PBYTE)hIl2Cpp + OICPKBDCDAK_ENOHGJBKFCC_OFFSET))(NAPFALLANDL);
	}
};
