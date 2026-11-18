#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HCFDPABDIGE;
namespace System { class Action; }

#define HCFDPABDIGE_NEIPGFBALKM_NEPHFBHIJIL_OFFSET UNITYSDK_OFFSET(0x14D0D9C0)
#define HCFDPABDIGE_NEIPGFBALKM__CTOR_OFFSET UNITYSDK_OFFSET(0x14D0D9B0)

inline static constexpr unsigned int HCFDPABDIGE_NEIPGFBALKM_TypeDefinitionIndex = 61140;

class HCFDPABDIGE_NEIPGFBALKM : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::HCFDPABDIGE* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFDPABDIGE_NEIPGFBALKM__CTOR_OFFSET))(this);
	}

	::System::Void NEPHFBHIJIL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFDPABDIGE_NEIPGFBALKM_NEPHFBHIJIL_OFFSET))(this);
	}
};
