#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MODDNDNMHFM;

#define MODDNDNMHFM___C_FONLODLLAMJ_OFFSET UNITYSDK_OFFSET(0x1FA9B010)
#define MODDNDNMHFM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA9AFC0)
#define MODDNDNMHFM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA9B000)

inline static constexpr unsigned int MODDNDNMHFM___c_TypeDefinitionIndex = 18171;

class MODDNDNMHFM___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MODDNDNMHFM___c_TypeDefinitionIndex)->GetStaticField(0x8540);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MODDNDNMHFM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODDNDNMHFM___C__CTOR_OFFSET))(this);
	}

	::MODDNDNMHFM* FONLODLLAMJ()
	{
		return ((::MODDNDNMHFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MODDNDNMHFM___C_FONLODLLAMJ_OFFSET))(this);
	}
};
