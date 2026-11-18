#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityColorCurvesEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PBDFAALPFDI_CREATEOP_OFFSET UNITYSDK_OFFSET(0x15F9E090)
#define PBDFAALPFDI__CTOR_OFFSET UNITYSDK_OFFSET(0x15F9E000)

inline static constexpr unsigned int PBDFAALPFDI_TypeDefinitionIndex = 84787;

class PBDFAALPFDI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDFAALPFDI__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorCurvesEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorCurvesEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDFAALPFDI_CREATEOP_OFFSET))(this);
	}
};
