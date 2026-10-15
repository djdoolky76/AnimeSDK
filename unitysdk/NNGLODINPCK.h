#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NNGLODINPCK_CTOR_OFFSET UNITYSDK_OFFSET(0xBCA1C40)

inline static constexpr unsigned int NNGLODINPCK_TypeDefinitionIndex = 73835;

	class NNGLODINPCK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGLODINPCK_CTOR_OFFSET))(this);
		}

	};
