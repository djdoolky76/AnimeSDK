#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LOAMKOLJMNL_AFKMOKOLLPC_OFFSET UNITYSDK_OFFSET(0x1E31E650)

inline static constexpr unsigned int LOAMKOLJMNL_TypeDefinitionIndex = 10751;

	class LOAMKOLJMNL : public ::System::Object
	{
	public:
		static ::System::Void AFKMOKOLLPC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOAMKOLJMNL_AFKMOKOLLPC_OFFSET))();
		}

	};
