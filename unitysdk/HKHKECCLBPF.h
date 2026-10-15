#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HKHKECCLBPF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAECBC0)

	class HKHKECCLBPF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHKECCLBPF_CTOR_OFFSET))(this);
		}

	};
