#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LDIHJENNBEE.h"
class DFBICHLFCLL;
class JNFBANKKLJK;

#define GBJEJEAMCBC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C5FC2D0)

inline static constexpr unsigned int GBJEJEAMCBC_TypeDefinitionIndex = 37130;

	class GBJEJEAMCBC : public ::System::Object
	{
	public:
		static ::DFBICHLFCLL* BPLPBPMEODA(::LDIHJENNBEE a1, ::JNFBANKKLJK* a2)
		{
			return ((::DFBICHLFCLL*(*)(::LDIHJENNBEE, ::JNFBANKKLJK*))((::PBYTE)hIl2Cpp + GBJEJEAMCBC_BPLPBPMEODA_OFFSET))(a1, a2);
		}

	};
