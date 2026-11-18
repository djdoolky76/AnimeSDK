#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ODPINEGGNDC;

#define AAEKMCEKCOB_EGNJOGAEODI_OFFSET UNITYSDK_OFFSET(0x1F8BCA80)
#define AAEKMCEKCOB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8BC770)

inline static constexpr unsigned int AAEKMCEKCOB_TypeDefinitionIndex = 18094;

class AAEKMCEKCOB : public ::System::Object
{
public:
	static ::ODPINEGGNDC** StaticGet_DOOHCBBJGFD()
	{
		return (::ODPINEGGNDC**)Il2CppClass::FromTypeDefinitionIndex(AAEKMCEKCOB_TypeDefinitionIndex)->GetStaticField(0x8340);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAEKMCEKCOB__CCTOR_OFFSET))();
	}

	static ::ODPINEGGNDC* EGNJOGAEODI()
	{
		return ((::ODPINEGGNDC*(*)())((::PBYTE)hIl2Cpp + AAEKMCEKCOB_EGNJOGAEODI_OFFSET))();
	}
};
