#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HBEEAFNPPEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAB5D90)

inline static constexpr unsigned int HBEEAFNPPEB_TypeDefinitionIndex = 42142;

	class HBEEAFNPPEB : public ::System::Object
	{
	public:
		::System::Single LOOBABBBBJN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBEEAFNPPEB_CTOR_OFFSET))(this);
		}

	};
