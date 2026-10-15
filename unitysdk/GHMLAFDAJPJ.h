#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAHCLJPMCIG;

#define GHMLAFDAJPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15A2A200)
#define GHMLAFDAJPJ_GIGAEIEHKOA_OFFSET UNITYSDK_OFFSET(0x15A2A2D0)
#define GHMLAFDAJPJ_KFCPNFHNGBO_OFFSET UNITYSDK_OFFSET(0x15A2A270)

inline static constexpr unsigned int GHMLAFDAJPJ_TypeDefinitionIndex = 80827;

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
