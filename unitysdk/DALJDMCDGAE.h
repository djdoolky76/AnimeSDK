#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityTonemappingEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DALJDMCDGAE_CREATEOP_OFFSET UNITYSDK_OFFSET(0x15A28A20)
#define DALJDMCDGAE__CTOR_OFFSET UNITYSDK_OFFSET(0x15A28990)

inline static constexpr unsigned int DALJDMCDGAE_TypeDefinitionIndex = 58534;

class DALJDMCDGAE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DALJDMCDGAE__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityTonemappingEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityTonemappingEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DALJDMCDGAE_CREATEOP_OFFSET))(this);
	}
};
