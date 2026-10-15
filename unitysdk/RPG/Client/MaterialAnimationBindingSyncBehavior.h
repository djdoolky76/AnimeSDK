#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CommonEffectMatBlockType.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Rendering/ShaderPropertyType.h"
namespace RPG::Client { class MaterialAnimationBindingSyncBehavior; }
namespace RPG::Client { class MaterialAnimationBindingSyncBehavior_SyncChannel; }
namespace RPG::Client { class MaterialAnimationBindingSyncMonoPlugin; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class Regex; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialAnimationBinding; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_AFPMODCCENP_OFFSET UNITYSDK_OFFSET(0xD5D1B40)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_ALNPPKCFEAD_OFFSET UNITYSDK_OFFSET(0xD5D2170)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xD5D2CF0)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_CGHPPPBLMBB_OFFSET UNITYSDK_OFFSET(0xD5D1770)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_CLBJDNBNFPP_OFFSET UNITYSDK_OFFSET(0xD5D1680)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xD5D2C80)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_DFBIENAICKO_OFFSET UNITYSDK_OFFSET(0xD5D2120)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_DFDJJEJLEDP_OFFSET UNITYSDK_OFFSET(0xD5D1D60)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xD5D0D20)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xD5D0600)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_GNJILPPECLH_OFFSET UNITYSDK_OFFSET(0xD5D1A40)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_HBJAAGBKHOD_OFFSET UNITYSDK_OFFSET(0xD5D2620)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_HNEALFCGFMB_OFFSET UNITYSDK_OFFSET(0xD5D2B20)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_JFGPFNFEHAN_1_OFFSET UNITYSDK_OFFSET(0xD5D2A80)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_JFGPFNFEHAN_2_OFFSET UNITYSDK_OFFSET(0xD5D29B0)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_JFGPFNFEHAN_OFFSET UNITYSDK_OFFSET(0xD5D28E0)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_JGKLFANPIKF_OFFSET UNITYSDK_OFFSET(0xD5D1570)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_JLFLHDFANEF_OFFSET UNITYSDK_OFFSET(0xD5D1BE0)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_JMIIHDDBBCG_OFFSET UNITYSDK_OFFSET(0xD5D0640)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xD5D0210)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_LDLPPLAHCGG_OFFSET UNITYSDK_OFFSET(0xD5D02A0)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_LPJBFAODHGB_OFFSET UNITYSDK_OFFSET(0xD5D1120)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_MBPDGNJOPLP_OFFSET UNITYSDK_OFFSET(0xD5D0EE0)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_MCIEKCMMIDM_OFFSET UNITYSDK_OFFSET(0xD5D0BD0)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_MEKNNNIAOAE_OFFSET UNITYSDK_OFFSET(0xD5D0DF0)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xD5D0B80)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_MFNOJMPJNOP_OFFSET UNITYSDK_OFFSET(0xD5D1C90)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_NCFIOMJPNHG_OFFSET UNITYSDK_OFFSET(0xD5D2BB0)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_NGMAJOFELDH_OFFSET UNITYSDK_OFFSET(0xD5D09D0)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_NOBMLFHCOKB_OFFSET UNITYSDK_OFFSET(0xD5D20A0)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xD5D0550)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_PFIOGDHMMFL_OFFSET UNITYSDK_OFFSET(0xD5D1DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialAnimationBindingSyncBehavior_TypeDefinitionIndex = 70291;

	class MaterialAnimationBindingSyncBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Boolean _NeedAutoPrepareMaterialAnimationBinding; // 0x38
		::System::Byte _padding0[0x3];
		::System::Int32 _ReadyFrameCountBeforePrepare; // 0x3C
		::System::Collections::Generic::List_1<::System::Object*>* _BindingMaterialSlots; // 0x40
		static ::System::Text::RegularExpressions::Regex** StaticGet_s_AnimationCurveNameRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)UnitySDK::FromName("RPG.Client", "MaterialAnimationBindingSyncBehavior")->GetStaticField(0x55F20);
		}

		// static const ::System::Object k_AutoPrepareStableFrameCount; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void JMIIHDDBBCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_JMIIHDDBBCG_OFFSET))(this);
		}

		::System::Void NGMAJOFELDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_NGMAJOFELDH_OFFSET))(this);
		}

		::System::Boolean JGKLFANPIKF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_JGKLFANPIKF_OFFSET))(this);
		}

		::System::Void MEKNNNIAOAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_MEKNNNIAOAE_OFFSET))(this);
		}

		::System::Boolean CGHPPPBLMBB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_CGHPPPBLMBB_OFFSET))(this);
		}

		::UnityEngine::Animator* CLBJDNBNFPP()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_CLBJDNBNFPP_OFFSET))(this);
		}

		static ::RPG::Client::MaterialAnimationBindingSyncBehavior* GNJILPPECLH(::RPG::Client::MaterialAnimationBindingSyncMonoPlugin* a1)
		{
			return ((::RPG::Client::MaterialAnimationBindingSyncBehavior*(*)(::RPG::Client::MaterialAnimationBindingSyncMonoPlugin*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_GNJILPPECLH_OFFSET))(a1);
		}

		static ::System::Void AFPMODCCENP(::RPG::Client::MaterialAnimationBindingSyncMonoPlugin* a1)
		{
			return ((::System::Void(*)(::RPG::Client::MaterialAnimationBindingSyncMonoPlugin*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_AFPMODCCENP_OFFSET))(a1);
		}

		static ::System::Void JLFLHDFANEF(::RPG::Client::MaterialAnimationBindingSyncMonoPlugin* a1)
		{
			return ((::System::Void(*)(::RPG::Client::MaterialAnimationBindingSyncMonoPlugin*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_JLFLHDFANEF_OFFSET))(a1);
		}

		::System::Void LDLPPLAHCGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_LDLPPLAHCGG_OFFSET))(this);
		}

		::System::Void MCIEKCMMIDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_MCIEKCMMIDM_OFFSET))(this);
		}

		::System::Void LPJBFAODHGB(::UnityEngine::MaterialAnimationBinding* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialAnimationBinding*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_LPJBFAODHGB_OFFSET))(this, a1, a2);
		}

		::System::Void ALNPPKCFEAD(::System::Collections::Generic::HashSet_1<::System::String*>* a1, ::UnityEngine::MaterialAnimationBinding* a2, ::UnityEngine::Renderer* a3, ::System::Int32 a4, ::System::Int32 a5, ::System::String* a6, ::RPG::Client::CommonEffectMatBlockType a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::UnityEngine::MaterialAnimationBinding*, ::UnityEngine::Renderer*, ::System::Int32, ::System::Int32, ::System::String*, ::RPG::Client::CommonEffectMatBlockType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_ALNPPKCFEAD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void MBPDGNJOPLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_MBPDGNJOPLP_OFFSET))(this);
		}

		::System::Void HBJAAGBKHOD(::UnityEngine::Material* a1, ::RPG::Client::MaterialAnimationBindingSyncBehavior_SyncChannel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::RPG::Client::MaterialAnimationBindingSyncBehavior_SyncChannel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_HBJAAGBKHOD_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Renderer* MFNOJMPJNOP(::UnityEngine::MaterialAnimationBinding* a1)
		{
			return ((::UnityEngine::Renderer*(*)(::UnityEngine::MaterialAnimationBinding*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_MFNOJMPJNOP_OFFSET))(a1);
		}

		::System::Boolean PFIOGDHMMFL(::UnityEngine::MaterialAnimationBinding* a1, ::System::String* a2, ::System::Int32 a3, ::UnityEngine::Renderer* a4, ::System::Int32 a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::MaterialAnimationBinding*, ::System::String*, ::System::Int32, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_PFIOGDHMMFL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Material* NOBMLFHCOKB(::UnityEngine::MaterialAnimationBinding* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::MaterialAnimationBinding*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_NOBMLFHCOKB_OFFSET))(a1, a2);
		}

		static ::System::Int32 DFDJJEJLEDP(::UnityEngine::MaterialAnimationBinding* a1)
		{
			return ((::System::Int32(*)(::UnityEngine::MaterialAnimationBinding*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_DFDJJEJLEDP_OFFSET))(a1);
		}

		static ::System::Boolean JFGPFNFEHAN(::UnityEngine::Material* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_JFGPFNFEHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean JFGPFNFEHAN_1(::UnityEngine::Material* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_JFGPFNFEHAN_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean JFGPFNFEHAN_2(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_JFGPFNFEHAN_2_OFFSET))(a1, a2);
		}

		static ::System::String* HNEALFCGFMB(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_HNEALFCGFMB_OFFSET))(a1);
		}

		static ::RPG::Client::CommonEffectMatBlockType DFBIENAICKO(::UnityEngine::Rendering::ShaderPropertyType a1)
		{
			return ((::RPG::Client::CommonEffectMatBlockType(*)(::UnityEngine::Rendering::ShaderPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_DFBIENAICKO_OFFSET))(a1);
		}

		static ::RPG::Client::CommonEffectMatBlockType NCFIOMJPNHG(::System::String* a1)
		{
			return ((::RPG::Client::CommonEffectMatBlockType(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_NCFIOMJPNHG_OFFSET))(a1);
		}

		::RPG::Client::MaterialAnimationBindingSyncMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::MaterialAnimationBindingSyncMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
