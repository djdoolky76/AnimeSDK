#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HEAECEINKCC_CCEOGLFLIJI;

#define HEAECEINKCC_KMAABFKCFLC_IHGACLELBIO_OFFSET UNITYSDK_OFFSET(0x16CEA050)
#define HEAECEINKCC_KMAABFKCFLC__CTOR_OFFSET UNITYSDK_OFFSET(0x16CEA040)

inline static constexpr unsigned int HEAECEINKCC_KMAABFKCFLC_TypeDefinitionIndex = 64550;

class HEAECEINKCC_KMAABFKCFLC : public ::System::Object
{
public:
	::HEAECEINKCC_CCEOGLFLIJI* KGFKHBMEKBL; // 0x10
	::System::Double FJHNCJMFHHI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_KMAABFKCFLC__CTOR_OFFSET))(this);
	}

	::System::Void IHGACLELBIO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_KMAABFKCFLC_IHGACLELBIO_OFFSET))(this);
	}
};
