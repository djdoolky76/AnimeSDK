#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ODPINEGGNDC;

#define NPCPKPIKBOF_EGNJOGAEODI_OFFSET UNITYSDK_OFFSET(0x1FCE1250)
#define NPCPKPIKBOF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCE0980)

inline static constexpr unsigned int NPCPKPIKBOF_TypeDefinitionIndex = 18277;

class NPCPKPIKBOF : public ::System::Object
{
public:
	static ::ODPINEGGNDC** StaticGet_DOOHCBBJGFD()
	{
		return (::ODPINEGGNDC**)Il2CppClass::FromTypeDefinitionIndex(NPCPKPIKBOF_TypeDefinitionIndex)->GetStaticField(0x7EF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCPKPIKBOF__CCTOR_OFFSET))();
	}

	static ::ODPINEGGNDC* EGNJOGAEODI()
	{
		return ((::ODPINEGGNDC*(*)())((::PBYTE)hIl2Cpp + NPCPKPIKBOF_EGNJOGAEODI_OFFSET))();
	}
};
