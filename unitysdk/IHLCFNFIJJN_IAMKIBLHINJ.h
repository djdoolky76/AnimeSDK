#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IHLCFNFIJJN;
namespace System { class Action; }

#define IHLCFNFIJJN_IAMKIBLHINJ_KMCINMBPFDC_OFFSET UNITYSDK_OFFSET(0xEBD9520)
#define IHLCFNFIJJN_IAMKIBLHINJ_NEPHFBHIJIL_OFFSET UNITYSDK_OFFSET(0xEBD9650)
#define IHLCFNFIJJN_IAMKIBLHINJ__CTOR_OFFSET UNITYSDK_OFFSET(0xEBD9510)

inline static constexpr unsigned int IHLCFNFIJJN_IAMKIBLHINJ_TypeDefinitionIndex = 73098;

class IHLCFNFIJJN_IAMKIBLHINJ : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::IHLCFNFIJJN* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHLCFNFIJJN_IAMKIBLHINJ__CTOR_OFFSET))(this);
	}

	::System::Void KMCINMBPFDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHLCFNFIJJN_IAMKIBLHINJ_KMCINMBPFDC_OFFSET))(this);
	}

	::System::Void NEPHFBHIJIL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHLCFNFIJJN_IAMKIBLHINJ_NEPHFBHIJIL_OFFSET))(this);
	}
};
