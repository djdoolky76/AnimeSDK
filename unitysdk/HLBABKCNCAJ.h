#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntitySplitToningEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HLBABKCNCAJ_CREATEOP_OFFSET UNITYSDK_OFFSET(0x15DC1BB0)
#define HLBABKCNCAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15DC1B20)

inline static constexpr unsigned int HLBABKCNCAJ_TypeDefinitionIndex = 82283;

class HLBABKCNCAJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBABKCNCAJ__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntitySplitToningEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntitySplitToningEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBABKCNCAJ_CREATEOP_OFFSET))(this);
	}
};
