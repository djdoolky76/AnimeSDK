#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define AIPAFAGLLGH___C_PIKEGHOKELJ_OFFSET UNITYSDK_OFFSET(0x181F5060)
#define AIPAFAGLLGH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x181F5010)
#define AIPAFAGLLGH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x181F5050)

inline static constexpr unsigned int AIPAFAGLLGH___c_TypeDefinitionIndex = 70111;

class AIPAFAGLLGH___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AIPAFAGLLGH___c_TypeDefinitionIndex)->GetStaticField(0x4F180);
	}
	static ::System::Action** StaticGet___9__93_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AIPAFAGLLGH___c_TypeDefinitionIndex)->GetStaticField(0x4F188);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIPAFAGLLGH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPAFAGLLGH___C__CTOR_OFFSET))(this);
	}

	::System::Void PIKEGHOKELJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPAFAGLLGH___C_PIKEGHOKELJ_OFFSET))(this);
	}
};
