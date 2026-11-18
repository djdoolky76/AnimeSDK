#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CHDCLCOAPNE___C_PDMCCKMPJIK_OFFSET UNITYSDK_OFFSET(0x139C5F90)
#define CHDCLCOAPNE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x139C5F40)
#define CHDCLCOAPNE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x139C5F80)

inline static constexpr unsigned int CHDCLCOAPNE___c_TypeDefinitionIndex = 41945;

class CHDCLCOAPNE___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__9_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(CHDCLCOAPNE___c_TypeDefinitionIndex)->GetStaticField(0x4F2D0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CHDCLCOAPNE___c_TypeDefinitionIndex)->GetStaticField(0x4F2D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHDCLCOAPNE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDCLCOAPNE___C__CTOR_OFFSET))(this);
	}

	::System::Void PDMCCKMPJIK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDCLCOAPNE___C_PDMCCKMPJIK_OFFSET))(this);
	}
};
