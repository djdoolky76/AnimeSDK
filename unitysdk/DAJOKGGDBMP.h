#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define DAJOKGGDBMP_CTOR_OFFSET UNITYSDK_OFFSET(0xDFC5050)

	class DAJOKGGDBMP : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAJOKGGDBMP_CTOR_OFFSET))(this);
		}

	};
