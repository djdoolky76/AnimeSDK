#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AOJHHINKJHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1FE00)

inline static constexpr unsigned int AOJHHINKJHL_TypeDefinitionIndex = 44151;

	class AOJHHINKJHL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOJHHINKJHL_CTOR_OFFSET))(this);
		}

	};
