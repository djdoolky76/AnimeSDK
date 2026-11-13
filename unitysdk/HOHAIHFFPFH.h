#pragma once
#include "unitysdk/unitysdk.h"

#define HOHAIHFFPFH_CTOR_OFFSET UNITYSDK_OFFSET(0x1AF23D70)

inline static constexpr unsigned int HOHAIHFFPFH_TypeDefinitionIndex = 76139;

	class HOHAIHFFPFH
	{
	public:
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOHAIHFFPFH_CTOR_OFFSET))(this, a1);
		}

	};
