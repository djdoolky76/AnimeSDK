#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define COJIPMEBGHG_CTOR_OFFSET UNITYSDK_OFFSET(0xDCB8610)

inline static constexpr unsigned int COJIPMEBGHG_TypeDefinitionIndex = 71163;

	class COJIPMEBGHG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COJIPMEBGHG_CTOR_OFFSET))(this);
		}

	};
