#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKLPHAFMLGA;
class MFLJIEBFMOF;

#define EOKPCCAIANI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x16B27450)

inline static constexpr unsigned int EOKPCCAIANI_TypeDefinitionIndex = 70890;

	class EOKPCCAIANI : public ::System::Object
	{
	public:
		static ::FKLPHAFMLGA* BPLPBPMEODA(::MFLJIEBFMOF* a1)
		{
			return ((::FKLPHAFMLGA*(*)(::MFLJIEBFMOF*))((::PBYTE)hIl2Cpp + EOKPCCAIANI_BPLPBPMEODA_OFFSET))(a1);
		}

	};
