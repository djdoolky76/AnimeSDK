#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MLJMOGJMJEB_CTOR_OFFSET UNITYSDK_OFFSET(0xB9B1DB0)

	class MLJMOGJMJEB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJMOGJMJEB_CTOR_OFFSET))(this);
		}

	};
