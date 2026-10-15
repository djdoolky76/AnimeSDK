#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DMEPLLJBOAI_CTOR_OFFSET UNITYSDK_OFFSET(0xFEBDCF0)

	class DMEPLLJBOAI : public ::System::Object
	{
	public:
		// static const ::System::Object MMNALKJKAOG; // 0x0
		// static const ::System::Object MDDPHBNCNOE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEPLLJBOAI_CTOR_OFFSET))(this);
		}

	};
