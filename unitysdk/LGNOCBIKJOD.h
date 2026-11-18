#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityColorLookupEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LGNOCBIKJOD_CREATEOP_OFFSET UNITYSDK_OFFSET(0x15DF8220)
#define LGNOCBIKJOD__CTOR_OFFSET UNITYSDK_OFFSET(0x15DF8190)

inline static constexpr unsigned int LGNOCBIKJOD_TypeDefinitionIndex = 53487;

class LGNOCBIKJOD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGNOCBIKJOD__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorLookupEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorLookupEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGNOCBIKJOD_CREATEOP_OFFSET))(this);
	}
};
