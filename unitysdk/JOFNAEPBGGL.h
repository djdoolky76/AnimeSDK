#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityCausticsEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JOFNAEPBGGL_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1C373560)
#define JOFNAEPBGGL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3734D0)

inline static constexpr unsigned int JOFNAEPBGGL_TypeDefinitionIndex = 44970;

class JOFNAEPBGGL
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFNAEPBGGL__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCausticsEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCausticsEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFNAEPBGGL_CREATEOP_OFFSET))(this);
	}
};
