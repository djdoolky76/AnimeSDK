#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LCALPEKOEEG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C90CDE0)

	class LCALPEKOEEG : public ::System::Object
	{
	public:
		::System::Single BGCCFFPEALM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCALPEKOEEG_CTOR_OFFSET))(this);
		}

	};
