#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityLightingEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KIDHCDJNLDB_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1299C990)
#define KIDHCDJNLDB__CTOR_OFFSET UNITYSDK_OFFSET(0x1299C900)

inline static constexpr unsigned int KIDHCDJNLDB_TypeDefinitionIndex = 41584;

class KIDHCDJNLDB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDHCDJNLDB__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLightingEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLightingEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDHCDJNLDB_CREATEOP_OFFSET))(this);
	}
};
