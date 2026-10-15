#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KOFNIIHNJLF_AFKMOKOLLPC_OFFSET UNITYSDK_OFFSET(0x1D0BEDF0)

	class KOFNIIHNJLF : public ::System::Object
	{
	public:
		static ::System::Void AFKMOKOLLPC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOFNIIHNJLF_AFKMOKOLLPC_OFFSET))();
		}

	};
