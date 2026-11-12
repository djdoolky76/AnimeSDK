#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ICHBIDKOCGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCCBFA0)

inline static constexpr unsigned int ICHBIDKOCGB_TypeDefinitionIndex = 44707;

	class ICHBIDKOCGB : public ::System::Object
	{
	public:
		::System::Int32 JFLMDBHNLOK; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHBIDKOCGB_CTOR_OFFSET))(this);
		}

	};
