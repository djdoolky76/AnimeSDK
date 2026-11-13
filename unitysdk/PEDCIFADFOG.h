#pragma once
#include "unitysdk/unitysdk.h"

#define PEDCIFADFOG_CTOR_OFFSET UNITYSDK_OFFSET(0x104485D0)

inline static constexpr unsigned int PEDCIFADFOG_TypeDefinitionIndex = 76142;

	class PEDCIFADFOG
	{
	public:
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PEDCIFADFOG_CTOR_OFFSET))(this, a1);
		}

	};
