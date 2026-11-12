#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OELNGECCLKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB4E670)

inline static constexpr unsigned int OELNGECCLKC_TypeDefinitionIndex = 44259;

	class OELNGECCLKC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OELNGECCLKC_CTOR_OFFSET))(this);
		}

	};
