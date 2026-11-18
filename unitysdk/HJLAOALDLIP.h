#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ODPINEGGNDC;

#define HJLAOALDLIP_EGNJOGAEODI_OFFSET UNITYSDK_OFFSET(0x1FAC19C0)
#define HJLAOALDLIP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAC1690)

inline static constexpr unsigned int HJLAOALDLIP_TypeDefinitionIndex = 18101;

class HJLAOALDLIP : public ::System::Object
{
public:
	static ::ODPINEGGNDC** StaticGet_DOOHCBBJGFD()
	{
		return (::ODPINEGGNDC**)Il2CppClass::FromTypeDefinitionIndex(HJLAOALDLIP_TypeDefinitionIndex)->GetStaticField(0x8130);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJLAOALDLIP__CCTOR_OFFSET))();
	}

	static ::ODPINEGGNDC* EGNJOGAEODI()
	{
		return ((::ODPINEGGNDC*(*)())((::PBYTE)hIl2Cpp + HJLAOALDLIP_EGNJOGAEODI_OFFSET))();
	}
};
