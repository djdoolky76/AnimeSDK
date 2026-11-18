#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define GGHIBHMMJIH___C_AOAGAEJLDLI_OFFSET UNITYSDK_OFFSET(0x179EC6E0)
#define GGHIBHMMJIH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x179EC690)
#define GGHIBHMMJIH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x179EC6D0)

inline static constexpr unsigned int GGHIBHMMJIH___c_TypeDefinitionIndex = 45796;

class GGHIBHMMJIH___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GGHIBHMMJIH___c_TypeDefinitionIndex)->GetStaticField(0x3DD30);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__2_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(GGHIBHMMJIH___c_TypeDefinitionIndex)->GetStaticField(0x3DD38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGHIBHMMJIH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHIBHMMJIH___C__CTOR_OFFSET))(this);
	}

	::System::Void AOAGAEJLDLI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHIBHMMJIH___C_AOAGAEJLDLI_OFFSET))(this);
	}
};
