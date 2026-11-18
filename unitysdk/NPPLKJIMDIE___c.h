#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define NPPLKJIMDIE___C_AJNKLKNOKJM_OFFSET UNITYSDK_OFFSET(0xFD46770)
#define NPPLKJIMDIE___C_PGPJBAGHELD_OFFSET UNITYSDK_OFFSET(0xFD466E0)
#define NPPLKJIMDIE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFD46690)
#define NPPLKJIMDIE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFD466D0)

inline static constexpr unsigned int NPPLKJIMDIE___c_TypeDefinitionIndex = 45727;

class NPPLKJIMDIE___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__7_1()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(NPPLKJIMDIE___c_TypeDefinitionIndex)->GetStaticField(0x51AA0);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__7_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(NPPLKJIMDIE___c_TypeDefinitionIndex)->GetStaticField(0x51AA8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NPPLKJIMDIE___c_TypeDefinitionIndex)->GetStaticField(0x51AB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPPLKJIMDIE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPLKJIMDIE___C__CTOR_OFFSET))(this);
	}

	::System::Void PGPJBAGHELD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPLKJIMDIE___C_PGPJBAGHELD_OFFSET))(this);
	}

	::System::Void AJNKLKNOKJM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPLKJIMDIE___C_AJNKLKNOKJM_OFFSET))(this);
	}
};
