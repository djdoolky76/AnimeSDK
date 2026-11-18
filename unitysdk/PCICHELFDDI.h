#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityOldCRTEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PCICHELFDDI_CREATEOP_OFFSET UNITYSDK_OFFSET(0x11955990)
#define PCICHELFDDI__CTOR_OFFSET UNITYSDK_OFFSET(0x11955900)

inline static constexpr unsigned int PCICHELFDDI_TypeDefinitionIndex = 49414;

class PCICHELFDDI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCICHELFDDI__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityOldCRTEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityOldCRTEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCICHELFDDI_CREATEOP_OFFSET))(this);
	}
};
