#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FKEMNBCINLC__CCTOR_OFFSET UNITYSDK_OFFSET(0x132255C0)

inline static constexpr unsigned int FKEMNBCINLC_TypeDefinitionIndex = 86340;

class FKEMNBCINLC : public ::System::Object
{
public:
	static ::System::String** StaticGet_ENPDAAJNAJB()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FKEMNBCINLC_TypeDefinitionIndex)->GetStaticField(0x31A30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKEMNBCINLC__CCTOR_OFFSET))();
	}
};
