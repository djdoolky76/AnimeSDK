#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MAAGBGMIOAL.h"
#include "unitysdk/System/Object.h"

#define NAEKFHMAHNL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C26B720)
#define NAEKFHMAHNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C26BA60)

inline static constexpr unsigned int NAEKFHMAHNL_TypeDefinitionIndex = 44340;

	class NAEKFHMAHNL : public ::System::Object
	{
	public:
		::MAAGBGMIOAL OEIBHLMDJKA; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEKFHMAHNL_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEKFHMAHNL_CLEAR_OFFSET))(this);
		}

	};
