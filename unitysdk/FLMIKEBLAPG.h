#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ODPINEGGNDC;

#define FLMIKEBLAPG_EGNJOGAEODI_OFFSET UNITYSDK_OFFSET(0x1FA0F400)
#define FLMIKEBLAPG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA0F0B0)

inline static constexpr unsigned int FLMIKEBLAPG_TypeDefinitionIndex = 18149;

class FLMIKEBLAPG : public ::System::Object
{
public:
	static ::ODPINEGGNDC** StaticGet_DOOHCBBJGFD()
	{
		return (::ODPINEGGNDC**)Il2CppClass::FromTypeDefinitionIndex(FLMIKEBLAPG_TypeDefinitionIndex)->GetStaticField(0x7E70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLMIKEBLAPG__CCTOR_OFFSET))();
	}

	static ::ODPINEGGNDC* EGNJOGAEODI()
	{
		return ((::ODPINEGGNDC*(*)())((::PBYTE)hIl2Cpp + FLMIKEBLAPG_EGNJOGAEODI_OFFSET))();
	}
};
