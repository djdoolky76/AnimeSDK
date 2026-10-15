#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EOKPMOBCPAC_CTOR_OFFSET UNITYSDK_OFFSET(0x155C4AA0)

	class EOKPMOBCPAC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOKPMOBCPAC_CTOR_OFFSET))(this);
		}

	};
