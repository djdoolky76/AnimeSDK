#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define JFDLFCJBEOF_PHIGKCCKHIF_OFFSET UNITYSDK_OFFSET(0x165A1CD0)
#define JFDLFCJBEOF__CTOR_OFFSET UNITYSDK_OFFSET(0x165A1CC0)

inline static constexpr unsigned int JFDLFCJBEOF_TypeDefinitionIndex = 41092;

class JFDLFCJBEOF : public ::System::Object
{
public:
	static ::System::String** StaticGet_CMJLFAIMHLE()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(JFDLFCJBEOF_TypeDefinitionIndex)->GetStaticField(0x45F10);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDLFCJBEOF__CTOR_OFFSET))(this);
	}

	static ::System::Void PHIGKCCKHIF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFDLFCJBEOF_PHIGKCCKHIF_OFFSET))();
	}
};
