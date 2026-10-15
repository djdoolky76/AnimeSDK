#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EBLNJDHJONO_AFKMOKOLLPC_OFFSET UNITYSDK_OFFSET(0x1CD600F0)

	class EBLNJDHJONO : public ::System::Object
	{
	public:
		static ::System::Void AFKMOKOLLPC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBLNJDHJONO_AFKMOKOLLPC_OFFSET))();
		}

	};
