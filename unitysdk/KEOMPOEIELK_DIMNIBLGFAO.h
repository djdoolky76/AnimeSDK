#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KEOMPOEIELK_DIMNIBLGFAO_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5E4B20)
#define KEOMPOEIELK_DIMNIBLGFAO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B5E4B30)

inline static constexpr unsigned int KEOMPOEIELK_DIMNIBLGFAO_TypeDefinitionIndex = 61944;

	class KEOMPOEIELK_DIMNIBLGFAO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEOMPOEIELK_DIMNIBLGFAO_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEOMPOEIELK_DIMNIBLGFAO_DISPOSE_OFFSET))(this);
		}

	};
