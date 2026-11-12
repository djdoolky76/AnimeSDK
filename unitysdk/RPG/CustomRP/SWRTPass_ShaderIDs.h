#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_SWRTPASS_SHADERIDS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE1C1C0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int SWRTPass_ShaderIDs_TypeDefinitionIndex = 38800;

	class SWRTPass_ShaderIDs : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__RendererIndex8()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x9C50);
		}

		static ::System::Int32* StaticGet__Normals()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x9C54);
		}

		static ::System::Int32* StaticGet__Materials()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x9C58);
		}

		static ::System::Int32* StaticGet__WorldToLocals()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x9C5C);
		}

		static ::System::Int32* StaticGet__SWRTComputeSize()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x9C60);
		}

		static ::System::Int32* StaticGet__SWRTCameraPosWS()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x9C64);
		}

		static ::System::Int32* StaticGet__Tangents()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x9C68);
		}

		static ::System::Int32* StaticGet__CaptureNrmWS()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x9C6C);
		}

		static ::System::Int32* StaticGet__BVHNodes8()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x9C70);
		}

		static ::System::Int32* StaticGet__Indices()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x9C74);
		}

		static ::System::Int32* StaticGet__UVs()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x9C78);
		}

		static ::System::Int32* StaticGet__SWRTCaptureDepth()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x9C7C);
		}

		static ::System::Int32* StaticGet__Positions()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x9C80);
		}

		static ::System::Int32* StaticGet__NormalTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x9C84);
		}

		static ::System::Int32* StaticGet__LocalToWorlds()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x9C88);
		}

		static ::System::Int32* StaticGet__BlasOffsets8()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x9C8C);
		}

		static ::System::Int32* StaticGet__MainTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x9C90);
		}

		static ::System::Int32* StaticGet__CapturePosWS()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x9C94);
		}

		static ::System::Int32* StaticGet__TriangleIndex8()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x9C98);
		}

		static ::System::Int32* StaticGet__AlbedoTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x9C9C);
		}

		static ::System::Int32* StaticGet__SWRTComputeResultRW()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x9CA0);
		}

		static ::System::Int32* StaticGet__Triangle8()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x9CA4);
		}

		static ::System::Int32* StaticGet__BlasIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x9CA8);
		}

		static ::System::Int32* StaticGet__SWRTComputeResult()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x9CAC);
		}

		static ::System::Int32* StaticGet__UVTransform()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x9CB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_SHADERIDS_CCTOR_OFFSET))();
		}

	};
}
