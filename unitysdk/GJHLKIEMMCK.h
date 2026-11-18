#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CIKKMBHKDAO.h"

namespace MoleMole::Config { class ConfigGachaPerformanceFadeOutEffectNode; }

#define GJHLKIEMMCK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x125D4FB0)
#define GJHLKIEMMCK_PCEPOEIOFBN_OFFSET UNITYSDK_OFFSET(0x125D5060)
#define GJHLKIEMMCK__CTOR_OFFSET UNITYSDK_OFFSET(0x125D5260)

inline static constexpr unsigned int GJHLKIEMMCK_TypeDefinitionIndex = 76635;

class GJHLKIEMMCK : public ::CIKKMBHKDAO
{
public:
	::MoleMole::Config::ConfigGachaPerformanceFadeOutEffectNode* GKELJPDNGNP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJHLKIEMMCK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJHLKIEMMCK_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void PCEPOEIOFBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJHLKIEMMCK_PCEPOEIOFBN_OFFSET))(this);
	}
};
