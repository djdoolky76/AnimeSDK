#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityMotionBlurEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KGHHMNOJENA_CREATEOP_OFFSET UNITYSDK_OFFSET(0x17908B80)
#define KGHHMNOJENA__CTOR_OFFSET UNITYSDK_OFFSET(0x17908AF0)

inline static constexpr unsigned int KGHHMNOJENA_TypeDefinitionIndex = 62965;

class KGHHMNOJENA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHHMNOJENA__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityMotionBlurEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityMotionBlurEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHHMNOJENA_CREATEOP_OFFSET))(this);
	}
};
