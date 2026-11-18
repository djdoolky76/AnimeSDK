#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityChannelMixerEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HOECKJBGDPM_CREATEOP_OFFSET UNITYSDK_OFFSET(0x15B70A50)
#define HOECKJBGDPM__CTOR_OFFSET UNITYSDK_OFFSET(0x15B709C0)

inline static constexpr unsigned int HOECKJBGDPM_TypeDefinitionIndex = 87024;

class HOECKJBGDPM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOECKJBGDPM__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityChannelMixerEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityChannelMixerEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOECKJBGDPM_CREATEOP_OFFSET))(this);
	}
};
