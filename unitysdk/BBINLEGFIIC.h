#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BBINLEGFIIC_AFKMOKOLLPC_OFFSET UNITYSDK_OFFSET(0x1ECC1910)

inline static constexpr unsigned int BBINLEGFIIC_TypeDefinitionIndex = 10694;

	class BBINLEGFIIC : public ::System::Object
	{
	public:
		static ::System::Void AFKMOKOLLPC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBINLEGFIIC_AFKMOKOLLPC_OFFSET))();
		}

	};
