#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MMJEGEJEHHB_CTOR_OFFSET UNITYSDK_OFFSET(0xC28F620)
#define MMJEGEJEHHB_DCPOKPGGEMH_OFFSET UNITYSDK_OFFSET(0xC28F5A0)
#define MMJEGEJEHHB_FFCPMPCGEDC_OFFSET UNITYSDK_OFFSET(0xC28F5E0)

inline static constexpr unsigned int MMJEGEJEHHB_TypeDefinitionIndex = 62517;

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
