#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/System/Object.h"

#define JFPMHAIENHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1665D0E0)
#define JFPMHAIENHJ_EIOOHNDIEMN_OFFSET UNITYSDK_OFFSET(0x1665D050)

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
