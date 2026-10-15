#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BPAMNCCFBFG_CTOR_OFFSET UNITYSDK_OFFSET(0xC19A1B0)

inline static constexpr unsigned int BPAMNCCFBFG_TypeDefinitionIndex = 81278;

	class BPAMNCCFBFG : public ::System::Object
	{
	public:
		::System::Boolean BHMGBPJCFBK; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPAMNCCFBFG_CTOR_OFFSET))(this);
		}

	};
