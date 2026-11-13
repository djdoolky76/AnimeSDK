#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PEFDNLKKOKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1044FA40)

inline static constexpr unsigned int PEFDNLKKOKH_TypeDefinitionIndex = 74956;

	class PEFDNLKKOKH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFDNLKKOKH_CTOR_OFFSET))(this);
		}

	};
