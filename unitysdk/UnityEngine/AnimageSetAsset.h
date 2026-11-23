#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimageAssetBase.h"

namespace System { class String; }
namespace UnityEngine { class AnimageClipAsset; }

#define UNITYENGINE_ANIMAGESETASSET_A0EB2FBDF74573BE_OFFSET UNITYSDK_OFFSET(0x40FDE20)
#define UNITYENGINE_ANIMAGESETASSET_A578FF822B1EE8DC_OFFSET UNITYSDK_OFFSET(0x40FDDE0)
#define UNITYENGINE_ANIMAGESETASSET_E6708FC1206A8926_OFFSET UNITYSDK_OFFSET(0x40FDED0)
#define UNITYENGINE_ANIMAGESETASSET_EB411732C99E3152_OFFSET UNITYSDK_OFFSET(0x40FDF60)
#define UNITYENGINE_ANIMAGESETASSET_F8B8168B6DA67969_OFFSET UNITYSDK_OFFSET(0x40FDF10)
#define UNITYENGINE_ANIMAGESETASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x40FDFA0)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimageSetAsset_TypeDefinitionIndex = 21236;

	class AnimageSetAsset : public ::UnityEngine::AnimageAssetBase
	{
	public:
		static ::System::Void EB411732C99E3152(::UnityEngine::AnimageSetAsset* A993F89E4CDDB266)
		{
			return ((::System::Void(*)(::UnityEngine::AnimageSetAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGESETASSET_EB411732C99E3152_OFFSET))(A993F89E4CDDB266);
		}

		::UnityEngine::AnimageAssetBase* F8B8168B6DA67969(::System::String* BFE14E2EE26DFD73)
		{
			return ((::UnityEngine::AnimageAssetBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGESETASSET_F8B8168B6DA67969_OFFSET))(this, BFE14E2EE26DFD73);
		}

		::UnityEngine::AnimageClipAsset* A0EB2FBDF74573BE(::System::String* BFE14E2EE26DFD73)
		{
			return ((::UnityEngine::AnimageClipAsset*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGESETASSET_A0EB2FBDF74573BE_OFFSET))(this, BFE14E2EE26DFD73);
		}

		::Il2CppArray<::System::String*>* E6708FC1206A8926()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGESETASSET_E6708FC1206A8926_OFFSET))(this);
		}

		static ::UnityEngine::AnimageSetAsset* A578FF822B1EE8DC(::Il2CppArray<::UnityEngine::AnimageAssetBase*>* E1FBC06883AE1EA3)
		{
			return ((::UnityEngine::AnimageSetAsset*(*)(::Il2CppArray<::UnityEngine::AnimageAssetBase*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGESETASSET_A578FF822B1EE8DC_OFFSET))(E1FBC06883AE1EA3);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGESETASSET__CTOR_OFFSET))(this);
		}
	};
}
