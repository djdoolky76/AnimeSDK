#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ODPINEGGNDC;

#define CHILJMKCGHH_EGNJOGAEODI_OFFSET UNITYSDK_OFFSET(0x1FA94FD0)
#define CHILJMKCGHH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA94CA0)

inline static constexpr unsigned int CHILJMKCGHH_TypeDefinitionIndex = 18163;

class CHILJMKCGHH : public ::System::Object
{
public:
	static ::ODPINEGGNDC** StaticGet_DOOHCBBJGFD()
	{
		return (::ODPINEGGNDC**)Il2CppClass::FromTypeDefinitionIndex(CHILJMKCGHH_TypeDefinitionIndex)->GetStaticField(0x8140);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHILJMKCGHH__CCTOR_OFFSET))();
	}

	static ::ODPINEGGNDC* EGNJOGAEODI()
	{
		return ((::ODPINEGGNDC*(*)())((::PBYTE)hIl2Cpp + CHILJMKCGHH_EGNJOGAEODI_OFFSET))();
	}
};
