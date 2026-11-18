#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define LHHNMACCMBJ___C_DDHJFOGLGGK_OFFSET UNITYSDK_OFFSET(0x15DFD7F0)
#define LHHNMACCMBJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DFD7A0)
#define LHHNMACCMBJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15DFD7E0)

inline static constexpr unsigned int LHHNMACCMBJ___c_TypeDefinitionIndex = 93157;

class LHHNMACCMBJ___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__1_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LHHNMACCMBJ___c_TypeDefinitionIndex)->GetStaticField(0x3BB10);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LHHNMACCMBJ___c_TypeDefinitionIndex)->GetStaticField(0x3BB18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHHNMACCMBJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHNMACCMBJ___C__CTOR_OFFSET))(this);
	}

	::System::Void DDHJFOGLGGK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHNMACCMBJ___C_DDHJFOGLGGK_OFFSET))(this);
	}
};
