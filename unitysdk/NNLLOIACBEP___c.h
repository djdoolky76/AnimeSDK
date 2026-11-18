#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NNLLOIACBEP___C_BGFLKFEKMAE_OFFSET UNITYSDK_OFFSET(0x115AD870)
#define NNLLOIACBEP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x115AD820)
#define NNLLOIACBEP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x115AD860)

inline static constexpr unsigned int NNLLOIACBEP___c_TypeDefinitionIndex = 51482;

class NNLLOIACBEP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NNLLOIACBEP___c_TypeDefinitionIndex)->GetStaticField(0x35C10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNLLOIACBEP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLLOIACBEP___C__CTOR_OFFSET))(this);
	}

	::System::Single BGFLKFEKMAE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLLOIACBEP___C_BGFLKFEKMAE_OFFSET))(this);
	}
};
