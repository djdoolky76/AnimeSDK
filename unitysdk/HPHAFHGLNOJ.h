#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HPHAFHGLNOJ_CGNPIGHBMDN_OFFSET UNITYSDK_OFFSET(0xF831EC0)
#define HPHAFHGLNOJ__CCTOR_OFFSET UNITYSDK_OFFSET(0xF831FD0)
#define HPHAFHGLNOJ__CTOR_OFFSET UNITYSDK_OFFSET(0xF831FC0)

inline static constexpr unsigned int HPHAFHGLNOJ_TypeDefinitionIndex = 49280;

class HPHAFHGLNOJ : public ::System::Object
{
public:
	static ::HPHAFHGLNOJ** StaticGet_DDGNFJDLOKA()
	{
		return (::HPHAFHGLNOJ**)Il2CppClass::FromTypeDefinitionIndex(HPHAFHGLNOJ_TypeDefinitionIndex)->GetStaticField(0x48050);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHAFHGLNOJ__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPHAFHGLNOJ__CCTOR_OFFSET))();
	}

	::System::Single CGNPIGHBMDN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHAFHGLNOJ_CGNPIGHBMDN_OFFSET))(this);
	}
};
