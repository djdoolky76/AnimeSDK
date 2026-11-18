#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define GMLOINPJDJE___C_HICPBNPCLLL_OFFSET UNITYSDK_OFFSET(0x125E9F60)
#define GMLOINPJDJE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x125E9F10)
#define GMLOINPJDJE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x125E9F50)

inline static constexpr unsigned int GMLOINPJDJE___c_TypeDefinitionIndex = 72204;

class GMLOINPJDJE___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GMLOINPJDJE___c_TypeDefinitionIndex)->GetStaticField(0x31D10);
	}
	static ::System::Action** StaticGet___9__0_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GMLOINPJDJE___c_TypeDefinitionIndex)->GetStaticField(0x31D18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMLOINPJDJE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMLOINPJDJE___C__CTOR_OFFSET))(this);
	}

	::System::Void HICPBNPCLLL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMLOINPJDJE___C_HICPBNPCLLL_OFFSET))(this);
	}
};
