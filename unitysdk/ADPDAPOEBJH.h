#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigCameraStory; }
namespace MoleMole::Config { class ConfigCameraStoryDatas; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ADPDAPOEBJH_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1420F090)
#define ADPDAPOEBJH_GGFCAIDIFHM_OFFSET UNITYSDK_OFFSET(0x1420F4D0)
#define ADPDAPOEBJH_LNHPMGCCOGL_OFFSET UNITYSDK_OFFSET(0x1420F1F0)
#define ADPDAPOEBJH__CTOR_OFFSET UNITYSDK_OFFSET(0x1420EFA0)

inline static constexpr unsigned int ADPDAPOEBJH_TypeDefinitionIndex = 83542;

class ADPDAPOEBJH
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraStory*>* OHKHPLCACPB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADPDAPOEBJH__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigCameraStoryDatas*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigCameraStoryDatas*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADPDAPOEBJH_CREATEOP_OFFSET))(this);
	}

	::System::Void LNHPMGCCOGL(::MoleMole::Config::ConfigCameraStoryDatas* LDHAKIMDKHB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraStoryDatas*))((::PBYTE)hIl2Cpp + ADPDAPOEBJH_LNHPMGCCOGL_OFFSET))(this, LDHAKIMDKHB);
	}

	::MoleMole::Config::ConfigCameraStory* GGFCAIDIFHM(::System::String* ANGLHCBLFNK)
	{
		return ((::MoleMole::Config::ConfigCameraStory*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ADPDAPOEBJH_GGFCAIDIFHM_OFFSET))(this, ANGLHCBLFNK);
	}
};
