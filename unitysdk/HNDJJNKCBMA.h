#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKBOOENADFM;
class IAFKJCICCOP;
class MJNGPKADCCC;
class MKJBLEPELNC;

#define HNDJJNKCBMA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15D81B20)
#define HNDJJNKCBMA_CTOR_OFFSET UNITYSDK_OFFSET(0x15D819E0)

inline static constexpr unsigned int HNDJJNKCBMA_TypeDefinitionIndex = 67130;

	class HNDJJNKCBMA : public ::System::Object
	{
	public:
		::IAFKJCICCOP* OFKHJNMELII; // 0x10
		::System::Void _ctor(::MKJBLEPELNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKJBLEPELNC*))((::PBYTE)hIl2Cpp + HNDJJNKCBMA_CTOR_OFFSET))(this, a1);
		}

		::MJNGPKADCCC* BPLPBPMEODA(::FKBOOENADFM* a1)
		{
			return ((::MJNGPKADCCC*(*)(::PVOID, ::FKBOOENADFM*))((::PBYTE)hIl2Cpp + HNDJJNKCBMA_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
