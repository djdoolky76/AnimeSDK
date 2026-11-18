#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define KKLHGGPEIAP___C_IAMHHCNPBHJ_OFFSET UNITYSDK_OFFSET(0x17662620)
#define KKLHGGPEIAP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x176625D0)
#define KKLHGGPEIAP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17662610)

inline static constexpr unsigned int KKLHGGPEIAP___c_TypeDefinitionIndex = 88790;

class KKLHGGPEIAP___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__12_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(KKLHGGPEIAP___c_TypeDefinitionIndex)->GetStaticField(0x4BDD0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KKLHGGPEIAP___c_TypeDefinitionIndex)->GetStaticField(0x4BDD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKLHGGPEIAP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKLHGGPEIAP___C__CTOR_OFFSET))(this);
	}

	::System::Void IAMHHCNPBHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKLHGGPEIAP___C_IAMHHCNPBHJ_OFFSET))(this);
	}
};
