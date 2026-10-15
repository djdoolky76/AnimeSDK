#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NOLCFJNOKPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C79BA00)

inline static constexpr unsigned int NOLCFJNOKPC_TypeDefinitionIndex = 37337;

	class NOLCFJNOKPC : public ::System::Object
	{
	public:
		::System::UInt32 OOGKJGBFFCI; // 0x10
		::System::UInt32 KDMPKIPAIDJ; // 0x14
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NOLCFJNOKPC_CTOR_OFFSET))(this, a1, a2);
		}

	};
