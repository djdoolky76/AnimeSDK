#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KBNONEGEOMC_CTOR_OFFSET UNITYSDK_OFFSET(0xB323CF0)

	class KBNONEGEOMC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBNONEGEOMC_CTOR_OFFSET))(this);
		}

	};
