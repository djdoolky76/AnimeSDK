#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PMENAJEGBJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9F6BB0)

inline static constexpr unsigned int PMENAJEGBJK_TypeDefinitionIndex = 43454;

	class PMENAJEGBJK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMENAJEGBJK_CTOR_OFFSET))(this);
		}

	};
