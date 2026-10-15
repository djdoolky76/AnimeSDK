#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BOFJHGFAJBN_CTOR_OFFSET UNITYSDK_OFFSET(0xC18E4F0)

inline static constexpr unsigned int BOFJHGFAJBN_TypeDefinitionIndex = 49648;

	class BOFJHGFAJBN : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFJHGFAJBN_CTOR_OFFSET))(this);
		}

	};
