#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LMNEKOLMGEM.h"
class GBDODOMIMIF;

#define NOBCAKJMGPH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBCE4880)
#define NOBCAKJMGPH_CTOR_OFFSET UNITYSDK_OFFSET(0xBCE4970)

inline static constexpr unsigned int NOBCAKJMGPH_TypeDefinitionIndex = 62605;

	class NOBCAKJMGPH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBCAKJMGPH_CTOR_OFFSET))(this);
		}

		::GBDODOMIMIF* BPLPBPMEODA(::LMNEKOLMGEM a1)
		{
			return ((::GBDODOMIMIF*(*)(::PVOID, ::LMNEKOLMGEM))((::PBYTE)hIl2Cpp + NOBCAKJMGPH_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
