#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MJNGPKADCCC;
class PBLOLDMAMOD;

#define LIBAEPLPLIE_DPPBACMBJIB_OFFSET UNITYSDK_OFFSET(0xBF5A060)
#define LIBAEPLPLIE_EMJGKAKEPKK_OFFSET UNITYSDK_OFFSET(0xBF59F90)
#define LIBAEPLPLIE_NEFBGDBMBNA_OFFSET UNITYSDK_OFFSET(0xBF59F30)

inline static constexpr unsigned int LIBAEPLPLIE_TypeDefinitionIndex = 69073;

	class LIBAEPLPLIE : public ::System::Object
	{
	public:
		static ::System::Boolean NEFBGDBMBNA(::MJNGPKADCCC* a1)
		{
			return ((::System::Boolean(*)(::MJNGPKADCCC*))((::PBYTE)hIl2Cpp + LIBAEPLPLIE_NEFBGDBMBNA_OFFSET))(a1);
		}

		static ::System::Boolean DPPBACMBJIB(::MJNGPKADCCC* a1)
		{
			return ((::System::Boolean(*)(::MJNGPKADCCC*))((::PBYTE)hIl2Cpp + LIBAEPLPLIE_DPPBACMBJIB_OFFSET))(a1);
		}

		static ::PBLOLDMAMOD* EMJGKAKEPKK(::MJNGPKADCCC* a1)
		{
			return ((::PBLOLDMAMOD*(*)(::MJNGPKADCCC*))((::PBYTE)hIl2Cpp + LIBAEPLPLIE_EMJGKAKEPKK_OFFSET))(a1);
		}

	};
