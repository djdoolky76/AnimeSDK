#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DJPNKIANBFK_EJJIHPKCOFO_OFFSET UNITYSDK_OFFSET(0x18C08AD0)
#define DJPNKIANBFK_GBFEODOEHHG_OFFSET UNITYSDK_OFFSET(0x18C08A80)

inline static constexpr unsigned int DJPNKIANBFK_TypeDefinitionIndex = 79846;

	class DJPNKIANBFK : public ::System::Object
	{
	public:
		static ::System::Boolean GBFEODOEHHG(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DJPNKIANBFK_GBFEODOEHHG_OFFSET))(a1, a2);
		}

		static ::System::Boolean EJJIHPKCOFO(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + DJPNKIANBFK_EJJIHPKCOFO_OFFSET))(a1);
		}

	};
