#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define HMINHEAEFCL_CTOR_OFFSET UNITYSDK_OFFSET(0x15D83230)

	class HMINHEAEFCL : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMINHEAEFCL_CTOR_OFFSET))(this);
		}

	};
