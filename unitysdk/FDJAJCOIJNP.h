#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityWhiteBalanceEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FDJAJCOIJNP_CREATEOP_OFFSET UNITYSDK_OFFSET(0x156B7680)
#define FDJAJCOIJNP__CTOR_OFFSET UNITYSDK_OFFSET(0x156B75F0)

inline static constexpr unsigned int FDJAJCOIJNP_TypeDefinitionIndex = 65315;

class FDJAJCOIJNP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJAJCOIJNP__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityWhiteBalanceEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityWhiteBalanceEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJAJCOIJNP_CREATEOP_OFFSET))(this);
	}
};
