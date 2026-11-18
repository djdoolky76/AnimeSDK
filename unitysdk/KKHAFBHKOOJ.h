#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CIKKMBHKDAO.h"

namespace MoleMole::Config { class ConfigGachaPerformanceSendCmdWithoutParamsNode; }

#define KKHAFBHKOOJ_KOHABOKICHK_OFFSET UNITYSDK_OFFSET(0x129A05C0)
#define KKHAFBHKOOJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x129A05D0)
#define KKHAFBHKOOJ_PCEPOEIOFBN_OFFSET UNITYSDK_OFFSET(0x129A0680)
#define KKHAFBHKOOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x129A0810)

inline static constexpr unsigned int KKHAFBHKOOJ_TypeDefinitionIndex = 42875;

class KKHAFBHKOOJ : public ::CIKKMBHKDAO
{
public:
	::MoleMole::Config::ConfigGachaPerformanceSendCmdWithoutParamsNode* GKELJPDNGNP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHAFBHKOOJ__CTOR_OFFSET))(this);
	}

	::System::Boolean KOHABOKICHK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHAFBHKOOJ_KOHABOKICHK_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHAFBHKOOJ_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void PCEPOEIOFBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHAFBHKOOJ_PCEPOEIOFBN_OFFSET))(this);
	}
};
