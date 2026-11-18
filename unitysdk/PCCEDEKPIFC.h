#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityGaussianBlurEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PCCEDEKPIFC_CREATEOP_OFFSET UNITYSDK_OFFSET(0x11B570F0)
#define PCCEDEKPIFC__CTOR_OFFSET UNITYSDK_OFFSET(0x11B57060)

inline static constexpr unsigned int PCCEDEKPIFC_TypeDefinitionIndex = 77689;

class PCCEDEKPIFC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCCEDEKPIFC__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityGaussianBlurEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityGaussianBlurEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCCEDEKPIFC_CREATEOP_OFFSET))(this);
	}
};
