#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PCMENEMPLGF;

#define PCMENEMPLGF_AFHDGLIOOBM_FDEIAGMKCGA_OFFSET UNITYSDK_OFFSET(0x18460D90)
#define PCMENEMPLGF_AFHDGLIOOBM__CTOR_OFFSET UNITYSDK_OFFSET(0x18460D80)

inline static constexpr unsigned int PCMENEMPLGF_AFHDGLIOOBM_TypeDefinitionIndex = 62838;

class PCMENEMPLGF_AFHDGLIOOBM : public ::System::Object
{
public:
	::PCMENEMPLGF* KLHPEBKNIFB; // 0x10
	::System::Int32 ECAFPALMHLI; // 0x18
	::System::Int32 KPBGGCDMDAA; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_AFHDGLIOOBM__CTOR_OFFSET))(this);
	}

	::System::Void FDEIAGMKCGA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_AFHDGLIOOBM_FDEIAGMKCGA_OFFSET))(this);
	}
};
