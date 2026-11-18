#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityDepthOfFieldEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOEPOGMMFKD_CREATEOP_OFFSET UNITYSDK_OFFSET(0x156CF270)
#define FOEPOGMMFKD__CTOR_OFFSET UNITYSDK_OFFSET(0x156CF1E0)

inline static constexpr unsigned int FOEPOGMMFKD_TypeDefinitionIndex = 57659;

class FOEPOGMMFKD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOEPOGMMFKD__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDepthOfFieldEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDepthOfFieldEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOEPOGMMFKD_CREATEOP_OFFSET))(this);
	}
};
