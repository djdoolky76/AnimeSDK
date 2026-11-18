#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_NGKHGAPPFDA;
class OAEFGCLEHHO;

#define OCEIAPGNHCI___C_EMCLKKMHJJF_OFFSET UNITYSDK_OFFSET(0xB3089C0)
#define OCEIAPGNHCI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB308970)
#define OCEIAPGNHCI___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB3089B0)

inline static constexpr unsigned int OCEIAPGNHCI___c_TypeDefinitionIndex = 41472;

class OCEIAPGNHCI___c : public ::System::Object
{
public:
	static ::IANDOOLAALI_NGKHGAPPFDA** StaticGet___9__12_1()
	{
		return (::IANDOOLAALI_NGKHGAPPFDA**)Il2CppClass::FromTypeDefinitionIndex(OCEIAPGNHCI___c_TypeDefinitionIndex)->GetStaticField(0x4DD60);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OCEIAPGNHCI___c_TypeDefinitionIndex)->GetStaticField(0x4DD68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCEIAPGNHCI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEIAPGNHCI___C__CTOR_OFFSET))(this);
	}

	::System::Void EMCLKKMHJJF(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OCEIAPGNHCI___C_EMCLKKMHJJF_OFFSET))(this, DJCNCELJPOM);
	}
};
