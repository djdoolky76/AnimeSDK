#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJIGMBHENE.h"

#define AEKAEOKFGLD_CTOR_OFFSET UNITYSDK_OFFSET(0xCEFFCB0)

	class AEKAEOKFGLD : public ::HDJIGMBHENE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKAEOKFGLD_CTOR_OFFSET))(this);
		}

	};
