#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IBOOEKGCOPM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCCBCB0)

inline static constexpr unsigned int IBOOEKGCOPM_TypeDefinitionIndex = 43345;

	class IBOOEKGCOPM : public ::System::Object
	{
	public:
		::System::Int32 LADCLGKLDBP; // 0x10
		::System::Single HMBJNEIEIJK; // 0x14
		::System::Boolean PKJGDBGMFJL; // 0x18
		::System::Boolean JCOBPKGDNOI; // 0x19
		::System::Byte _padding0[0x2];
		::System::Int32 GJMJAKAMKLJ; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBOOEKGCOPM_CTOR_OFFSET))(this);
		}

	};
