#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKFDNGOHNPC.h"

#define AMFMINDOONO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C89E1E0)
#define AMFMINDOONO_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1C89E060)

inline static constexpr unsigned int AMFMINDOONO_TypeDefinitionIndex = 42201;

	class AMFMINDOONO : public ::CKFDNGOHNPC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFMINDOONO_CTOR_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFMINDOONO_NPAFMEBNFOB_OFFSET))(this);
		}

	};
