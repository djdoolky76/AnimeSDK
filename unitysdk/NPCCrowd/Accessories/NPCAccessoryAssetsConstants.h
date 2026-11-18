#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYASSETSCONSTANTS__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2D18C0)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryAssetsConstants_TypeDefinitionIndex = 50357;

	class NPCAccessoryAssetsConstants : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_NPC_ACCESSORY_MAP_CONFIG_SPLIT_ROOT_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryAssetsConstants_TypeDefinitionIndex)->GetStaticField(0x35F90);
		}
		static ::System::String** StaticGet_MESH_ASSETS_PACKED_DATA_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryAssetsConstants_TypeDefinitionIndex)->GetStaticField(0x35F98);
		}
		static ::System::String** StaticGet_NPC_ACCESSORY_MAP_CONFIG_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryAssetsConstants_TypeDefinitionIndex)->GetStaticField(0x35FA0);
		}
		static ::UnityEngine::Vector3* StaticGet_CULL_OFFSET()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryAssetsConstants_TypeDefinitionIndex)->GetStaticField(0xC040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYASSETSCONSTANTS__CCTOR_OFFSET))();
		}
	};
}
