#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HGAOPNIIAKB_AFKMOKOLLPC_OFFSET UNITYSDK_OFFSET(0x1E080560)

inline static constexpr unsigned int HGAOPNIIAKB_TypeDefinitionIndex = 10719;

	class HGAOPNIIAKB : public ::System::Object
	{
	public:
		static ::System::Void AFKMOKOLLPC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGAOPNIIAKB_AFKMOKOLLPC_OFFSET))();
		}

	};
