#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ODPINEGGNDC;

#define AEOELBDOGBG_EGNJOGAEODI_OFFSET UNITYSDK_OFFSET(0x1FB08150)
#define AEOELBDOGBG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB06E60)

inline static constexpr unsigned int AEOELBDOGBG_TypeDefinitionIndex = 18059;

class AEOELBDOGBG : public ::System::Object
{
public:
	static ::ODPINEGGNDC** StaticGet_DOOHCBBJGFD()
	{
		return (::ODPINEGGNDC**)Il2CppClass::FromTypeDefinitionIndex(AEOELBDOGBG_TypeDefinitionIndex)->GetStaticField(0x80E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEOELBDOGBG__CCTOR_OFFSET))();
	}

	static ::ODPINEGGNDC* EGNJOGAEODI()
	{
		return ((::ODPINEGGNDC*(*)())((::PBYTE)hIl2Cpp + AEOELBDOGBG_EGNJOGAEODI_OFFSET))();
	}
};
