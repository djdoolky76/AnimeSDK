#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define HDEFECLFLGG_BHBIOGIDJPF_CEFBJIDJPLK_OFFSET UNITYSDK_OFFSET(0x1493DA00)
#define HDEFECLFLGG_BHBIOGIDJPF__CTOR_OFFSET UNITYSDK_OFFSET(0x1493D9F0)

inline static constexpr unsigned int HDEFECLFLGG_BHBIOGIDJPF_TypeDefinitionIndex = 83705;

class HDEFECLFLGG_BHBIOGIDJPF : public ::System::Object
{
public:
	::HOCDHMEPPEG NHAKLJOOFPA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDEFECLFLGG_BHBIOGIDJPF__CTOR_OFFSET))(this);
	}

	::System::Void CEFBJIDJPLK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDEFECLFLGG_BHBIOGIDJPF_CEFBJIDJPLK_OFFSET))(this);
	}
};
