#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityCharacterIgnisFatuusEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IHJKJCCFBLE_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1A3A3C80)
#define IHJKJCCFBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3A3BF0)

inline static constexpr unsigned int IHJKJCCFBLE_TypeDefinitionIndex = 84989;

class IHJKJCCFBLE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJKJCCFBLE__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCharacterIgnisFatuusEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCharacterIgnisFatuusEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJKJCCFBLE_CREATEOP_OFFSET))(this);
	}
};
