#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JGDLPLLAHAF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB94720)

	class JGDLPLLAHAF : public ::System::Object
	{
	public:
		::System::Boolean CAGCHKJHMPD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDLPLLAHAF_CTOR_OFFSET))(this);
		}

	};
