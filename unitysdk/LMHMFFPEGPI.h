#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ODPINEGGNDC;

#define LMHMFFPEGPI_EGNJOGAEODI_OFFSET UNITYSDK_OFFSET(0x1FB0FDA0)
#define LMHMFFPEGPI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB0B3A0)

inline static constexpr unsigned int LMHMFFPEGPI_TypeDefinitionIndex = 18252;

class LMHMFFPEGPI : public ::System::Object
{
public:
	static ::ODPINEGGNDC** StaticGet_DOOHCBBJGFD()
	{
		return (::ODPINEGGNDC**)Il2CppClass::FromTypeDefinitionIndex(LMHMFFPEGPI_TypeDefinitionIndex)->GetStaticField(0x7E20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMHMFFPEGPI__CCTOR_OFFSET))();
	}

	static ::ODPINEGGNDC* EGNJOGAEODI()
	{
		return ((::ODPINEGGNDC*(*)())((::PBYTE)hIl2Cpp + LMHMFFPEGPI_EGNJOGAEODI_OFFSET))();
	}
};
