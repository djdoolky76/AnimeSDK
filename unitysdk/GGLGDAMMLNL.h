#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GGLGDAMMLNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA73970)

inline static constexpr unsigned int GGLGDAMMLNL_TypeDefinitionIndex = 42283;

	class GGLGDAMMLNL : public ::System::Object
	{
	public:
		::System::Boolean AHBKEFEJHMH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLGDAMMLNL_CTOR_OFFSET))(this);
		}

	};
