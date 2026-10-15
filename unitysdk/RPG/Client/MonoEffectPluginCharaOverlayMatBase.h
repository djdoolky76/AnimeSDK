#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaEffectBase.h"
#include "unitysdk/RPG/CustomRP/AvatarEffectInfo_EExecutionOrder.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
namespace RPG::Client { class MonoEffectPluginCharaReplaceMatBase; }
namespace RPG::CustomRP { class AvatarEffectInfo_PerRendererEffect; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_CBKPMHCOCMH_OFFSET UNITYSDK_OFFSET(0xD7D3150)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_CCTOR_OFFSET UNITYSDK_OFFSET(0xD7D5120)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_CTOR_OFFSET UNITYSDK_OFFSET(0xD7C2EE0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_EDGOAPJKCKK_OFFSET UNITYSDK_OFFSET(0xD7D2070)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_FAJAHACNNOH_OFFSET UNITYSDK_OFFSET(0xD7D2270)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_GBPFMKKLFHJ_OFFSET UNITYSDK_OFFSET(0xD7D31F0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_HBAMPGEBMCH_OFFSET UNITYSDK_OFFSET(0xD7D46B0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_IFOEAAAKONL_OFFSET UNITYSDK_OFFSET(0xD7C2DB0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_IJICJDNHKHN_OFFSET UNITYSDK_OFFSET(0xD7D1CC0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_JJKMJKDCNKJ_OFFSET UNITYSDK_OFFSET(0xD7D5070)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_LDJIBONHDIC_OFFSET UNITYSDK_OFFSET(0xD7D48F0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_LDNMGHPHMAF_OFFSET UNITYSDK_OFFSET(0xD7D21F0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_MNDOLMPKOEF_OFFSET UNITYSDK_OFFSET(0xD7D4400)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_NGAJKFIBHJP_OFFSET UNITYSDK_OFFSET(0xD7D40D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_NNOPFHDNCAF_OFFSET UNITYSDK_OFFSET(0xD7D3040)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_OIIHNNGMJBB_OFFSET UNITYSDK_OFFSET(0xD7D2AB0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_PDIEPIBDGNC_OFFSET UNITYSDK_OFFSET(0xD7D4A60)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaOverlayMatBase_TypeDefinitionIndex = 69947;

	class MonoEffectPluginCharaOverlayMatBase : public ::RPG::Client::MonoEffectPluginCharaEffectBase
	{
	public:
		::UnityEngine::Material* EffectMat; // 0x158
		::Il2CppArray<::System::Object*>* RendererEffectMats; // 0x160
		::Il2CppArray<::System::Int32>* OverlayPasses; // 0x168
		::System::Boolean AfterTransparent; // 0x170
		::System::Byte _padding0[0x7];
		::Il2CppArray<::System::Boolean>* AfterTransparentArray; // 0x178
		::System::Boolean IgnoreMPB; // 0x180
		::System::Boolean DrawMeshMode; // 0x181
		::System::Boolean DisableOverlayForwardEmission; // 0x182
		::System::Boolean UseGBufferEmission; // 0x183
		::System::Boolean DrawReflection; // 0x184
		::System::Byte _padding1[0x3];
		::RPG::CustomRP::AvatarEffectInfo_EExecutionOrder PassExecutionOrder; // 0x188
		::System::Boolean EnableOverlayPassesHalfRes; // 0x18C
		::System::Byte _padding2[0x3];
		::Il2CppArray<::System::Int32>* OverlayPassesHalfRes; // 0x190
		::Il2CppArray<::System::String*>* HalfResRendererNamesExcluded; // 0x198
		::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect* NGKENIHMJJO; // 0x1A0
		::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect* LOKGFIDLBML; // 0x1A8
		::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect* MMOOIKLJMFL; // 0x1B0
		::Il2CppArray<::System::Int32>* LGMLIOABMHA; // 0x1B8
		::UnityEngine::Bounds DGNHKKJMNON; // 0x1C0
		::UnityEngine::Matrix4x4 LKEHCIFAJNK; // 0x1D8
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginCharaReplaceMatBase*>* PDHIFDMAPML; // 0x218
		static ::Il2CppArray<::System::Int32>** StaticGet_DPOBOPKPMHI()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("RPG.Client", "MonoEffectPluginCharaOverlayMatBase")->GetStaticField(0x5FE60);
		}

		static ::System::Int32* StaticGet_MBDPEFHNBMI()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoEffectPluginCharaOverlayMatBase")->GetStaticField(0x14780);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_CCTOR_OFFSET))();
		}

		::System::Void IJICJDNHKHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_IJICJDNHKHN_OFFSET))(this);
		}

		::System::Boolean FAJAHACNNOH(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_FAJAHACNNOH_OFFSET))(this, a1);
		}

		::System::Void IFOEAAAKONL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_IFOEAAAKONL_OFFSET))(this);
		}

		::System::Void NNOPFHDNCAF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_NNOPFHDNCAF_OFFSET))(this, a1);
		}

		::System::Void CBKPMHCOCMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_CBKPMHCOCMH_OFFSET))(this);
		}

		::System::Void EDGOAPJKCKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_EDGOAPJKCKK_OFFSET))(this);
		}

		::System::Void GBPFMKKLFHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_GBPFMKKLFHJ_OFFSET))(this);
		}

		::System::Void NGAJKFIBHJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_NGAJKFIBHJP_OFFSET))(this);
		}

		::UnityEngine::Material* MNDOLMPKOEF(::UnityEngine::Renderer* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_MNDOLMPKOEF_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Material* HBAMPGEBMCH(::UnityEngine::Material* a1, ::UnityEngine::Material* a2, ::UnityEngine::Renderer* a3)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_HBAMPGEBMCH_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Material* LDJIBONHDIC(::System::String* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_LDJIBONHDIC_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Int32>* LDNMGHPHMAF()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_LDNMGHPHMAF_OFFSET))(this);
		}

		::System::Void PDIEPIBDGNC(::UnityEngine::Material* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_PDIEPIBDGNC_OFFSET))(this, a1, a2);
		}

		::System::Void JJKMJKDCNKJ(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_JJKMJKDCNKJ_OFFSET))(this, a1);
		}

		::System::Void OIIHNNGMJBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_OIIHNNGMJBB_OFFSET))(this);
		}

	};
}
