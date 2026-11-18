#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNpcAvatarGenericParams.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPCCROWD_NPCCROWDAVATARPARAMSCONFIGMODULE_CREATEOP_OFFSET UNITYSDK_OFFSET(0xE124210)
#define NPCCROWD_NPCCROWDAVATARPARAMSCONFIGMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xE124180)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdAvatarParamsConfigModule_TypeDefinitionIndex = 47477;

	class NPCCrowdAvatarParamsConfigModule
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDAVATARPARAMSCONFIGMODULE__CTOR_OFFSET))(this);
		}

		::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::FNpcAvatarGenericParams>*>* CreateOp()
		{
			return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::FNpcAvatarGenericParams>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDAVATARPARAMSCONFIGMODULE_CREATEOP_OFFSET))(this);
		}
	};
}
