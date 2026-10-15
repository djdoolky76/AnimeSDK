#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HGAOPNIIAKB_AFKMOKOLLPC_OFFSET UNITYSDK_OFFSET(0x1CEA2710)

	class HGAOPNIIAKB : public ::System::Object
	{
	public:
		static ::System::Void AFKMOKOLLPC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGAOPNIIAKB_AFKMOKOLLPC_OFFSET))();
		}

	};
