#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define APDMIIEDMLI_CFHOMFLPNNO_CTOR_OFFSET UNITYSDK_OFFSET(0x15BA7070)

	class APDMIIEDMLI_CFHOMFLPNNO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APDMIIEDMLI_CFHOMFLPNNO_CTOR_OFFSET))(this);
		}

	};
