#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BFNNDJBDOCC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2B6700)

inline static constexpr unsigned int BFNNDJBDOCC_TypeDefinitionIndex = 44872;

	class BFNNDJBDOCC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFNNDJBDOCC_CTOR_OFFSET))(this);
		}

	};
