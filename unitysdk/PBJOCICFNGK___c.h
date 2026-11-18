#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define PBJOCICFNGK___C_MJJJIJPAAID_OFFSET UNITYSDK_OFFSET(0x178B03E0)
#define PBJOCICFNGK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x178B0390)
#define PBJOCICFNGK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x178B03D0)

inline static constexpr unsigned int PBJOCICFNGK___c_TypeDefinitionIndex = 72629;

class PBJOCICFNGK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PBJOCICFNGK___c_TypeDefinitionIndex)->GetStaticField(0x36190);
	}
	static ::System::Action** StaticGet___9__51_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PBJOCICFNGK___c_TypeDefinitionIndex)->GetStaticField(0x36198);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBJOCICFNGK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBJOCICFNGK___C__CTOR_OFFSET))(this);
	}

	::System::Void MJJJIJPAAID()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBJOCICFNGK___C_MJJJIJPAAID_OFFSET))(this);
	}
};
