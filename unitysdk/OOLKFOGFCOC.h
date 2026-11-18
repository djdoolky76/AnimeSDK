#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ODPINEGGNDC;

#define OOLKFOGFCOC_EGNJOGAEODI_OFFSET UNITYSDK_OFFSET(0x1FCDA3C0)
#define OOLKFOGFCOC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCDA070)

inline static constexpr unsigned int OOLKFOGFCOC_TypeDefinitionIndex = 18106;

class OOLKFOGFCOC : public ::System::Object
{
public:
	static ::ODPINEGGNDC** StaticGet_DOOHCBBJGFD()
	{
		return (::ODPINEGGNDC**)Il2CppClass::FromTypeDefinitionIndex(OOLKFOGFCOC_TypeDefinitionIndex)->GetStaticField(0x8410);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOLKFOGFCOC__CCTOR_OFFSET))();
	}

	static ::ODPINEGGNDC* EGNJOGAEODI()
	{
		return ((::ODPINEGGNDC*(*)())((::PBYTE)hIl2Cpp + OOLKFOGFCOC_EGNJOGAEODI_OFFSET))();
	}
};
