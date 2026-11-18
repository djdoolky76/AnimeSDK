#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CJGJNLHEKIC___C_EPEBBCEHPLA_OFFSET UNITYSDK_OFFSET(0x147A5170)
#define CJGJNLHEKIC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x147A5120)
#define CJGJNLHEKIC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x147A5160)

inline static constexpr unsigned int CJGJNLHEKIC___c_TypeDefinitionIndex = 64922;

class CJGJNLHEKIC___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CJGJNLHEKIC___c_TypeDefinitionIndex)->GetStaticField(0x47C50);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__20_3()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(CJGJNLHEKIC___c_TypeDefinitionIndex)->GetStaticField(0x47C58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJGJNLHEKIC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGJNLHEKIC___C__CTOR_OFFSET))(this);
	}

	::System::Void EPEBBCEHPLA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGJNLHEKIC___C_EPEBBCEHPLA_OFFSET))(this);
	}
};
