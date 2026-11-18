#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GBINEPNHKKO;
class IDGDIFDMIDP;
namespace System { class Action; }

#define HMENNFHKEOE_FFNOIFCHEBB_KCCHJMGOPOI_OFFSET UNITYSDK_OFFSET(0x19E332B0)
#define HMENNFHKEOE_FFNOIFCHEBB_NPDGALLPFNH_OFFSET UNITYSDK_OFFSET(0x19E33560)
#define HMENNFHKEOE_FFNOIFCHEBB__CTOR_OFFSET UNITYSDK_OFFSET(0x19E332A0)

inline static constexpr unsigned int HMENNFHKEOE_FFNOIFCHEBB_TypeDefinitionIndex = 53332;

class HMENNFHKEOE_FFNOIFCHEBB : public ::System::Object
{
public:
	::GBINEPNHKKO* GGPHLCMFNBH; // 0x10
	::IDGDIFDMIDP* FHMLAGEOHBL; // 0x18
	::System::Action* DLMJCFBENGB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_FFNOIFCHEBB__CTOR_OFFSET))(this);
	}

	::System::Void KCCHJMGOPOI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_FFNOIFCHEBB_KCCHJMGOPOI_OFFSET))(this);
	}

	::System::Void NPDGALLPFNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_FFNOIFCHEBB_NPDGALLPFNH_OFFSET))(this);
	}
};
