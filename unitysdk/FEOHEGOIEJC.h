#pragma once
#include "unitysdk/unitysdk.h"

#define FEOHEGOIEJC_CTOR_OFFSET UNITYSDK_OFFSET(0x1572D7F0)
#define FEOHEGOIEJC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1572D700)

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
