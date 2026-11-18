#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityLensDirtEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OKLIPAHPPJL_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1844B220)
#define OKLIPAHPPJL__CTOR_OFFSET UNITYSDK_OFFSET(0x1844B190)

inline static constexpr unsigned int OKLIPAHPPJL_TypeDefinitionIndex = 83815;

class OKLIPAHPPJL
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLIPAHPPJL__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLensDirtEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLensDirtEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLIPAHPPJL_CREATEOP_OFFSET))(this);
	}
};
