#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityFXFogEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NOOJDBLLIPJ_CREATEOP_OFFSET UNITYSDK_OFFSET(0x131789C0)
#define NOOJDBLLIPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13178930)

inline static constexpr unsigned int NOOJDBLLIPJ_TypeDefinitionIndex = 66964;

class NOOJDBLLIPJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOOJDBLLIPJ__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXFogEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXFogEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOOJDBLLIPJ_CREATEOP_OFFSET))(this);
	}
};
