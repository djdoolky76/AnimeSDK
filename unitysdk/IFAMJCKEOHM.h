#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFAMJCKEOHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB0A3C0)

	class IFAMJCKEOHM : public ::System::Object
	{
	public:
		::System::Int32 GCJMFBKLGHI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAMJCKEOHM_CTOR_OFFSET))(this);
		}

	};
