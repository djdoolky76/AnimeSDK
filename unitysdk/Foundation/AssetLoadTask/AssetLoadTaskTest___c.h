#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class TextAsset; }

#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__CASE5_THENACTION_B__7_0_OFFSET UNITYSDK_OFFSET(0x1EE91020)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE90FD0)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE91010)

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int AssetLoadTaskTest___c_TypeDefinitionIndex = 8121;

	class AssetLoadTaskTest___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AssetLoadTaskTest___c_TypeDefinitionIndex)->GetStaticField(0x6620);
		}
		static ::System::Func_2<::UnityEngine::TextAsset*, ::System::String*>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::UnityEngine::TextAsset*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AssetLoadTaskTest___c_TypeDefinitionIndex)->GetStaticField(0x6628);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__CTOR_OFFSET))(this);
		}

		::System::String* _Case5_ThenAction_b__7_0(::UnityEngine::TextAsset* asset)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__CASE5_THENACTION_B__7_0_OFFSET))(this, asset);
		}
	};
}
