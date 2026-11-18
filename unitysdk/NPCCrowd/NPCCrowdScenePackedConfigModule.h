#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace NPCCrowd { class NPCModuleAvatarAssetsPackedInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPCCROWD_NPCCROWDSCENEPACKEDCONFIGMODULE_CREATEOP_OFFSET UNITYSDK_OFFSET(0x10DCC190)
#define NPCCROWD_NPCCROWDSCENEPACKEDCONFIGMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x10DCC100)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdScenePackedConfigModule_TypeDefinitionIndex = 45697;

	class NPCCrowdScenePackedConfigModule
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSCENEPACKEDCONFIGMODULE__CTOR_OFFSET))(this);
		}

		::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::NPCCrowd::NPCModuleAvatarAssetsPackedInfo*>*>* CreateOp()
		{
			return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::NPCCrowd::NPCModuleAvatarAssetsPackedInfo*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSCENEPACKEDCONFIGMODULE_CREATEOP_OFFSET))(this);
		}
	};
}
