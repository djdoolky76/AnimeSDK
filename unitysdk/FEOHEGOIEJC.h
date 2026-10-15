#pragma once
#include "unitysdk/unitysdk.h"

#define FEOHEGOIEJC_CTOR_OFFSET UNITYSDK_OFFSET(0x15721F70)
#define FEOHEGOIEJC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15721E80)

inline static constexpr unsigned int FEOHEGOIEJC_TypeDefinitionIndex = 68597;

	class FEOHEGOIEJC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEOHEGOIEJC_CTOR_OFFSET))(this);
		}

		::System::Single Evaluate(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FEOHEGOIEJC_EVALUATE_OFFSET))(this, a1);
		}

	};
