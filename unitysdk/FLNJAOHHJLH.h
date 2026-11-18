#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityLiftGammaGainEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FLNJAOHHJLH_CREATEOP_OFFSET UNITYSDK_OFFSET(0x14ADFD60)
#define FLNJAOHHJLH__CTOR_OFFSET UNITYSDK_OFFSET(0x14ADFCD0)

inline static constexpr unsigned int FLNJAOHHJLH_TypeDefinitionIndex = 59859;

class FLNJAOHHJLH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLNJAOHHJLH__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLiftGammaGainEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLiftGammaGainEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLNJAOHHJLH_CREATEOP_OFFSET))(this);
	}
};
