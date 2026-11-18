#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define BLPFLEBJMNP___C_OLGIBCCEBPB_OFFSET UNITYSDK_OFFSET(0xFF8B690)
#define BLPFLEBJMNP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFF8B640)
#define BLPFLEBJMNP___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFF8B680)

inline static constexpr unsigned int BLPFLEBJMNP___c_TypeDefinitionIndex = 68466;

class BLPFLEBJMNP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BLPFLEBJMNP___c_TypeDefinitionIndex)->GetStaticField(0x401D0);
	}
	static ::System::Action** StaticGet___9__12_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BLPFLEBJMNP___c_TypeDefinitionIndex)->GetStaticField(0x401D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLPFLEBJMNP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPFLEBJMNP___C__CTOR_OFFSET))(this);
	}

	::System::Void OLGIBCCEBPB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPFLEBJMNP___C_OLGIBCCEBPB_OFFSET))(this);
	}
};
