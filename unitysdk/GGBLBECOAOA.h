#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IPOILCLEDEE.h"
class FCOEMCEDLNL;
class GGBLBECOAOA;

#define GGBLBECOAOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E019C70)
#define GGBLBECOAOA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E019C80)
#define GGBLBECOAOA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E019BE0)

inline static constexpr unsigned int GGBLBECOAOA_TypeDefinitionIndex = 21427;

	class GGBLBECOAOA : public ::IPOILCLEDEE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBLBECOAOA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GGBLBECOAOA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GGBLBECOAOA*))((::PBYTE)hIl2Cpp + GGBLBECOAOA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GGBLBECOAOA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GGBLBECOAOA*))((::PBYTE)hIl2Cpp + GGBLBECOAOA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
