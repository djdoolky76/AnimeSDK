#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_SWRTPASS_SHADERIDS_CCTOR_OFFSET UNITYSDK_OFFSET(0x2074AC00)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int SWRTPass_ShaderIDs_TypeDefinitionIndex = 38800;

	class SWRTPass_ShaderIDs : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__LocalToWorlds()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x8CF0);
		}

		static ::System::Int32* StaticGet__Positions()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x8CF4);
		}

		static ::System::Int32* StaticGet__BlasIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x8CF8);
		}

		static ::System::Int32* StaticGet__CapturePosWS()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x8CFC);
		}

		static ::System::Int32* StaticGet__MainTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x8D00);
		}

		static ::System::Int32* StaticGet__Materials()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x8D04);
		}

		static ::System::Int32* StaticGet__SWRTComputeSize()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x8D08);
		}

		static ::System::Int32* StaticGet__BVHNodes8()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x8D0C);
		}

		static ::System::Int32* StaticGet__TriangleIndex8()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x8D10);
		}

		static ::System::Int32* StaticGet__SWRTComputeResultRW()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x8D14);
		}

		static ::System::Int32* StaticGet__NormalTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x8D18);
		}

		static ::System::Int32* StaticGet__WorldToLocals()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x8D1C);
		}

		static ::System::Int32* StaticGet__UVs()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x8D20);
		}

		static ::System::Int32* StaticGet__BlasOffsets8()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x8D24);
		}

		static ::System::Int32* StaticGet__RendererIndex8()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x8D28);
		}

		static ::System::Int32* StaticGet__Triangle8()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x8D2C);
		}

		static ::System::Int32* StaticGet__UVTransform()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x8D30);
		}

		static ::System::Int32* StaticGet__SWRTCameraPosWS()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x8D34);
		}

		static ::System::Int32* StaticGet__Indices()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x8D38);
		}

		static ::System::Int32* StaticGet__SWRTComputeResult()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x8D3C);
		}

		static ::System::Int32* StaticGet__Normals()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x8D40);
		}

		static ::System::Int32* StaticGet__AlbedoTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x8D44);
		}

		static ::System::Int32* StaticGet__SWRTCaptureDepth()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x8D48);
		}

		static ::System::Int32* StaticGet__Tangents()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x8D4C);
		}

		static ::System::Int32* StaticGet__CaptureNrmWS()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x8D50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_SHADERIDS_CCTOR_OFFSET))();
		}

	};
}
