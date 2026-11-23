#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FA942FEBDF63D532_F031BC839D53B0D7__CCTOR_OFFSET UNITYSDK_OFFSET(0x3E30A20)

inline static constexpr unsigned int FA942FEBDF63D532_F031BC839D53B0D7_TypeDefinitionIndex = 15301;

class FA942FEBDF63D532_F031BC839D53B0D7 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_FC5418FD0EB538F9()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FA942FEBDF63D532_F031BC839D53B0D7_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FA942FEBDF63D532_F031BC839D53B0D7__CCTOR_OFFSET))();
	}
};
