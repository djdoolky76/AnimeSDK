#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityCullingEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CECGNAHOBEK_CREATEOP_OFFSET UNITYSDK_OFFSET(0x199FB8F0)
#define CECGNAHOBEK__CTOR_OFFSET UNITYSDK_OFFSET(0x199FB860)

inline static constexpr unsigned int CECGNAHOBEK_TypeDefinitionIndex = 85942;

class CECGNAHOBEK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CECGNAHOBEK__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCullingEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCullingEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CECGNAHOBEK_CREATEOP_OFFSET))(this);
	}
};
