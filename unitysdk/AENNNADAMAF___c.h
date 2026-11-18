#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define AENNNADAMAF___C_DJCOLAJJAPK_OFFSET UNITYSDK_OFFSET(0x135DAF00)
#define AENNNADAMAF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x135DAEB0)
#define AENNNADAMAF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x135DAEF0)

inline static constexpr unsigned int AENNNADAMAF___c_TypeDefinitionIndex = 81993;

class AENNNADAMAF___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AENNNADAMAF___c_TypeDefinitionIndex)->GetStaticField(0x45C00);
	}
	static ::System::Action** StaticGet___9__47_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AENNNADAMAF___c_TypeDefinitionIndex)->GetStaticField(0x45C08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AENNNADAMAF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AENNNADAMAF___C__CTOR_OFFSET))(this);
	}

	::System::Void DJCOLAJJAPK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AENNNADAMAF___C_DJCOLAJJAPK_OFFSET))(this);
	}
};
