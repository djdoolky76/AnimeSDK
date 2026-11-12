#pragma once
#include "unitysdk/unitysdk.h"

#define HOHAIHFFPFH_CTOR_OFFSET UNITYSDK_OFFSET(0x16D5A190)

inline static constexpr unsigned int HOHAIHFFPFH_TypeDefinitionIndex = 76140;

	class HOHAIHFFPFH
	{
	public:
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOHAIHFFPFH_CTOR_OFFSET))(this, a1);
		}

	};
