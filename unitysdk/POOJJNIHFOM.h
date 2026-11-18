#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityGlitchEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define POOJJNIHFOM_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1C671D30)
#define POOJJNIHFOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C671CA0)

inline static constexpr unsigned int POOJJNIHFOM_TypeDefinitionIndex = 55593;

class POOJJNIHFOM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POOJJNIHFOM__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityGlitchEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityGlitchEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + POOJJNIHFOM_CREATEOP_OFFSET))(this);
	}
};
