#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityVREffectsEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NKDLKBBPKDP_CREATEOP_OFFSET UNITYSDK_OFFSET(0x17293FE0)
#define NKDLKBBPKDP__CTOR_OFFSET UNITYSDK_OFFSET(0x17293F50)

inline static constexpr unsigned int NKDLKBBPKDP_TypeDefinitionIndex = 73660;

class NKDLKBBPKDP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDLKBBPKDP__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityVREffectsEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityVREffectsEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDLKBBPKDP_CREATEOP_OFFSET))(this);
	}
};
