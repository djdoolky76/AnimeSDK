#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CEPONMEPANA_CTOR_OFFSET UNITYSDK_OFFSET(0xD35F110)
#define CEPONMEPANA_DPNKCEEKDNG_OFFSET UNITYSDK_OFFSET(0xD35EF90)
#define CEPONMEPANA_IDPNJBFEGLK_OFFSET UNITYSDK_OFFSET(0xD35EFE0)
#define CEPONMEPANA_JMIAMKHPFJC_OFFSET UNITYSDK_OFFSET(0xD35F030)

inline static constexpr unsigned int CEPONMEPANA_TypeDefinitionIndex = 76973;

	class CEPONMEPANA : public ::System::Object
	{
	public:
		// static const ::System::String* COPMEJBBAAF; // 0x0
		// static const ::System::String* MJLNKLLINOD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEPONMEPANA_CTOR_OFFSET))(this);
		}

		::System::UInt32 DPNKCEEKDNG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEPONMEPANA_DPNKCEEKDNG_OFFSET))(this);
		}

		::System::UInt32 IDPNJBFEGLK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEPONMEPANA_IDPNJBFEGLK_OFFSET))(this);
		}

		::System::UInt32 JMIAMKHPFJC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEPONMEPANA_JMIAMKHPFJC_OFFSET))(this);
		}

	};
