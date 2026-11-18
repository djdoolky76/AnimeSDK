#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GBINEPNHKKO;
class IDGDIFDMIDP;
namespace System { class Action; }

#define HMENNFHKEOE_BJCKAPFKHAL_AFIFJJNPJNN_OFFSET UNITYSDK_OFFSET(0x19E32AD0)
#define HMENNFHKEOE_BJCKAPFKHAL_EMKMPNKDOPF_OFFSET UNITYSDK_OFFSET(0x19E32940)
#define HMENNFHKEOE_BJCKAPFKHAL__CTOR_OFFSET UNITYSDK_OFFSET(0x19E32930)

inline static constexpr unsigned int HMENNFHKEOE_BJCKAPFKHAL_TypeDefinitionIndex = 53317;

class HMENNFHKEOE_BJCKAPFKHAL : public ::System::Object
{
public:
	::IDGDIFDMIDP* FHMLAGEOHBL; // 0x10
	::System::Action* DLMJCFBENGB; // 0x18
	::GBINEPNHKKO* GGPHLCMFNBH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_BJCKAPFKHAL__CTOR_OFFSET))(this);
	}

	::System::Void EMKMPNKDOPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_BJCKAPFKHAL_EMKMPNKDOPF_OFFSET))(this);
	}

	::System::Void AFIFJJNPJNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_BJCKAPFKHAL_AFIFJJNPJNN_OFFSET))(this);
	}
};
