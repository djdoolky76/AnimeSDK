#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define EGLLGHMHMNP___C_HCDIKNGOIHO_OFFSET UNITYSDK_OFFSET(0x1414DCC0)
#define EGLLGHMHMNP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1414DC70)
#define EGLLGHMHMNP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1414DCB0)

inline static constexpr unsigned int EGLLGHMHMNP___c_TypeDefinitionIndex = 51018;

class EGLLGHMHMNP___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__73_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(EGLLGHMHMNP___c_TypeDefinitionIndex)->GetStaticField(0x37560);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EGLLGHMHMNP___c_TypeDefinitionIndex)->GetStaticField(0x37568);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGLLGHMHMNP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLLGHMHMNP___C__CTOR_OFFSET))(this);
	}

	::System::Void HCDIKNGOIHO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLLGHMHMNP___C_HCDIKNGOIHO_OFFSET))(this);
	}
};
