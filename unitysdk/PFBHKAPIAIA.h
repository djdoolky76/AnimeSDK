#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityDirectionalBlurEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PFBHKAPIAIA_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1A7EE680)
#define PFBHKAPIAIA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7EE5F0)

inline static constexpr unsigned int PFBHKAPIAIA_TypeDefinitionIndex = 79167;

class PFBHKAPIAIA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFBHKAPIAIA__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDirectionalBlurEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDirectionalBlurEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFBHKAPIAIA_CREATEOP_OFFSET))(this);
	}
};
