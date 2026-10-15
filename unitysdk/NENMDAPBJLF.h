#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NENMDAPBJLF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C955D90)

	class NENMDAPBJLF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NENMDAPBJLF_CTOR_OFFSET))(this);
		}

	};
