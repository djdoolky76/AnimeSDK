#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BPEKEIDBJFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC655B0)

	class BPEKEIDBJFD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPEKEIDBJFD_CTOR_OFFSET))(this);
		}

	};
