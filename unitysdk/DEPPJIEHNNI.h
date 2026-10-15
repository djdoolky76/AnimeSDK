#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DEPPJIEHNNI_AFKMOKOLLPC_OFFSET UNITYSDK_OFFSET(0x1CD13A40)

	class DEPPJIEHNNI : public ::System::Object
	{
	public:
		static ::System::Void AFKMOKOLLPC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEPPJIEHNNI_AFKMOKOLLPC_OFFSET))();
		}

	};
