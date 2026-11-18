#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GFEJHAAEAHL.h"
#include "unitysdk/System/Object.h"

#define PIBIOGDKKNA___C_NPCBPCPIPIH_OFFSET UNITYSDK_OFFSET(0x1BC854A0)
#define PIBIOGDKKNA___C_OBLFBILOMEM_OFFSET UNITYSDK_OFFSET(0x1BC854B0)
#define PIBIOGDKKNA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC85450)
#define PIBIOGDKKNA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC85490)

inline static constexpr unsigned int PIBIOGDKKNA___c_TypeDefinitionIndex = 24131;

class PIBIOGDKKNA___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PIBIOGDKKNA___c_TypeDefinitionIndex)->GetStaticField(0x16EF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIBIOGDKKNA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBIOGDKKNA___C__CTOR_OFFSET))(this);
	}

	::GFEJHAAEAHL NPCBPCPIPIH(::System::Int32 HAAEBCOBKFF)
	{
		return ((::GFEJHAAEAHL(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIBIOGDKKNA___C_NPCBPCPIPIH_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Int32 OBLFBILOMEM(::GFEJHAAEAHL HAAEBCOBKFF)
	{
		return ((::System::Int32(*)(::PVOID, ::GFEJHAAEAHL))((::PBYTE)hIl2Cpp + PIBIOGDKKNA___C_OBLFBILOMEM_OFFSET))(this, HAAEBCOBKFF);
	}
};
