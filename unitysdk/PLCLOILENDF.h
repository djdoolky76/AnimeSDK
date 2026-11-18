#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBPFKHFACN.h"
#include "unitysdk/System/Object.h"

class IDGDIFDMIDP;

#define PLCLOILENDF_OLBKFIKFBAD_OFFSET UNITYSDK_OFFSET(0x178E8E50)
#define PLCLOILENDF__CTOR_OFFSET UNITYSDK_OFFSET(0x178E8E40)

inline static constexpr unsigned int PLCLOILENDF_TypeDefinitionIndex = 49442;

class PLCLOILENDF : public ::System::Object
{
public:
	::IDGDIFDMIDP* AFANJLABMBJ; // 0x10
	::System::Boolean FDDCIPEEPFM; // 0x18
	::System::Boolean FKGMECIECDM; // 0x19
	::System::Byte _padding0[0x2];
	::System::Int32 KAIGKMOAKEK; // 0x1C
	::AJBPFKHFACN DCLECHOIBOB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCLOILENDF__CTOR_OFFSET))(this);
	}

	::System::Boolean OLBKFIKFBAD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCLOILENDF_OLBKFIKFBAD_OFFSET))(this);
	}
};
