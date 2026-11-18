#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGCMADPALLB.h"
#include "unitysdk/OONNEJDIOPL.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define DPIHJJOKADN_BILHEFEDLKM_OFFSET UNITYSDK_OFFSET(0xF9A9000)
#define DPIHJJOKADN_CLOPNGMAMMA_OFFSET UNITYSDK_OFFSET(0xF9A8F20)
#define DPIHJJOKADN_EMHIGKJJJAG_OFFSET UNITYSDK_OFFSET(0xF9A8D00)
#define DPIHJJOKADN_MPGFGMGAHLO_OFFSET UNITYSDK_OFFSET(0xF9A8DE0)
#define DPIHJJOKADN__CTOR_OFFSET UNITYSDK_OFFSET(0xF9A90A0)

inline static constexpr unsigned int DPIHJJOKADN_TypeDefinitionIndex = 79121;

class DPIHJJOKADN : public ::System::Object
{
public:
	::System::UInt64 FCOMCHJLFOA; // 0x10
	::System::UInt64 DGCNAFMPKMA; // 0x18
	::OONNEJDIOPL GANNEFKHNAB; // 0x20
	::CGCMADPALLB OFODHMBHKEJ; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIHJJOKADN__CTOR_OFFSET))(this);
	}

	::System::String* EMHIGKJJJAG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIHJJOKADN_EMHIGKJJJAG_OFFSET))(this);
	}

	::System::String* MPGFGMGAHLO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIHJJOKADN_MPGFGMGAHLO_OFFSET))(this);
	}

	::System::String* CLOPNGMAMMA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIHJJOKADN_CLOPNGMAMMA_OFFSET))(this);
	}

	::System::String* BILHEFEDLKM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIHJJOKADN_BILHEFEDLKM_OFFSET))(this);
	}
};
