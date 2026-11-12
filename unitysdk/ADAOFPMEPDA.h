#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ADAOFPMEPDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9F9630)

inline static constexpr unsigned int ADAOFPMEPDA_TypeDefinitionIndex = 43113;

	class ADAOFPMEPDA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADAOFPMEPDA_CTOR_OFFSET))(this);
		}

	};
