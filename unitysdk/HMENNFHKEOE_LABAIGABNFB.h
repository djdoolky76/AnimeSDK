#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GBINEPNHKKO;
class IDGDIFDMIDP;
namespace System { class Action; }

#define HMENNFHKEOE_LABAIGABNFB_EHKNHEPCOIE_OFFSET UNITYSDK_OFFSET(0x15375CB0)
#define HMENNFHKEOE_LABAIGABNFB_LKCNPCLHHBA_OFFSET UNITYSDK_OFFSET(0x15375F60)
#define HMENNFHKEOE_LABAIGABNFB__CTOR_OFFSET UNITYSDK_OFFSET(0x15375CA0)

inline static constexpr unsigned int HMENNFHKEOE_LABAIGABNFB_TypeDefinitionIndex = 53324;

class HMENNFHKEOE_LABAIGABNFB : public ::System::Object
{
public:
	::System::Action* DLMJCFBENGB; // 0x10
	::System::Action* KHBPIEDMNNM; // 0x18
	::GBINEPNHKKO* GGPHLCMFNBH; // 0x20
	::IDGDIFDMIDP* FHMLAGEOHBL; // 0x28
	::System::UInt32 EOBAOEKEFHA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_LABAIGABNFB__CTOR_OFFSET))(this);
	}

	::System::Void EHKNHEPCOIE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_LABAIGABNFB_EHKNHEPCOIE_OFFSET))(this);
	}

	::System::Void LKCNPCLHHBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_LABAIGABNFB_LKCNPCLHHBA_OFFSET))(this);
	}
};
