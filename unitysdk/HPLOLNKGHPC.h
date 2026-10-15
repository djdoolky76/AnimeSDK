#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HPLOLNKGHPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAF7810)

	class HPLOLNKGHPC : public ::System::Object
	{
	public:
		::System::Boolean MMEPPAACPML; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLOLNKGHPC_CTOR_OFFSET))(this);
		}

	};
