#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FCLGKGNNJOA_CTOR_OFFSET UNITYSDK_OFFSET(0x156CE1D0)

	class FCLGKGNNJOA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLGKGNNJOA_CTOR_OFFSET))(this);
		}

	};
