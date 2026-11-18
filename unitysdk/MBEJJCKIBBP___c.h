#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MBEJJCKIBBP___C_BMLKMLAGOKG_OFFSET UNITYSDK_OFFSET(0xD443AB0)
#define MBEJJCKIBBP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD443A60)
#define MBEJJCKIBBP___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD443AA0)

inline static constexpr unsigned int MBEJJCKIBBP___c_TypeDefinitionIndex = 86562;

class MBEJJCKIBBP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MBEJJCKIBBP___c_TypeDefinitionIndex)->GetStaticField(0x32B60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBEJJCKIBBP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBEJJCKIBBP___C__CTOR_OFFSET))(this);
	}

	::System::Void BMLKMLAGOKG(::System::String* IICPDDLBHPH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MBEJJCKIBBP___C_BMLKMLAGOKG_OFFSET))(this, IICPDDLBHPH);
	}
};
