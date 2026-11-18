#pragma once
#include "unitysdk/unitysdk.h"

class NPCCrowdMaterialOverrideParamsInfo;
namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPCCROWD_NPCCROWDACCITEMOVERRIDECONFIGMODULE_CREATEOP_OFFSET UNITYSDK_OFFSET(0xEEAF160)
#define NPCCROWD_NPCCROWDACCITEMOVERRIDECONFIGMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xEEAF0D0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdAccItemOverrideConfigModule_TypeDefinitionIndex = 61974;

	class NPCCrowdAccItemOverrideConfigModule
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDACCITEMOVERRIDECONFIGMODULE__CTOR_OFFSET))(this);
		}

		::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowdMaterialOverrideParamsInfo*>*>* CreateOp()
		{
			return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowdMaterialOverrideParamsInfo*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDACCITEMOVERRIDECONFIGMODULE_CREATEOP_OFFSET))(this);
		}
	};
}
