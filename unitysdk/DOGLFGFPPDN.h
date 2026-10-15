#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DOGLFGFPPDN_AFKMOKOLLPC_OFFSET UNITYSDK_OFFSET(0x1CD53C00)

inline static constexpr unsigned int DOGLFGFPPDN_TypeDefinitionIndex = 10696;

	class DOGLFGFPPDN : public ::System::Object
	{
	public:
		static ::System::Void AFKMOKOLLPC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOGLFGFPPDN_AFKMOKOLLPC_OFFSET))();
		}

	};
