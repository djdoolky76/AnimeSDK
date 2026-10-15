#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BANDDFEHONE;

#define LFDHNLHJOCH_ABNMKAPKMGF_OFFSET UNITYSDK_OFFSET(0xB6676E0)

inline static constexpr unsigned int LFDHNLHJOCH_TypeDefinitionIndex = 72161;

	class LFDHNLHJOCH : public ::System::Object
	{
	public:
		static ::System::Boolean ABNMKAPKMGF(::BANDDFEHONE* a1, ::BANDDFEHONE* a2)
		{
			return ((::System::Boolean(*)(::BANDDFEHONE*, ::BANDDFEHONE*))((::PBYTE)hIl2Cpp + LFDHNLHJOCH_ABNMKAPKMGF_OFFSET))(a1, a2);
		}

	};
