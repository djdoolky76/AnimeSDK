#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AGJKJHPHMOD_CTOR_OFFSET UNITYSDK_OFFSET(0xCF362E0)

	class AGJKJHPHMOD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJKJHPHMOD_CTOR_OFFSET))(this);
		}

	};
