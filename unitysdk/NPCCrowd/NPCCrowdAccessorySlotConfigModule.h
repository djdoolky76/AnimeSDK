#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace NPCCrowd::Accessories { class NpcAccessoryItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPCCROWD_NPCCROWDACCESSORYSLOTCONFIGMODULE_CREATEOP_OFFSET UNITYSDK_OFFSET(0x10DCBFE0)
#define NPCCROWD_NPCCROWDACCESSORYSLOTCONFIGMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x10DCBF50)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdAccessorySlotConfigModule_TypeDefinitionIndex = 52496;

	class NPCCrowdAccessorySlotConfigModule
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDACCESSORYSLOTCONFIGMODULE__CTOR_OFFSET))(this);
		}

		::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::NPCCrowd::Accessories::NpcAccessoryItem*>*>* CreateOp()
		{
			return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::NPCCrowd::Accessories::NpcAccessoryItem*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDACCESSORYSLOTCONFIGMODULE_CREATEOP_OFFSET))(this);
		}
	};
}
