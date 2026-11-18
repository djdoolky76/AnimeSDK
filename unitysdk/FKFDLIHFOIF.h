#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityScreenSpaceAmbientOcclusionEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FKFDLIHFOIF_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1429CDE0)
#define FKFDLIHFOIF__CTOR_OFFSET UNITYSDK_OFFSET(0x1429CD50)

inline static constexpr unsigned int FKFDLIHFOIF_TypeDefinitionIndex = 91386;

class FKFDLIHFOIF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFDLIHFOIF__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpaceAmbientOcclusionEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpaceAmbientOcclusionEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFDLIHFOIF_CREATEOP_OFFSET))(this);
	}
};
