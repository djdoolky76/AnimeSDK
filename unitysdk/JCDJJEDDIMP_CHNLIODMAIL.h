#pragma once
#include "unitysdk/unitysdk.h"

#define JCDJJEDDIMP_CHNLIODMAIL_CTOR_OFFSET UNITYSDK_OFFSET(0x19A87260)

inline static constexpr unsigned int JCDJJEDDIMP_CHNLIODMAIL_TypeDefinitionIndex = 66120;

	class JCDJJEDDIMP_CHNLIODMAIL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_CHNLIODMAIL_CTOR_OFFSET))(this);
		}

	};
