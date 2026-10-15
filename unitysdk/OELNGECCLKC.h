#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OELNGECCLKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C95E630)

inline static constexpr unsigned int OELNGECCLKC_TypeDefinitionIndex = 43278;

	class OELNGECCLKC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OELNGECCLKC_CTOR_OFFSET))(this);
		}

	};
