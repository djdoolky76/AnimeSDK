#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviromentClip.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace EnviromentSystem { class EnviroSceneClip; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace RPG::Client { class IAssetOperation; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ReflectionProbe; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }

#define ENVIROMENTSYSTEM_ENVIROSCENECLIP_ABHELDHFMKO_OFFSET UNITYSDK_OFFSET(0x15610740)
#define ENVIROMENTSYSTEM_ENVIROSCENECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0x156100A0)
#define ENVIROMENTSYSTEM_ENVIROSCENECLIP_EDFHEKOALKJ_OFFSET UNITYSDK_OFFSET(0x156100E0)
#define ENVIROMENTSYSTEM_ENVIROSCENECLIP_LNNPIBBDGNM_OFFSET UNITYSDK_OFFSET(0x1560FFC0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroSceneClip_TypeDefinitionIndex = 49577;

	class EnviroSceneClip : public ::EnviromentSystem::EnviromentClip
	{
	public:
		::Il2CppArray<::System::Int32>* Idremap; // 0x30
		::Il2CppArray<::UnityEngine::Vector4>* BakedScaleOffset; // 0x38
		::Il2CppArray<::System::Int32>* BakedIDs; // 0x40
		::UnityEngine::Matrix4x4 BakedShadowMapIVP; // 0x48
		::System::Int32 BakedShadowMapSize; // 0x88
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Object*>* ReflectionProbeDatas; // 0x90
		::System::Collections::Generic::List_1<::System::Object*>* _GlobalMapsAdditional; // 0x98
		::System::Collections::Generic::List_1<::System::Int32>* _LightmapRefCount; // 0xA0
		::UnityEngine::Texture2D* _bakedShadowMapTex; // 0xA8
		::System::Collections::Generic::List_1<::RPG::Client::IAssetOperation*>* _AssetOptList; // 0xB0
		::Il2CppArray<::System::String*>* CubePath; // 0xB8
		::System::String* BakedShadowMapTexPath; // 0xC0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROSCENECLIP_CTOR_OFFSET))(this);
		}

		static ::EnviromentSystem::EnviroSceneClip* LNNPIBBDGNM(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::EnviromentSystem::EnviroSceneClip*(*)(::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROSCENECLIP_LNNPIBBDGNM_OFFSET))(a1);
		}

		::System::Void EDFHEKOALKJ(::Il2CppArray<::UnityEngine::Renderer*>* a1, ::Il2CppArray<::UnityEngine::ReflectionProbe*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*, ::Il2CppArray<::UnityEngine::ReflectionProbe*>*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROSCENECLIP_EDFHEKOALKJ_OFFSET))(this, a1, a2);
		}

		::System::Void ABHELDHFMKO(::Il2CppArray<::UnityEngine::ReflectionProbe*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::ReflectionProbe*>*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROSCENECLIP_ABHELDHFMKO_OFFSET))(this, a1);
		}

	};
}
