#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PJPHDHBAADE.h"

#define IMAPNJNDLAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CF21270)

	class IMAPNJNDLAA : public ::PJPHDHBAADE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMAPNJNDLAA_CTOR_OFFSET))(this);
		}

	};
