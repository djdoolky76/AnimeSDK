#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define GMILJAKIGMG___C_POIBKECPOOH_OFFSET UNITYSDK_OFFSET(0x17AD3DD0)
#define GMILJAKIGMG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17AD3D80)
#define GMILJAKIGMG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17AD3DC0)

inline static constexpr unsigned int GMILJAKIGMG___c_TypeDefinitionIndex = 81089;

class GMILJAKIGMG___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__17_9()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(GMILJAKIGMG___c_TypeDefinitionIndex)->GetStaticField(0x4E510);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GMILJAKIGMG___c_TypeDefinitionIndex)->GetStaticField(0x4E518);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMILJAKIGMG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMILJAKIGMG___C__CTOR_OFFSET))(this);
	}

	::System::Void POIBKECPOOH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMILJAKIGMG___C_POIBKECPOOH_OFFSET))(this);
	}
};
