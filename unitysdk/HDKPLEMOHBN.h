#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HDKPLEMOHBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CABDD90)

	class HDKPLEMOHBN : public ::System::Object
	{
	public:
		::System::Single IDKONBFPBLH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKPLEMOHBN_CTOR_OFFSET))(this);
		}

	};
