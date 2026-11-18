#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNpcAvatarGenericParams.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_NPCCROWDRANDOMLIBRARYCONFIGMODULE_CREATEOP_OFFSET UNITYSDK_OFFSET(0x106C8E00)
#define NPCCROWD_NPCCROWDRANDOMLIBRARYCONFIGMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x106C8D70)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdRandomLibraryConfigModule_TypeDefinitionIndex = 90529;

	class NPCCrowdRandomLibraryConfigModule
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDRANDOMLIBRARYCONFIGMODULE__CTOR_OFFSET))(this);
		}

		::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::FNpcAvatarGenericParams>*>*>* CreateOp()
		{
			return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::FNpcAvatarGenericParams>*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDRANDOMLIBRARYCONFIGMODULE_CREATEOP_OFFSET))(this);
		}
	};
}
