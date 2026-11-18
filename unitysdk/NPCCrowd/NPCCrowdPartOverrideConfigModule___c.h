#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NPCCrowdMaterialOverrideParamsInfo;
namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class TextAsset; }

#define NPCCROWD_NPCCROWDPARTOVERRIDECONFIGMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x106C8990)
#define NPCCROWD_NPCCROWDPARTOVERRIDECONFIGMODULE___C__CREATEOP_B__1_0_OFFSET UNITYSDK_OFFSET(0x106C89E0)
#define NPCCROWD_NPCCROWDPARTOVERRIDECONFIGMODULE___C__CREATEOP_B__1_1_OFFSET UNITYSDK_OFFSET(0x106C8B20)
#define NPCCROWD_NPCCROWDPARTOVERRIDECONFIGMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x106C89D0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdPartOverrideConfigModule___c_TypeDefinitionIndex = 58408;

	class NPCCrowdPartOverrideConfigModule___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowdMaterialOverrideParamsInfo*>*>*>** StaticGet___9__1_0()
		{
			return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowdMaterialOverrideParamsInfo*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdPartOverrideConfigModule___c_TypeDefinitionIndex)->GetStaticField(0x39C30);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdPartOverrideConfigModule___c_TypeDefinitionIndex)->GetStaticField(0x39C38);
		}
		static ::System::Func_2<::UnityEngine::TextAsset*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowdMaterialOverrideParamsInfo*>*>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::UnityEngine::TextAsset*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowdMaterialOverrideParamsInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdPartOverrideConfigModule___c_TypeDefinitionIndex)->GetStaticField(0x39C40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDPARTOVERRIDECONFIGMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDPARTOVERRIDECONFIGMODULE___C__CTOR_OFFSET))(this);
		}

		::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowdMaterialOverrideParamsInfo*>*>* _CreateOp_b__1_0()
		{
			return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowdMaterialOverrideParamsInfo*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDPARTOVERRIDECONFIGMODULE___C__CREATEOP_B__1_0_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowdMaterialOverrideParamsInfo*>* _CreateOp_b__1_1(::UnityEngine::TextAsset* asset)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowdMaterialOverrideParamsInfo*>*(*)(::PVOID, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDPARTOVERRIDECONFIGMODULE___C__CREATEOP_B__1_1_OFFSET))(this, asset);
		}
	};
}
