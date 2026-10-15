#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJIGMBHENE.h"

#define MFFIEDJHFPO_CTOR_OFFSET UNITYSDK_OFFSET(0xB8F4830)

	class MFFIEDJHFPO : public ::HDJIGMBHENE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFIEDJHFPO_CTOR_OFFSET))(this);
		}

	};
