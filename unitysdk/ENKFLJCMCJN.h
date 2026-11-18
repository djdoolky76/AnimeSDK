#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityAmplifyOcclusionEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ENKFLJCMCJN_CREATEOP_OFFSET UNITYSDK_OFFSET(0x11CBB750)
#define ENKFLJCMCJN__CTOR_OFFSET UNITYSDK_OFFSET(0x11CBB6C0)

inline static constexpr unsigned int ENKFLJCMCJN_TypeDefinitionIndex = 66393;

class ENKFLJCMCJN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENKFLJCMCJN__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAmplifyOcclusionEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAmplifyOcclusionEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENKFLJCMCJN_CREATEOP_OFFSET))(this);
	}
};
