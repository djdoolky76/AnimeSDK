#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IOENJNFNEMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC48F40)

inline static constexpr unsigned int IOENJNFNEMB_TypeDefinitionIndex = 44876;

	class IOENJNFNEMB : public ::System::Object
	{
	public:
		::System::Int32 JCMHOLDHPPH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOENJNFNEMB_CTOR_OFFSET))(this);
		}

	};
