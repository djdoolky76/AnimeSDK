#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define JEMHGDPPNGO___C_AEGFJKDBPON_OFFSET UNITYSDK_OFFSET(0x165A1290)
#define JEMHGDPPNGO___C_EMIFLEAGILC_OFFSET UNITYSDK_OFFSET(0x165A1200)
#define JEMHGDPPNGO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x165A11B0)
#define JEMHGDPPNGO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x165A11F0)

inline static constexpr unsigned int JEMHGDPPNGO___c_TypeDefinitionIndex = 91877;

class JEMHGDPPNGO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JEMHGDPPNGO___c_TypeDefinitionIndex)->GetStaticField(0x48210);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__8_20()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(JEMHGDPPNGO___c_TypeDefinitionIndex)->GetStaticField(0x48218);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__8_17()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(JEMHGDPPNGO___c_TypeDefinitionIndex)->GetStaticField(0x48220);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEMHGDPPNGO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEMHGDPPNGO___C__CTOR_OFFSET))(this);
	}

	::System::Void EMIFLEAGILC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEMHGDPPNGO___C_EMIFLEAGILC_OFFSET))(this);
	}

	::System::Void AEGFJKDBPON()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEMHGDPPNGO___C_AEGFJKDBPON_OFFSET))(this);
	}
};
