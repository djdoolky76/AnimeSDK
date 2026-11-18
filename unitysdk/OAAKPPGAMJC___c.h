#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AGJFJGEMIPB;
namespace System { template <typename T> class Action_1; }

#define OAAKPPGAMJC___C_FHAJDOLFAAJ_OFFSET UNITYSDK_OFFSET(0x1365F430)
#define OAAKPPGAMJC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1365F3E0)
#define OAAKPPGAMJC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1365F420)

inline static constexpr unsigned int OAAKPPGAMJC___c_TypeDefinitionIndex = 72504;

class OAAKPPGAMJC___c : public ::System::Object
{
public:
	static ::System::Action_1<::AGJFJGEMIPB*>** StaticGet___9__7_0()
	{
		return (::System::Action_1<::AGJFJGEMIPB*>**)Il2CppClass::FromTypeDefinitionIndex(OAAKPPGAMJC___c_TypeDefinitionIndex)->GetStaticField(0x35FF0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OAAKPPGAMJC___c_TypeDefinitionIndex)->GetStaticField(0x35FF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAAKPPGAMJC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAAKPPGAMJC___C__CTOR_OFFSET))(this);
	}

	::System::Void FHAJDOLFAAJ(::AGJFJGEMIPB* JCNBNNJDKJD)
	{
		return ((::System::Void(*)(::PVOID, ::AGJFJGEMIPB*))((::PBYTE)hIl2Cpp + OAAKPPGAMJC___C_FHAJDOLFAAJ_OFFSET))(this, JCNBNNJDKJD);
	}
};
