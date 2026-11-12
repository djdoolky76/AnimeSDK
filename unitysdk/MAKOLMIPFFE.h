#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEBPFBNCALB.h"

#define MAKOLMIPFFE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F1CA0)

inline static constexpr unsigned int MAKOLMIPFFE_TypeDefinitionIndex = 42834;

	class MAKOLMIPFFE : public ::JEBPFBNCALB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAKOLMIPFFE_CTOR_OFFSET))(this);
		}

	};
