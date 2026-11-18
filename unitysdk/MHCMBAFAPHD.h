#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityShadowsMidtonesHighlightsEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MHCMBAFAPHD_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1A654B10)
#define MHCMBAFAPHD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A654A80)

inline static constexpr unsigned int MHCMBAFAPHD_TypeDefinitionIndex = 44330;

class MHCMBAFAPHD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHCMBAFAPHD__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityShadowsMidtonesHighlightsEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityShadowsMidtonesHighlightsEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHCMBAFAPHD_CREATEOP_OFFSET))(this);
	}
};
