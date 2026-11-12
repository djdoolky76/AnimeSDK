#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/System/Object.h"

#define JFPMHAIENHJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB9A6700)
#define JFPMHAIENHJ_EIOOHNDIEMN_OFFSET UNITYSDK_OFFSET(0xB9A6670)

inline static constexpr unsigned int JFPMHAIENHJ_TypeDefinitionIndex = 83830;

	class JFPMHAIENHJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFPMHAIENHJ_CTOR_OFFSET))(this);
		}

		::RPG::CustomRP::Quality EIOOHNDIEMN()
		{
			return ((::RPG::CustomRP::Quality(*)(::PVOID))((::PBYTE)hIl2Cpp + JFPMHAIENHJ_EIOOHNDIEMN_OFFSET))(this);
		}

	};
