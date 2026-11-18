#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityAvatarColorCorrection; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OHFPPFPBOJP_CREATEOP_OFFSET UNITYSDK_OFFSET(0x13A615A0)
#define OHFPPFPBOJP__CTOR_OFFSET UNITYSDK_OFFSET(0x13A61510)

inline static constexpr unsigned int OHFPPFPBOJP_TypeDefinitionIndex = 65380;

class OHFPPFPBOJP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHFPPFPBOJP__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAvatarColorCorrection*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAvatarColorCorrection*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHFPPFPBOJP_CREATEOP_OFFSET))(this);
	}
};
