#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GBINEPNHKKO;
class IDGDIFDMIDP;
namespace System { class Action; }

#define HMENNFHKEOE_OLHPJIJLOND_HDLFLOOIEAO_OFFSET UNITYSDK_OFFSET(0x1470A090)
#define HMENNFHKEOE_OLHPJIJLOND__CTOR_OFFSET UNITYSDK_OFFSET(0x1470A080)

inline static constexpr unsigned int HMENNFHKEOE_OLHPJIJLOND_TypeDefinitionIndex = 53321;

class HMENNFHKEOE_OLHPJIJLOND : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::GBINEPNHKKO* GGPHLCMFNBH; // 0x18
	::IDGDIFDMIDP* FHMLAGEOHBL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_OLHPJIJLOND__CTOR_OFFSET))(this);
	}

	::System::Void HDLFLOOIEAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_OLHPJIJLOND_HDLFLOOIEAO_OFFSET))(this);
	}
};
