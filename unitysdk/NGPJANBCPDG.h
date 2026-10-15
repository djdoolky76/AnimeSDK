#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NGPJANBCPDG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C960DF0)

inline static constexpr unsigned int NGPJANBCPDG_TypeDefinitionIndex = 42389;

	class NGPJANBCPDG : public ::System::Object
	{
	public:
		::System::Single ECKNFNIPAKN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGPJANBCPDG_CTOR_OFFSET))(this);
		}

	};
