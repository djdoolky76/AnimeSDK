#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BOGGFILDAGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8C3710)

	class BOGGFILDAGL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGGFILDAGL_CTOR_OFFSET))(this);
		}

	};
