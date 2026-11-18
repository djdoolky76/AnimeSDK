#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityRadialBlur; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BGLIMDMDFFF_CREATEOP_OFFSET UNITYSDK_OFFSET(0x128A7330)
#define BGLIMDMDFFF__CTOR_OFFSET UNITYSDK_OFFSET(0x128A72A0)

inline static constexpr unsigned int BGLIMDMDFFF_TypeDefinitionIndex = 47343;

class BGLIMDMDFFF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLIMDMDFFF__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityRadialBlur*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityRadialBlur*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLIMDMDFFF_CREATEOP_OFFSET))(this);
	}
};
