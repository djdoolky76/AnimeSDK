#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KOFNIIHNJLF_AFKMOKOLLPC_OFFSET UNITYSDK_OFFSET(0x1ECF1290)

inline static constexpr unsigned int KOFNIIHNJLF_TypeDefinitionIndex = 10709;

	class KOFNIIHNJLF : public ::System::Object
	{
	public:
		static ::System::Void AFKMOKOLLPC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOFNIIHNJLF_AFKMOKOLLPC_OFFSET))();
		}

	};
