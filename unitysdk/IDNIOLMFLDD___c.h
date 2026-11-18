#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define IDNIOLMFLDD___C_GIPOMHCPKFG_OFFSET UNITYSDK_OFFSET(0x12EA4FE0)
#define IDNIOLMFLDD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12EA4F90)
#define IDNIOLMFLDD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12EA4FD0)

inline static constexpr unsigned int IDNIOLMFLDD___c_TypeDefinitionIndex = 38328;

class IDNIOLMFLDD___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IDNIOLMFLDD___c_TypeDefinitionIndex)->GetStaticField(0x4D0F0);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__17_19()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(IDNIOLMFLDD___c_TypeDefinitionIndex)->GetStaticField(0x4D0F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDNIOLMFLDD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNIOLMFLDD___C__CTOR_OFFSET))(this);
	}

	::System::Void GIPOMHCPKFG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNIOLMFLDD___C_GIPOMHCPKFG_OFFSET))(this);
	}
};
