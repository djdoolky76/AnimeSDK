#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define COJIPMEBGHG_CTOR_OFFSET UNITYSDK_OFFSET(0xE604DD0)

inline static constexpr unsigned int COJIPMEBGHG_TypeDefinitionIndex = 73146;

	class COJIPMEBGHG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COJIPMEBGHG_CTOR_OFFSET))(this);
		}

	};
