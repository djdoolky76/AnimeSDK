#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityPaniniProjectionEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GDDFBJOHLCM_CREATEOP_OFFSET UNITYSDK_OFFSET(0x132498C0)
#define GDDFBJOHLCM__CTOR_OFFSET UNITYSDK_OFFSET(0x13249830)

inline static constexpr unsigned int GDDFBJOHLCM_TypeDefinitionIndex = 69650;

class GDDFBJOHLCM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDFBJOHLCM__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityPaniniProjectionEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityPaniniProjectionEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDFBJOHLCM_CREATEOP_OFFSET))(this);
	}
};
