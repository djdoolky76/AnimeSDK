#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityFXColorCorrection; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HBLFGIOFOHD_CREATEOP_OFFSET UNITYSDK_OFFSET(0x16CE0570)
#define HBLFGIOFOHD__CTOR_OFFSET UNITYSDK_OFFSET(0x16CE04E0)

inline static constexpr unsigned int HBLFGIOFOHD_TypeDefinitionIndex = 66816;

class HBLFGIOFOHD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBLFGIOFOHD__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXColorCorrection*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXColorCorrection*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBLFGIOFOHD_CREATEOP_OFFSET))(this);
	}
};
