#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MPHKPPEDMMD___C_NPAMEAFANAD_OFFSET UNITYSDK_OFFSET(0x174B7C20)
#define MPHKPPEDMMD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x174B7BD0)
#define MPHKPPEDMMD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x174B7C10)

inline static constexpr unsigned int MPHKPPEDMMD___c_TypeDefinitionIndex = 82832;

class MPHKPPEDMMD___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MPHKPPEDMMD___c_TypeDefinitionIndex)->GetStaticField(0x4A470);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__5_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(MPHKPPEDMMD___c_TypeDefinitionIndex)->GetStaticField(0x4A478);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPHKPPEDMMD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPHKPPEDMMD___C__CTOR_OFFSET))(this);
	}

	::System::Void NPAMEAFANAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPHKPPEDMMD___C_NPAMEAFANAD_OFFSET))(this);
	}
};
