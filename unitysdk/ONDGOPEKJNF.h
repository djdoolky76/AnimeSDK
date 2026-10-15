#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ONDGOPEKJNF_CTOR_OFFSET UNITYSDK_OFFSET(0xBF4F5F0)

inline static constexpr unsigned int ONDGOPEKJNF_TypeDefinitionIndex = 80197;

	class ONDGOPEKJNF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONDGOPEKJNF_CTOR_OFFSET))(this);
		}

	};
