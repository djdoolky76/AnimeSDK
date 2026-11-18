#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FAFFFFNBPCP_IFFGGFEIAIL;
class FICPDKBMDCK;

#define FAFFFFNBPCP_FLFEOPHDIEH_OFFSET UNITYSDK_OFFSET(0x123806B0)
#define FAFFFFNBPCP_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0x12380900)
#define FAFFFFNBPCP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x12380B90)
#define FAFFFFNBPCP__CCTOR_OFFSET UNITYSDK_OFFSET(0x123805E0)

inline static constexpr unsigned int FAFFFFNBPCP_TypeDefinitionIndex = 86593;

class FAFFFFNBPCP : public ::System::Object
{
public:
	static ::FAFFFFNBPCP_IFFGGFEIAIL** StaticGet_HHMLLPLMAOO()
	{
		return (::FAFFFFNBPCP_IFFGGFEIAIL**)Il2CppClass::FromTypeDefinitionIndex(FAFFFFNBPCP_TypeDefinitionIndex)->GetStaticField(0x40890);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAFFFFNBPCP__CCTOR_OFFSET))();
	}

	static ::System::Void FLFEOPHDIEH(::System::Int32 LJMPPBEMEPP, ::FICPDKBMDCK* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::System::Int32, ::FICPDKBMDCK*))((::PBYTE)hIl2Cpp + FAFFFFNBPCP_FLFEOPHDIEH_OFFSET))(LJMPPBEMEPP, KOIBHLHLMFC);
	}

	static ::System::Void KNDMMHPDPIB(::System::Int32 LJMPPBEMEPP, ::FICPDKBMDCK* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::System::Int32, ::FICPDKBMDCK*))((::PBYTE)hIl2Cpp + FAFFFFNBPCP_KNDMMHPDPIB_OFFSET))(LJMPPBEMEPP, KOIBHLHLMFC);
	}

	static ::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAFFFFNBPCP_PHOADBJGFBE_OFFSET))();
	}
};
