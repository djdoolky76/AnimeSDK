#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityNapContactShadowEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LOOEONACANL_CREATEOP_OFFSET UNITYSDK_OFFSET(0x125A3930)
#define LOOEONACANL__CTOR_OFFSET UNITYSDK_OFFSET(0x125A38A0)

inline static constexpr unsigned int LOOEONACANL_TypeDefinitionIndex = 41622;

class LOOEONACANL
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOEONACANL__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityNapContactShadowEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityNapContactShadowEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOEONACANL_CREATEOP_OFFSET))(this);
	}
};
