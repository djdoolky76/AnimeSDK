#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PBGKFAKMAPF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7B9830)

inline static constexpr unsigned int PBGKFAKMAPF_TypeDefinitionIndex = 36458;

	class PBGKFAKMAPF : public ::System::Object
	{
	public:
		::System::UInt32 ADFAKNJIAPJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBGKFAKMAPF_CTOR_OFFSET))(this);
		}

	};
