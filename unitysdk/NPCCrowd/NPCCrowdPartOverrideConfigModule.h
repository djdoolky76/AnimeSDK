#pragma once
#include "unitysdk/unitysdk.h"

class NPCCrowdMaterialOverrideParamsInfo;
namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPCCROWD_NPCCROWDPARTOVERRIDECONFIGMODULE_CREATEOP_OFFSET UNITYSDK_OFFSET(0x106C8870)
#define NPCCROWD_NPCCROWDPARTOVERRIDECONFIGMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x106C87E0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdPartOverrideConfigModule_TypeDefinitionIndex = 58407;

	class NPCCrowdPartOverrideConfigModule
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDPARTOVERRIDECONFIGMODULE__CTOR_OFFSET))(this);
		}

		::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowdMaterialOverrideParamsInfo*>*>* CreateOp()
		{
			return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowdMaterialOverrideParamsInfo*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDPARTOVERRIDECONFIGMODULE_CREATEOP_OFFSET))(this);
		}
	};
}
