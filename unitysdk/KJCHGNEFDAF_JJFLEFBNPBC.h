#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KJCHGNEFDAF;
namespace System { class Action; }

#define KJCHGNEFDAF_JJFLEFBNPBC_NEPHFBHIJIL_OFFSET UNITYSDK_OFFSET(0x15B940C0)
#define KJCHGNEFDAF_JJFLEFBNPBC__CTOR_OFFSET UNITYSDK_OFFSET(0x15B940B0)

inline static constexpr unsigned int KJCHGNEFDAF_JJFLEFBNPBC_TypeDefinitionIndex = 65792;

class KJCHGNEFDAF_JJFLEFBNPBC : public ::System::Object
{
public:
	::KJCHGNEFDAF* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCHGNEFDAF_JJFLEFBNPBC__CTOR_OFFSET))(this);
	}

	::System::Void NEPHFBHIJIL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCHGNEFDAF_JJFLEFBNPBC_NEPHFBHIJIL_OFFSET))(this);
	}
};
