#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityNapCapsuleAOLightingEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BLJMPHDDLJO_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1857C0F0)
#define BLJMPHDDLJO__CTOR_OFFSET UNITYSDK_OFFSET(0x1857C060)

inline static constexpr unsigned int BLJMPHDDLJO_TypeDefinitionIndex = 39602;

class BLJMPHDDLJO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJMPHDDLJO__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityNapCapsuleAOLightingEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityNapCapsuleAOLightingEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJMPHDDLJO_CREATEOP_OFFSET))(this);
	}
};
