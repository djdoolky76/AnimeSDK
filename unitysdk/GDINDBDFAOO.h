#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DNFDBKCPBNM.h"
#include "unitysdk/OIPMNNAHIFP.h"

#define GDINDBDFAOO_IKJLFOGCMKM_OFFSET UNITYSDK_OFFSET(0x159927A0)

inline static constexpr unsigned int GDINDBDFAOO_TypeDefinitionIndex = 62576;

	class GDINDBDFAOO : public ::System::Object
	{
	public:
		static ::OIPMNNAHIFP IKJLFOGCMKM(::DNFDBKCPBNM a1)
		{
			return ((::OIPMNNAHIFP(*)(::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + GDINDBDFAOO_IKJLFOGCMKM_OFFSET))(a1);
		}

	};
