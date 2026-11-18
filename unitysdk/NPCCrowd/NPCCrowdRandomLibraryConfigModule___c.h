#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNpcAvatarGenericParams.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class TextAsset; }

#define NPCCROWD_NPCCROWDRANDOMLIBRARYCONFIGMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE0D3DA0)
#define NPCCROWD_NPCCROWDRANDOMLIBRARYCONFIGMODULE___C__CREATEOP_B__1_0_OFFSET UNITYSDK_OFFSET(0xE0D3DF0)
#define NPCCROWD_NPCCROWDRANDOMLIBRARYCONFIGMODULE___C__CREATEOP_B__1_1_OFFSET UNITYSDK_OFFSET(0xE0D3F30)
#define NPCCROWD_NPCCROWDRANDOMLIBRARYCONFIGMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE0D3DE0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdRandomLibraryConfigModule___c_TypeDefinitionIndex = 90530;

	class NPCCrowdRandomLibraryConfigModule___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdRandomLibraryConfigModule___c_TypeDefinitionIndex)->GetStaticField(0x39C50);
		}
		static ::System::Func_2<::UnityEngine::TextAsset*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::FNpcAvatarGenericParams>*>*>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::UnityEngine::TextAsset*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::FNpcAvatarGenericParams>*>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdRandomLibraryConfigModule___c_TypeDefinitionIndex)->GetStaticField(0x39C58);
		}
		static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::FNpcAvatarGenericParams>*>*>*>** StaticGet___9__1_0()
		{
			return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::FNpcAvatarGenericParams>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdRandomLibraryConfigModule___c_TypeDefinitionIndex)->GetStaticField(0x39C60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDRANDOMLIBRARYCONFIGMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDRANDOMLIBRARYCONFIGMODULE___C__CTOR_OFFSET))(this);
		}

		::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::FNpcAvatarGenericParams>*>*>* _CreateOp_b__1_0()
		{
			return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::FNpcAvatarGenericParams>*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDRANDOMLIBRARYCONFIGMODULE___C__CREATEOP_B__1_0_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::FNpcAvatarGenericParams>*>* _CreateOp_b__1_1(::UnityEngine::TextAsset* asset)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::FNpcAvatarGenericParams>*>*(*)(::PVOID, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDRANDOMLIBRARYCONFIGMODULE___C__CREATEOP_B__1_1_OFFSET))(this, asset);
		}
	};
}
