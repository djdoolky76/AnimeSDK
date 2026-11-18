#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KJHCEDHJGJG;

#define KJHCEDHJGJG___C_KEBFFGINALK_OFFSET UNITYSDK_OFFSET(0x1FCDF9B0)
#define KJHCEDHJGJG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCDF960)
#define KJHCEDHJGJG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FCDF9A0)

inline static constexpr unsigned int KJHCEDHJGJG___c_TypeDefinitionIndex = 18116;

class KJHCEDHJGJG___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KJHCEDHJGJG___c_TypeDefinitionIndex)->GetStaticField(0x7E90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJHCEDHJGJG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHCEDHJGJG___C__CTOR_OFFSET))(this);
	}

	::KJHCEDHJGJG* KEBFFGINALK()
	{
		return ((::KJHCEDHJGJG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHCEDHJGJG___C_KEBFFGINALK_OFFSET))(this);
	}
};
