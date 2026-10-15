#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BMFAMHCENJI_AFKMOKOLLPC_OFFSET UNITYSDK_OFFSET(0x1D9E1A20)

inline static constexpr unsigned int BMFAMHCENJI_TypeDefinitionIndex = 10685;

	class BMFAMHCENJI : public ::System::Object
	{
	public:
		static ::System::Void AFKMOKOLLPC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMFAMHCENJI_AFKMOKOLLPC_OFFSET))();
		}

	};
