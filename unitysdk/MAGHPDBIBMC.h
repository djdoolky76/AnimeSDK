#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MAGHPDBIBMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE4860)

inline static constexpr unsigned int MAGHPDBIBMC_TypeDefinitionIndex = 44705;

	class MAGHPDBIBMC : public ::System::Object
	{
	public:
		::System::String* NMMKDFFHOLL; // 0x10
		::System::Single OCOANKJLLCK; // 0x18
		::System::Single NDDCBCPDAJE; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGHPDBIBMC_CTOR_OFFSET))(this);
		}

	};
