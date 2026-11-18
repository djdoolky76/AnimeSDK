#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace NPCCrowd { class NPCModuleAvatarAssetsPackedInfo; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class TextAsset; }

#define NPCCROWD_NPCCROWDSCENEPACKEDCONFIGMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF159190)
#define NPCCROWD_NPCCROWDSCENEPACKEDCONFIGMODULE___C__CREATEOP_B__1_0_OFFSET UNITYSDK_OFFSET(0xF1591E0)
#define NPCCROWD_NPCCROWDSCENEPACKEDCONFIGMODULE___C__CREATEOP_B__1_1_OFFSET UNITYSDK_OFFSET(0xF159320)
#define NPCCROWD_NPCCROWDSCENEPACKEDCONFIGMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF1591D0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdScenePackedConfigModule___c_TypeDefinitionIndex = 45698;

	class NPCCrowdScenePackedConfigModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::TextAsset*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::NPCCrowd::NPCModuleAvatarAssetsPackedInfo*>*>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::UnityEngine::TextAsset*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::NPCCrowd::NPCModuleAvatarAssetsPackedInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdScenePackedConfigModule___c_TypeDefinitionIndex)->GetStaticField(0x47710);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdScenePackedConfigModule___c_TypeDefinitionIndex)->GetStaticField(0x47718);
		}
		static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::NPCCrowd::NPCModuleAvatarAssetsPackedInfo*>*>*>** StaticGet___9__1_0()
		{
			return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::NPCCrowd::NPCModuleAvatarAssetsPackedInfo*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdScenePackedConfigModule___c_TypeDefinitionIndex)->GetStaticField(0x47720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSCENEPACKEDCONFIGMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSCENEPACKEDCONFIGMODULE___C__CTOR_OFFSET))(this);
		}

		::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::NPCCrowd::NPCModuleAvatarAssetsPackedInfo*>*>* _CreateOp_b__1_0()
		{
			return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::NPCCrowd::NPCModuleAvatarAssetsPackedInfo*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSCENEPACKEDCONFIGMODULE___C__CREATEOP_B__1_0_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::NPCCrowd::NPCModuleAvatarAssetsPackedInfo*>* _CreateOp_b__1_1(::UnityEngine::TextAsset* asset)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::NPCCrowd::NPCModuleAvatarAssetsPackedInfo*>*(*)(::PVOID, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSCENEPACKEDCONFIGMODULE___C__CREATEOP_B__1_1_OFFSET))(this, asset);
		}
	};
}
