#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BJKBAMNFLCA;
namespace System { class Action; }

#define BJKBAMNFLCA_LFLMCCDJALG_KAKCNKPIEPH_OFFSET UNITYSDK_OFFSET(0x14C48B50)
#define BJKBAMNFLCA_LFLMCCDJALG_MCIDGJBCFNL_OFFSET UNITYSDK_OFFSET(0x14C48B20)
#define BJKBAMNFLCA_LFLMCCDJALG_MHEDEGCOGCD_OFFSET UNITYSDK_OFFSET(0x14C491B0)
#define BJKBAMNFLCA_LFLMCCDJALG__CTOR_OFFSET UNITYSDK_OFFSET(0x14C48B10)

inline static constexpr unsigned int BJKBAMNFLCA_LFLMCCDJALG_TypeDefinitionIndex = 41566;

class BJKBAMNFLCA_LFLMCCDJALG : public ::System::Object
{
public:
	::System::Action* DLMJCFBENGB; // 0x10
	::System::Action* FFMGICPLKFB; // 0x18
	::System::Action* LLCFOGKAHFP; // 0x20
	::BJKBAMNFLCA* KLHPEBKNIFB; // 0x28
	::System::Int32 FKDLJCGEBNI; // 0x30
	::System::Boolean PEKKDIOFBKE; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJKBAMNFLCA_LFLMCCDJALG__CTOR_OFFSET))(this);
	}

	::System::Void MCIDGJBCFNL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJKBAMNFLCA_LFLMCCDJALG_MCIDGJBCFNL_OFFSET))(this);
	}

	::System::Void KAKCNKPIEPH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJKBAMNFLCA_LFLMCCDJALG_KAKCNKPIEPH_OFFSET))(this);
	}

	::System::Void MHEDEGCOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJKBAMNFLCA_LFLMCCDJALG_MHEDEGCOGCD_OFFSET))(this);
	}
};
