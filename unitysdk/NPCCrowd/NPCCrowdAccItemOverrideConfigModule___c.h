#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NPCCrowdMaterialOverrideParamsInfo;
namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class TextAsset; }

#define NPCCROWD_NPCCROWDACCITEMOVERRIDECONFIGMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x105FB2B0)
#define NPCCROWD_NPCCROWDACCITEMOVERRIDECONFIGMODULE___C__CREATEOP_B__1_0_OFFSET UNITYSDK_OFFSET(0x105FB300)
#define NPCCROWD_NPCCROWDACCITEMOVERRIDECONFIGMODULE___C__CREATEOP_B__1_1_OFFSET UNITYSDK_OFFSET(0x105FB440)
#define NPCCROWD_NPCCROWDACCITEMOVERRIDECONFIGMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x105FB2F0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdAccItemOverrideConfigModule___c_TypeDefinitionIndex = 61975;

	class NPCCrowdAccItemOverrideConfigModule___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAccItemOverrideConfigModule___c_TypeDefinitionIndex)->GetStaticField(0x457A0);
		}
		static ::System::Func_2<::UnityEngine::TextAsset*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowdMaterialOverrideParamsInfo*>*>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::UnityEngine::TextAsset*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowdMaterialOverrideParamsInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAccItemOverrideConfigModule___c_TypeDefinitionIndex)->GetStaticField(0x457A8);
		}
		static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowdMaterialOverrideParamsInfo*>*>*>** StaticGet___9__1_0()
		{
			return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowdMaterialOverrideParamsInfo*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAccItemOverrideConfigModule___c_TypeDefinitionIndex)->GetStaticField(0x457B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDACCITEMOVERRIDECONFIGMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDACCITEMOVERRIDECONFIGMODULE___C__CTOR_OFFSET))(this);
		}

		::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowdMaterialOverrideParamsInfo*>*>* _CreateOp_b__1_0()
		{
			return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowdMaterialOverrideParamsInfo*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDACCITEMOVERRIDECONFIGMODULE___C__CREATEOP_B__1_0_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowdMaterialOverrideParamsInfo*>* _CreateOp_b__1_1(::UnityEngine::TextAsset* asset)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowdMaterialOverrideParamsInfo*>*(*)(::PVOID, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDACCITEMOVERRIDECONFIGMODULE___C__CREATEOP_B__1_1_OFFSET))(this, asset);
		}
	};
}
