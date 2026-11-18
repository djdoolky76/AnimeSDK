#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityColorAdjustment; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EGPOFBNLKFF_CREATEOP_OFFSET UNITYSDK_OFFSET(0x13549310)
#define EGPOFBNLKFF__CTOR_OFFSET UNITYSDK_OFFSET(0x13549280)

inline static constexpr unsigned int EGPOFBNLKFF_TypeDefinitionIndex = 54407;

class EGPOFBNLKFF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPOFBNLKFF__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorAdjustment*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorAdjustment*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPOFBNLKFF_CREATEOP_OFFSET))(this);
	}
};
