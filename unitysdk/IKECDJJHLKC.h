#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityUnsharpMaskEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IKECDJJHLKC_CREATEOP_OFFSET UNITYSDK_OFFSET(0xF877680)
#define IKECDJJHLKC__CTOR_OFFSET UNITYSDK_OFFSET(0xF8775F0)

inline static constexpr unsigned int IKECDJJHLKC_TypeDefinitionIndex = 67143;

class IKECDJJHLKC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKECDJJHLKC__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityUnsharpMaskEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityUnsharpMaskEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKECDJJHLKC_CREATEOP_OFFSET))(this);
	}
};
