#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define EMPEGOJHEPN___C_FLCCNFNIFLC_OFFSET UNITYSDK_OFFSET(0x10F45FF0)
#define EMPEGOJHEPN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F45FA0)
#define EMPEGOJHEPN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10F45FE0)

inline static constexpr unsigned int EMPEGOJHEPN___c_TypeDefinitionIndex = 76152;

class EMPEGOJHEPN___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__27_20()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(EMPEGOJHEPN___c_TypeDefinitionIndex)->GetStaticField(0x3DA90);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EMPEGOJHEPN___c_TypeDefinitionIndex)->GetStaticField(0x3DA98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMPEGOJHEPN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPEGOJHEPN___C__CTOR_OFFSET))(this);
	}

	::System::Void FLCCNFNIFLC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPEGOJHEPN___C_FLCCNFNIFLC_OFFSET))(this);
	}
};
