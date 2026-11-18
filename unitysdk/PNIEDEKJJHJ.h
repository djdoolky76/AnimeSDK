#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityScreenSpacePlanarReflectionEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PNIEDEKJJHJ_CREATEOP_OFFSET UNITYSDK_OFFSET(0x150E19C0)
#define PNIEDEKJJHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x150E1930)

inline static constexpr unsigned int PNIEDEKJJHJ_TypeDefinitionIndex = 39277;

class PNIEDEKJJHJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIEDEKJJHJ__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpacePlanarReflectionEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpacePlanarReflectionEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIEDEKJJHJ_CREATEOP_OFFSET))(this);
	}
};
