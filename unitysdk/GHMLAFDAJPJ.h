#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAHCLJPMCIG;

#define GHMLAFDAJPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1A3CE680)
#define GHMLAFDAJPJ_GIGAEIEHKOA_OFFSET UNITYSDK_OFFSET(0x1A3CE750)
#define GHMLAFDAJPJ_KFCPNFHNGBO_OFFSET UNITYSDK_OFFSET(0x1A3CE6F0)

inline static constexpr unsigned int GHMLAFDAJPJ_TypeDefinitionIndex = 83606;

	class GHMLAFDAJPJ : public ::System::Object
	{
	public:
		::EAHCLJPMCIG* PJJIDEMDPAP; // 0x10
		::System::Void _ctor(::EAHCLJPMCIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAHCLJPMCIG*))((::PBYTE)hIl2Cpp + GHMLAFDAJPJ_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 KFCPNFHNGBO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMLAFDAJPJ_KFCPNFHNGBO_OFFSET))(this);
		}

		::System::Boolean GIGAEIEHKOA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMLAFDAJPJ_GIGAEIEHKOA_OFFSET))(this);
		}

	};
