#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define INAFHKJEEMA_AFKMOKOLLPC_OFFSET UNITYSDK_OFFSET(0x1CF251F0)

inline static constexpr unsigned int INAFHKJEEMA_TypeDefinitionIndex = 10644;

	class INAFHKJEEMA : public ::System::Object
	{
	public:
		static ::System::Void AFKMOKOLLPC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INAFHKJEEMA_AFKMOKOLLPC_OFFSET))();
		}

	};
