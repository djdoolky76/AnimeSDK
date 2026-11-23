#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ComputePipelineStateCollectInfo.h"
#include "unitysdk/UnityEngine/GraphicsPipelineStateCollectInfo.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace ABC::Collections { template <typename T1, typename T2> class SerializableDictionary_2; }
namespace System { class String; }

#define ABC_PERFORMANCE_MISCS_PREWARMINFOASSET_AE1A0863005E0599_OFFSET UNITYSDK_OFFSET(0x2420290)
#define ABC_PERFORMANCE_MISCS_PREWARMINFOASSET_E061B4AB6CBE4993_OFFSET UNITYSDK_OFFSET(0x24205A0)
#define ABC_PERFORMANCE_MISCS_PREWARMINFOASSET_E6068422ED37BF08_OFFSET UNITYSDK_OFFSET(0x24204F0)
#define ABC_PERFORMANCE_MISCS_PREWARMINFOASSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x24205B0)
#define ABC_PERFORMANCE_MISCS_PREWARMINFOASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1F270C0)

namespace ABC::Performance::Miscs
{
	inline static constexpr unsigned int PrewarmInfoAsset_TypeDefinitionIndex = 4171;

	class PrewarmInfoAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::System::UInt64* StaticGet_A06951C71874CEEC()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(PrewarmInfoAsset_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::ABC::Collections::SerializableDictionary_2<::System::String*, ::System::UInt64>* ShaderToSoftPathHashMap; // 0x18
		::Il2CppArray<::UnityEngine::ComputePipelineStateCollectInfo>* ComputeState; // 0x20
		::Il2CppArray<::UnityEngine::GraphicsPipelineStateCollectInfo>* GraphicsState; // 0x28

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABC_PERFORMANCE_MISCS_PREWARMINFOASSET__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_PERFORMANCE_MISCS_PREWARMINFOASSET__CTOR_OFFSET))(this);
		}

		::System::Int32 E061B4AB6CBE4993()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_PERFORMANCE_MISCS_PREWARMINFOASSET_E061B4AB6CBE4993_OFFSET))(this);
		}

		::System::Int32 AE1A0863005E0599()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_PERFORMANCE_MISCS_PREWARMINFOASSET_AE1A0863005E0599_OFFSET))(this);
		}

		static ::System::Void E6068422ED37BF08()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABC_PERFORMANCE_MISCS_PREWARMINFOASSET_E6068422ED37BF08_OFFSET))();
		}
	};
}
