#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JPEPPDMLPLG_CTOR_OFFSET UNITYSDK_OFFSET(0xB2BC9C0)

	class JPEPPDMLPLG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEPPDMLPLG_CTOR_OFFSET))(this);
		}

	};
