#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DOGLFGFPPDN_AFKMOKOLLPC_OFFSET UNITYSDK_OFFSET(0x1E99B200)

inline static constexpr unsigned int DOGLFGFPPDN_TypeDefinitionIndex = 10712;

	class DOGLFGFPPDN : public ::System::Object
	{
	public:
		static ::System::Void AFKMOKOLLPC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOGLFGFPPDN_AFKMOKOLLPC_OFFSET))();
		}

	};
