#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigChromaticAberration; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NLCBFJGMADM_CREATEOP_OFFSET UNITYSDK_OFFSET(0x114A7840)
#define NLCBFJGMADM__CTOR_OFFSET UNITYSDK_OFFSET(0x114A77B0)

inline static constexpr unsigned int NLCBFJGMADM_TypeDefinitionIndex = 74685;

class NLCBFJGMADM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCBFJGMADM__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigChromaticAberration*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigChromaticAberration*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCBFJGMADM_CREATEOP_OFFSET))(this);
	}
};
