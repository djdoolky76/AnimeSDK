#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigLensDistortion; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NDJAMKOIPEK_CREATEOP_OFFSET UNITYSDK_OFFSET(0x13ED36F0)
#define NDJAMKOIPEK__CTOR_OFFSET UNITYSDK_OFFSET(0x13ED3660)

inline static constexpr unsigned int NDJAMKOIPEK_TypeDefinitionIndex = 69516;

class NDJAMKOIPEK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDJAMKOIPEK__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigLensDistortion*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigLensDistortion*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDJAMKOIPEK_CREATEOP_OFFSET))(this);
	}
};
