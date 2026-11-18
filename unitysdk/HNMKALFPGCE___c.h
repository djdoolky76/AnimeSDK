#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define HNMKALFPGCE___C_AAKOPAHLGNA_OFFSET UNITYSDK_OFFSET(0x16F4FB20)
#define HNMKALFPGCE___C_PHFEPHAKFNO_OFFSET UNITYSDK_OFFSET(0x16F4FA90)
#define HNMKALFPGCE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F4FA40)
#define HNMKALFPGCE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16F4FA80)

inline static constexpr unsigned int HNMKALFPGCE___c_TypeDefinitionIndex = 88750;

class HNMKALFPGCE___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__6_1()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(HNMKALFPGCE___c_TypeDefinitionIndex)->GetStaticField(0x3DFA0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HNMKALFPGCE___c_TypeDefinitionIndex)->GetStaticField(0x3DFA8);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__6_2()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HNMKALFPGCE___c_TypeDefinitionIndex)->GetStaticField(0x3DFB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNMKALFPGCE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMKALFPGCE___C__CTOR_OFFSET))(this);
	}

	::System::Void PHFEPHAKFNO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMKALFPGCE___C_PHFEPHAKFNO_OFFSET))(this);
	}

	::System::Boolean AAKOPAHLGNA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMKALFPGCE___C_AAKOPAHLGNA_OFFSET))(this);
	}
};
