#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define DDLHEHKNBJF___C_FNFFNGPIHHP_OFFSET UNITYSDK_OFFSET(0x12403CD0)
#define DDLHEHKNBJF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12403C80)
#define DDLHEHKNBJF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12403CC0)

inline static constexpr unsigned int DDLHEHKNBJF___c_TypeDefinitionIndex = 91264;

class DDLHEHKNBJF___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DDLHEHKNBJF___c_TypeDefinitionIndex)->GetStaticField(0x3D850);
	}
	static ::System::Action** StaticGet___9__17_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(DDLHEHKNBJF___c_TypeDefinitionIndex)->GetStaticField(0x3D858);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDLHEHKNBJF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLHEHKNBJF___C__CTOR_OFFSET))(this);
	}

	::System::Void FNFFNGPIHHP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLHEHKNBJF___C_FNFFNGPIHHP_OFFSET))(this);
	}
};
