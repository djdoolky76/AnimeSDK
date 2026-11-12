#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FAHMFMMNIHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC26B30)

inline static constexpr unsigned int FAHMFMMNIHD_TypeDefinitionIndex = 43325;

	class FAHMFMMNIHD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHMFMMNIHD_CTOR_OFFSET))(this);
		}

	};
