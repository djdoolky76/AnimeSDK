#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define LJCPNIGKCDF___C_GNNPDNIACLD_OFFSET UNITYSDK_OFFSET(0x16853380)
#define LJCPNIGKCDF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16853330)
#define LJCPNIGKCDF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16853370)

inline static constexpr unsigned int LJCPNIGKCDF___c_TypeDefinitionIndex = 67784;

class LJCPNIGKCDF___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LJCPNIGKCDF___c_TypeDefinitionIndex)->GetStaticField(0x48480);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__258_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(LJCPNIGKCDF___c_TypeDefinitionIndex)->GetStaticField(0x48488);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJCPNIGKCDF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCPNIGKCDF___C__CTOR_OFFSET))(this);
	}

	::System::Void GNNPDNIACLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCPNIGKCDF___C_GNNPDNIACLD_OFFSET))(this);
	}
};
