#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MMJEGEJEHHB_CTOR_OFFSET UNITYSDK_OFFSET(0xB9CDF50)
#define MMJEGEJEHHB_DCPOKPGGEMH_OFFSET UNITYSDK_OFFSET(0xB9CDED0)
#define MMJEGEJEHHB_FFCPMPCGEDC_OFFSET UNITYSDK_OFFSET(0xB9CDF10)

inline static constexpr unsigned int MMJEGEJEHHB_TypeDefinitionIndex = 61132;

	class MMJEGEJEHHB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJEGEJEHHB_CTOR_OFFSET))(this);
		}

		static ::System::Void DCPOKPGGEMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMJEGEJEHHB_DCPOKPGGEMH_OFFSET))();
		}

		static ::System::Void FFCPMPCGEDC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMJEGEJEHHB_FFCPMPCGEDC_OFFSET))();
		}

	};
