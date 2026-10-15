#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BBINLEGFIIC_AFKMOKOLLPC_OFFSET UNITYSDK_OFFSET(0x1CCC6580)

inline static constexpr unsigned int BBINLEGFIIC_TypeDefinitionIndex = 10678;

	class BBINLEGFIIC : public ::System::Object
	{
	public:
		static ::System::Void AFKMOKOLLPC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBINLEGFIIC_AFKMOKOLLPC_OFFSET))();
		}

	};
