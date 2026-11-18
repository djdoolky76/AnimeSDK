#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityDistortionEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LOFCGAAHENO_CREATEOP_OFFSET UNITYSDK_OFFSET(0x12D45EA0)
#define LOFCGAAHENO__CTOR_OFFSET UNITYSDK_OFFSET(0x12D45E10)

inline static constexpr unsigned int LOFCGAAHENO_TypeDefinitionIndex = 76094;

class LOFCGAAHENO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFCGAAHENO__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDistortionEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDistortionEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFCGAAHENO_CREATEOP_OFFSET))(this);
	}
};
