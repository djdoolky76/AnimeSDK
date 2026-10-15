#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFLONJKEAKP.h"
class IAFKJCICCOP;
class IGACELAIJCM;

#define CEJNPLLGHMO_CTOR_OFFSET UNITYSDK_OFFSET(0xC9DC120)
#define CEJNPLLGHMO_OPBFNDKICAC_OFFSET UNITYSDK_OFFSET(0xC9DC130)

inline static constexpr unsigned int CEJNPLLGHMO_TypeDefinitionIndex = 67189;

	class CEJNPLLGHMO : public ::DFLONJKEAKP
	{
	public:
		::IAFKJCICCOP* OFKHJNMELII; // 0x10
		::System::Void _ctor(::IAFKJCICCOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAFKJCICCOP*))((::PBYTE)hIl2Cpp + CEJNPLLGHMO_CTOR_OFFSET))(this, a1);
		}

		::IGACELAIJCM* OPBFNDKICAC()
		{
			return ((::IGACELAIJCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJNPLLGHMO_OPBFNDKICAC_OFFSET))(this);
		}

	};
