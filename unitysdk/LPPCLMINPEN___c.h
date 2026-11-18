#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define LPPCLMINPEN___C_OAMHMJEBHCB_OFFSET UNITYSDK_OFFSET(0x1568A7D0)
#define LPPCLMINPEN___C_POABMFDHJFD_OFFSET UNITYSDK_OFFSET(0x1568A740)
#define LPPCLMINPEN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1568A6F0)
#define LPPCLMINPEN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1568A730)

inline static constexpr unsigned int LPPCLMINPEN___c_TypeDefinitionIndex = 88363;

class LPPCLMINPEN___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__26_5()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(LPPCLMINPEN___c_TypeDefinitionIndex)->GetStaticField(0x38570);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__26_2()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(LPPCLMINPEN___c_TypeDefinitionIndex)->GetStaticField(0x38578);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LPPCLMINPEN___c_TypeDefinitionIndex)->GetStaticField(0x38580);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPPCLMINPEN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPPCLMINPEN___C__CTOR_OFFSET))(this);
	}

	::System::Void POABMFDHJFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPPCLMINPEN___C_POABMFDHJFD_OFFSET))(this);
	}

	::System::Void OAMHMJEBHCB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPPCLMINPEN___C_OAMHMJEBHCB_OFFSET))(this);
	}
};
