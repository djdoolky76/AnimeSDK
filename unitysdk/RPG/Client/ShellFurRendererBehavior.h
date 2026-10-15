#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
namespace RPG::Client { class ShellFurRendererMonoPlugin; }
namespace System { class Random; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }

#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_AAENNFFBBGL_OFFSET UNITYSDK_OFFSET(0xE0BADF0)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xE0BA730)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_BAAJHOAAMIC_OFFSET UNITYSDK_OFFSET(0xE0BA7C0)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xE0BB360)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xE0BA650)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE0BB2F0)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xE0BAD60)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_EOOLBBIDBNN_OFFSET UNITYSDK_OFFSET(0xE0B9C00)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xE0BAD20)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_HABJKLPECBB_OFFSET UNITYSDK_OFFSET(0xE0B9CC0)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xE0BA970)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE0B9B60)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_LMMHOIHABLD_OFFSET UNITYSDK_OFFSET(0xE0BAA90)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xE0BA5F0)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xE0BA910)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xE0BAA30)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xE0BA580)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_PFMHCPFPMIM_OFFSET UNITYSDK_OFFSET(0xE0BA850)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xE0BA8D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ShellFurRendererBehavior_TypeDefinitionIndex = 70945;

	class ShellFurRendererBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Boolean hasUpdateRenderMatrix; // 0x38
		::System::Byte _padding0[0x7];
		::UnityEngine::Mesh* m_Mesh; // 0x40
		::System::Random* m_random; // 0x48
		::UnityEngine::Material* m_Material; // 0x50
		::UnityEngine::MeshRenderer* m_TargetRenderer; // 0x58
		::Il2CppArray<::UnityEngine::Matrix4x4>* renderMatrices; // 0x60
		static ::System::Int32* StaticGet__FurDither_ID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "ShellFurRendererBehavior")->GetStaticField(0x156C0);
		}

		static ::System::Int32* StaticGet__SmoothnessScale_ID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "ShellFurRendererBehavior")->GetStaticField(0x156C4);
		}

		static ::System::Int32* StaticGet__RootColor_ID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "ShellFurRendererBehavior")->GetStaticField(0x156C8);
		}

		static ::System::Int32* StaticGet__RootSmoothnessScale_ID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "ShellFurRendererBehavior")->GetStaticField(0x156CC);
		}

		static ::System::Int32* StaticGet__FurDitherID_ID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "ShellFurRendererBehavior")->GetStaticField(0x156D0);
		}

		static ::System::Int32* StaticGet__WindDir_ID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "ShellFurRendererBehavior")->GetStaticField(0x156D4);
		}

		static ::System::Int32* StaticGet__WindNoiseScale_ID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "ShellFurRendererBehavior")->GetStaticField(0x156D8);
		}

		static ::System::Int32* StaticGet__MainTex_ID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "ShellFurRendererBehavior")->GetStaticField(0x156DC);
		}

		static ::System::Int32* StaticGet__TopColor_ID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "ShellFurRendererBehavior")->GetStaticField(0x156E0);
		}

		static ::System::Int32* StaticGet__FurMaskTex_ID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "ShellFurRendererBehavior")->GetStaticField(0x156E4);
		}

		static ::System::Int32* StaticGet__NoiseMap_ID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "ShellFurRendererBehavior")->GetStaticField(0x156E8);
		}

		static ::System::Int32* StaticGet__FurLength_ID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "ShellFurRendererBehavior")->GetStaticField(0x156EC);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void BAAJHOAAMIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_BAAJHOAAMIC_OFFSET))(this);
		}

		::System::Void PFMHCPFPMIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_PFMHCPFPMIM_OFFSET))(this);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Void LMMHOIHABLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_LMMHOIHABLD_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void AAENNFFBBGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_AAENNFFBBGL_OFFSET))(this);
		}

		::System::Void HABJKLPECBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_HABJKLPECBB_OFFSET))(this);
		}

		::System::Void EOOLBBIDBNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_EOOLBBIDBNN_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_ABKBOGIGAEH_OFFSET))(this);
		}

		::RPG::Client::ShellFurRendererMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::ShellFurRendererMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
