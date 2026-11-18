#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityScreenSpaceReflectionEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JCOADBNEJNG_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1306EDC0)
#define JCOADBNEJNG__CTOR_OFFSET UNITYSDK_OFFSET(0x1306ED30)

inline static constexpr unsigned int JCOADBNEJNG_TypeDefinitionIndex = 51432;

class JCOADBNEJNG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCOADBNEJNG__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpaceReflectionEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpaceReflectionEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCOADBNEJNG_CREATEOP_OFFSET))(this);
	}
};
