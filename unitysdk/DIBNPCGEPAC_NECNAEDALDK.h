#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DIBNPCGEPAC_NECNAEDALDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDAA190)

	class DIBNPCGEPAC_NECNAEDALDK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_NECNAEDALDK_CTOR_OFFSET))(this);
		}

	};
