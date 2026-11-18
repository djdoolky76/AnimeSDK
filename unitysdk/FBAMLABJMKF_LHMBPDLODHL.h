#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IPMBELDBAJK_IOPBIONFEGA.h"
#include "unitysdk/System/Object.h"

class AIKGHHJKNCE;

#define FBAMLABJMKF_LHMBPDLODHL_PCJOJGMCKAN_OFFSET UNITYSDK_OFFSET(0xBB317D0)
#define FBAMLABJMKF_LHMBPDLODHL__CTOR_OFFSET UNITYSDK_OFFSET(0xBB317C0)

inline static constexpr unsigned int FBAMLABJMKF_LHMBPDLODHL_TypeDefinitionIndex = 78140;

class FBAMLABJMKF_LHMBPDLODHL : public ::System::Object
{
public:
	::IPMBELDBAJK_IOPBIONFEGA HAJPEMEGPDO; // 0x10
	::System::Byte _padding0[0x4];
	::System::Boolean EGEGIMGMJHN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_LHMBPDLODHL__CTOR_OFFSET))(this);
	}

	::System::Boolean PCJOJGMCKAN(::AIKGHHJKNCE* JNDDJMAHNAI)
	{
		return ((::System::Boolean(*)(::PVOID, ::AIKGHHJKNCE*))((::PBYTE)hIl2Cpp + FBAMLABJMKF_LHMBPDLODHL_PCJOJGMCKAN_OFFSET))(this, JNDDJMAHNAI);
	}
};
