#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NFGHOLFKEPK;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define LMKBNPGAOFI___C_FFADAHGKECB_OFFSET UNITYSDK_OFFSET(0x156696D0)
#define LMKBNPGAOFI___C_LMFEELCFCJM_OFFSET UNITYSDK_OFFSET(0x156698C0)
#define LMKBNPGAOFI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15669680)
#define LMKBNPGAOFI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x156696C0)

inline static constexpr unsigned int LMKBNPGAOFI___c_TypeDefinitionIndex = 49620;

class LMKBNPGAOFI___c : public ::System::Object
{
public:
	static ::System::Action_1<::NFGHOLFKEPK*>** StaticGet___9__1_0()
	{
		return (::System::Action_1<::NFGHOLFKEPK*>**)Il2CppClass::FromTypeDefinitionIndex(LMKBNPGAOFI___c_TypeDefinitionIndex)->GetStaticField(0x4F760);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LMKBNPGAOFI___c_TypeDefinitionIndex)->GetStaticField(0x4F768);
	}
	static ::System::Action** StaticGet___9__2_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LMKBNPGAOFI___c_TypeDefinitionIndex)->GetStaticField(0x4F770);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMKBNPGAOFI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKBNPGAOFI___C__CTOR_OFFSET))(this);
	}

	::System::Void FFADAHGKECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKBNPGAOFI___C_FFADAHGKECB_OFFSET))(this);
	}

	::System::Void LMFEELCFCJM(::NFGHOLFKEPK* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::NFGHOLFKEPK*))((::PBYTE)hIl2Cpp + LMKBNPGAOFI___C_LMFEELCFCJM_OFFSET))(this, BHDNBGLCNOM);
	}
};
