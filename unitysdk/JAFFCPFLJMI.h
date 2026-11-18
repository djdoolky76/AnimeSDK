#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JAFFCPFLJMI_BBIPBIAGFGE_OFFSET UNITYSDK_OFFSET(0x1CEA3170)
#define JAFFCPFLJMI_BLFDGHBFAOA_OFFSET UNITYSDK_OFFSET(0x1CEA31B0)
#define JAFFCPFLJMI_CKOKHBOLJCF_OFFSET UNITYSDK_OFFSET(0x1CEA30F0)
#define JAFFCPFLJMI_NJAGPDDPGJM_OFFSET UNITYSDK_OFFSET(0x1CEA3130)
#define JAFFCPFLJMI_NKOJIKMEPBN_OFFSET UNITYSDK_OFFSET(0x1CE87840)
#define JAFFCPFLJMI__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEA31F0)

inline static constexpr unsigned int JAFFCPFLJMI_TypeDefinitionIndex = 34848;

class JAFFCPFLJMI : public ::System::Object
{
public:
	::System::Boolean IFNKODBCGIO; // 0x10
	::System::Boolean FILEILJKFLF; // 0x11

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAFFCPFLJMI__CTOR_OFFSET))(this);
	}

	::System::Boolean CKOKHBOLJCF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAFFCPFLJMI_CKOKHBOLJCF_OFFSET))(this);
	}

	::System::Void NJAGPDDPGJM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAFFCPFLJMI_NJAGPDDPGJM_OFFSET))(this);
	}

	::System::Void BBIPBIAGFGE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAFFCPFLJMI_BBIPBIAGFGE_OFFSET))(this);
	}

	::System::Boolean BLFDGHBFAOA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAFFCPFLJMI_BLFDGHBFAOA_OFFSET))(this);
	}

	::System::Void NKOJIKMEPBN(::System::Boolean MKMBPCGGPIN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JAFFCPFLJMI_NKOJIKMEPBN_OFFSET))(this, MKMBPCGGPIN);
	}
};
