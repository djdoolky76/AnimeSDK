#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IIMEBHGNNKP_DCLPJCGDKFG_CTOR_OFFSET UNITYSDK_OFFSET(0x193E2F80)

inline static constexpr unsigned int IIMEBHGNNKP_DCLPJCGDKFG_TypeDefinitionIndex = 81543;

	class IIMEBHGNNKP_DCLPJCGDKFG : public ::System::Object
	{
	public:
		::System::Single OBLBJMDBOLJ; // 0x10
		::System::Boolean IOBJFEJFLJP; // 0x14
		::System::Byte _padding0[0x3];
		::System::Single PMHMEGEJDGP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_DCLPJCGDKFG_CTOR_OFFSET))(this);
		}

	};
