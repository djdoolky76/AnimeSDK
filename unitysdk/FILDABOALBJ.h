#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FILDABOALBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1980AB80)

inline static constexpr unsigned int FILDABOALBJ_TypeDefinitionIndex = 84057;

	class FILDABOALBJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILDABOALBJ_CTOR_OFFSET))(this);
		}

	};
