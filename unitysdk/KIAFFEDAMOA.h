#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityAutoExposureEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KIAFFEDAMOA_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1299B990)
#define KIAFFEDAMOA__CTOR_OFFSET UNITYSDK_OFFSET(0x1299B900)

inline static constexpr unsigned int KIAFFEDAMOA_TypeDefinitionIndex = 72460;

class KIAFFEDAMOA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAFFEDAMOA__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAutoExposureEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAutoExposureEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAFFEDAMOA_CREATEOP_OFFSET))(this);
	}
};
