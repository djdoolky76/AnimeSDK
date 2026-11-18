#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define JNMGHDNIEJC___C_NDKCILKAOGN_OFFSET UNITYSDK_OFFSET(0x15B74000)
#define JNMGHDNIEJC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B73FB0)
#define JNMGHDNIEJC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B73FF0)

inline static constexpr unsigned int JNMGHDNIEJC___c_TypeDefinitionIndex = 58202;

class JNMGHDNIEJC___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__94_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(JNMGHDNIEJC___c_TypeDefinitionIndex)->GetStaticField(0x380C0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JNMGHDNIEJC___c_TypeDefinitionIndex)->GetStaticField(0x380C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNMGHDNIEJC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMGHDNIEJC___C__CTOR_OFFSET))(this);
	}

	::System::Void NDKCILKAOGN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMGHDNIEJC___C_NDKCILKAOGN_OFFSET))(this);
	}
};
