#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityCharacterVolumeProxyEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IMLIGFJIIJK_CREATEOP_OFFSET UNITYSDK_OFFSET(0x18710BC0)
#define IMLIGFJIIJK__CTOR_OFFSET UNITYSDK_OFFSET(0x18710B30)

inline static constexpr unsigned int IMLIGFJIIJK_TypeDefinitionIndex = 49611;

class IMLIGFJIIJK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMLIGFJIIJK__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCharacterVolumeProxyEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCharacterVolumeProxyEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMLIGFJIIJK_CREATEOP_OFFSET))(this);
	}
};
