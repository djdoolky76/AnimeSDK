#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityVignette; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JLMIBIBPFDD_CREATEOP_OFFSET UNITYSDK_OFFSET(0x14FC2600)
#define JLMIBIBPFDD__CTOR_OFFSET UNITYSDK_OFFSET(0x14FC2570)

inline static constexpr unsigned int JLMIBIBPFDD_TypeDefinitionIndex = 60387;

class JLMIBIBPFDD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLMIBIBPFDD__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityVignette*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityVignette*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLMIBIBPFDD_CREATEOP_OFFSET))(this);
	}
};
