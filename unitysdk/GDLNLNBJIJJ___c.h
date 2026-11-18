#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PDDKHKKCENB;
namespace System { template <typename T> class Action_1; }

#define GDLNLNBJIJJ___C_PGOICACPKAK_OFFSET UNITYSDK_OFFSET(0x125C7410)
#define GDLNLNBJIJJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x125C73C0)
#define GDLNLNBJIJJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x125C7400)

inline static constexpr unsigned int GDLNLNBJIJJ___c_TypeDefinitionIndex = 72899;

class GDLNLNBJIJJ___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GDLNLNBJIJJ___c_TypeDefinitionIndex)->GetStaticField(0x462F0);
	}
	static ::System::Action_1<::PDDKHKKCENB*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::PDDKHKKCENB*>**)Il2CppClass::FromTypeDefinitionIndex(GDLNLNBJIJJ___c_TypeDefinitionIndex)->GetStaticField(0x462F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDLNLNBJIJJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLNLNBJIJJ___C__CTOR_OFFSET))(this);
	}

	::System::Void PGOICACPKAK(::PDDKHKKCENB* HBNBIBADGNH)
	{
		return ((::System::Void(*)(::PVOID, ::PDDKHKKCENB*))((::PBYTE)hIl2Cpp + GDLNLNBJIJJ___C_PGOICACPKAK_OFFSET))(this, HBNBIBADGNH);
	}
};
