#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
namespace RPG::Client { class Effect_VertexLitMonoPlugin; }
namespace RPG::Client::TAUtils { class RendererMaterials; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xCD6EA00)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xCD6D110)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xCD6E9F0)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xCD6E9B0)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_IBJAJHILFCM_OFFSET UNITYSDK_OFFSET(0xCD6E960)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_IMCDNNFMPJK_OFFSET UNITYSDK_OFFSET(0xCD6D290)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xCD6D170)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_KGGAEAOFICE_OFFSET UNITYSDK_OFFSET(0xCD6C930)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCD6C880)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0xCD6D230)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_LCHHMLDFFLA_OFFSET UNITYSDK_OFFSET(0xCD6CF50)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xCD6CF00)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xCD6D1D0)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xCD6C8E0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_VertexLitBehavior_TypeDefinitionIndex = 70585;

	class Effect_VertexLitBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TAUtils::RendererMaterials*>* OriginMaterials; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* _MaterialInstances; // 0x40
		::System::Boolean _IsInMonoEffect; // 0x48
		static ::System::Int32* StaticGet__PointLightColorsShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_VertexLitBehavior")->GetStaticField(0xAD30);
		}

		static ::System::Int32* StaticGet__PointLightPosRangesShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_VertexLitBehavior")->GetStaticField(0xAD34);
		}

		static ::System::Int32* StaticGet__SceneLightColorColorShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_VertexLitBehavior")->GetStaticField(0xAD38);
		}

		static ::System::Int32* StaticGet__SceneLightPositionShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_VertexLitBehavior")->GetStaticField(0xAD3C);
		}

		// static const ::System::Object _POINTLIGHT_MAX_NUM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_LATETICK_OFFSET))(this, a1);
		}

		::System::Void IBJAJHILFCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_IBJAJHILFCM_OFFSET))(this);
		}

		::System::Void KGGAEAOFICE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_KGGAEAOFICE_OFFSET))(this);
		}

		::System::Void LCHHMLDFFLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_LCHHMLDFFLA_OFFSET))(this);
		}

		::System::Void IMCDNNFMPJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_IMCDNNFMPJK_OFFSET))(this);
		}

		::RPG::Client::Effect_VertexLitMonoPlugin* get__Owner()
		{
			return ((::RPG::Client::Effect_VertexLitMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_GET__OWNER_OFFSET))(this);
		}

	};
}
