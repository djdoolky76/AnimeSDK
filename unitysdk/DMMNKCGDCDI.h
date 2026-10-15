#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DMMNKCGDCDI_CTOR_OFFSET UNITYSDK_OFFSET(0xFEC5E70)

	class DMMNKCGDCDI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMNKCGDCDI_CTOR_OFFSET))(this);
		}

	};
