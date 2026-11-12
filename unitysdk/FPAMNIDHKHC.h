#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FPAMNIDHKHC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC35B00)

inline static constexpr unsigned int FPAMNIDHKHC_TypeDefinitionIndex = 43964;

	class FPAMNIDHKHC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPAMNIDHKHC_CTOR_OFFSET))(this);
		}

	};
