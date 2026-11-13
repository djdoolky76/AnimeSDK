#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_CAPSULEAOPASS_SHADERIDS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1D2C80)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CapsuleAOPass_ShaderIDs_TypeDefinitionIndex = 38480;

	class CapsuleAOPass_ShaderIDs : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__TileSizeInHiZMipN()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7B90);
		}

		static ::System::Int32* StaticGet__Tile_Size()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7B94);
		}

		static ::System::Int32* StaticGet__OccluderListLookupTextureRW()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7B98);
		}

		static ::System::Int32* StaticGet__NumDynamicOccluders()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7B9C);
		}

		static ::System::Int32* StaticGet__DynamicOccluderBuffer()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7BA0);
		}

		static ::System::Int32* StaticGet__OccluderListPitch()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7BA4);
		}

		static ::System::Int32* StaticGet__OccluderListBufferRW()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7BA8);
		}

		static ::System::Int32* StaticGet__CapsuleAOColor()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7BAC);
		}

		static ::System::Int32* StaticGet__HiZMipLevel()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7BB0);
		}

		static ::System::Int32* StaticGet__InvProjectMatrix()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7BB4);
		}

		static ::System::Int32* StaticGet__ConeOcclusionTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7BB8);
		}

		static ::System::Int32* StaticGet__HizMinTex_TexelSize()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7BBC);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEAOPASS_SHADERIDS_CCTOR_OFFSET))();
		}

	};
}
