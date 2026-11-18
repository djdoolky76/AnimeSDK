#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityFXComicDotEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FPLCBMOHADD_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1411A6D0)
#define FPLCBMOHADD__CTOR_OFFSET UNITYSDK_OFFSET(0x1411A640)

inline static constexpr unsigned int FPLCBMOHADD_TypeDefinitionIndex = 73375;

class FPLCBMOHADD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPLCBMOHADD__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXComicDotEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXComicDotEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPLCBMOHADD_CREATEOP_OFFSET))(this);
	}
};
