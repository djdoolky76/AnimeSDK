#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityMonsterIgnisFatuusEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KGMJPPEOHHK_CREATEOP_OFFSET UNITYSDK_OFFSET(0x18625580)
#define KGMJPPEOHHK__CTOR_OFFSET UNITYSDK_OFFSET(0x186254F0)

inline static constexpr unsigned int KGMJPPEOHHK_TypeDefinitionIndex = 50961;

class KGMJPPEOHHK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMJPPEOHHK__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityMonsterIgnisFatuusEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityMonsterIgnisFatuusEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMJPPEOHHK_CREATEOP_OFFSET))(this);
	}
};
