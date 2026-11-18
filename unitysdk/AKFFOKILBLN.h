#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityPartialBlurEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AKFFOKILBLN_CREATEOP_OFFSET UNITYSDK_OFFSET(0x17CDC3A0)
#define AKFFOKILBLN__CTOR_OFFSET UNITYSDK_OFFSET(0x17CDC310)

inline static constexpr unsigned int AKFFOKILBLN_TypeDefinitionIndex = 63891;

class AKFFOKILBLN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFFOKILBLN__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityPartialBlurEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityPartialBlurEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFFOKILBLN_CREATEOP_OFFSET))(this);
	}
};
