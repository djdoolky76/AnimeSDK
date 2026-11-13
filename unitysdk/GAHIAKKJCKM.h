#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GAHIAKKJCKM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C213D50)

inline static constexpr unsigned int GAHIAKKJCKM_TypeDefinitionIndex = 44691;

	class GAHIAKKJCKM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAHIAKKJCKM_CTOR_OFFSET))(this);
		}

	};
