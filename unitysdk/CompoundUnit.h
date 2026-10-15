#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define COMPOUNDUNIT_CTOR_OFFSET UNITYSDK_OFFSET(0xDFA1C00)

	class CompoundUnit : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPOUNDUNIT_CTOR_OFFSET))(this);
		}

	};
