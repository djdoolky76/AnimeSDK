#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
namespace RPG::Client { class DeformationCharacterCasterMonoPlugin; }
namespace RPG::Client { class DeformationCharacterCasterMonoPlugin_DeformationCasterTransform; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_CBKEMMANBKG_OFFSET UNITYSDK_OFFSET(0xCBF0570)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xCBF0CB0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xCBF0130)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_CLPLDLNJFGF_OFFSET UNITYSDK_OFFSET(0xCBF0240)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xCBF0C20)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_FNKOHIGBOIN_OFFSET UNITYSDK_OFFSET(0xCBEFE20)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_GBEMEODJOIL_OFFSET UNITYSDK_OFFSET(0xCBF09E0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_GET_HASRUNTIMEBINDING_OFFSET UNITYSDK_OFFSET(0xCBEF380)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xCBEF9B0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_HCGGJFPKOPM_OFFSET UNITYSDK_OFFSET(0xCBEF0E0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_HKFENCICMHD_OFFSET UNITYSDK_OFFSET(0xCBEEF10)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_HNEJEDJNIHM_OFFSET UNITYSDK_OFFSET(0xCBEF9F0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_IFFAEHIPCKL_OFFSET UNITYSDK_OFFSET(0xCBEFF60)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_JDEKJLHMPLG_OFFSET UNITYSDK_OFFSET(0xCBEFA90)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_JDPJFBDMGMJ_OFFSET UNITYSDK_OFFSET(0xCBEF890)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_KBLPEKOJPPN_OFFSET UNITYSDK_OFFSET(0xCBF00E0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_KEEHAMOPJNK_OFFSET UNITYSDK_OFFSET(0xCBEF830)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCBEEE10)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xCBEF070)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_MLHAGHNLLBJ_OFFSET UNITYSDK_OFFSET(0xCBF04D0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_NJHINMAADMA_OFFSET UNITYSDK_OFFSET(0xCBEF420)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xCBEEEA0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_PINOKCNDANM_OFFSET UNITYSDK_OFFSET(0xCBEFEA0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xCBF01A0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xCBF01E0)

namespace RPG::Client
{
	inline static constexpr unsigned int DeformationCharacterCasterBehavior_TypeDefinitionIndex = 70268;

	class DeformationCharacterCasterBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::GameObject* _RuntimeBindTarget; // 0x38
		::System::Int32 _RuntimeBindVersion; // 0x40
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* _RuntimeBindCasterTransforms; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* _CasterRenderers; // 0x50
		::System::Collections::Generic::List_1<::System::Int32>* _InstanceIds; // 0x58
		::System::Int32 _AppliedBindVersion; // 0x60
		static ::Il2CppArray<::System::String*>** StaticGet_s_DefualtBoneNames()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.Client", "DeformationCharacterCasterBehavior")->GetStaticField(0x20640);
		}

		// static const ::System::Object k_SerializedBindVersion; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void HKFENCICMHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_HKFENCICMHD_OFFSET))(this);
		}

		::System::Void JDEKJLHMPLG(::UnityEngine::GameObject* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_JDEKJLHMPLG_OFFSET))(this, a1, a2);
		}

		::System::Void PINOKCNDANM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_PINOKCNDANM_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void IFFAEHIPCKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_IFFAEHIPCKL_OFFSET))(this);
		}

		::System::Void MLHAGHNLLBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_MLHAGHNLLBJ_OFFSET))(this);
		}

		::System::Void JDPJFBDMGMJ(::UnityEngine::GameObject* a1, ::System::Collections::Generic::List_1<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_JDPJFBDMGMJ_OFFSET))(this, a1, a2);
		}

		::System::Void CBKEMMANBKG(::UnityEngine::GameObject* a1, ::RPG::Client::DeformationCharacterCasterMonoPlugin_DeformationCasterTransform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::DeformationCharacterCasterMonoPlugin_DeformationCasterTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_CBKEMMANBKG_OFFSET))(this, a1, a2);
		}

		::System::Void HCGGJFPKOPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_HCGGJFPKOPM_OFFSET))(this);
		}

		::System::Void CLPLDLNJFGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_CLPLDLNJFGF_OFFSET))(this);
		}

		::System::Void NJHINMAADMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_NJHINMAADMA_OFFSET))(this);
		}

		::System::Boolean get_HasRuntimeBinding()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_GET_HASRUNTIMEBINDING_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* KEEHAMOPJNK()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_KEEHAMOPJNK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* HNEJEDJNIHM()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_HNEJEDJNIHM_OFFSET))(this);
		}

		::System::Void FNKOHIGBOIN(::UnityEngine::GameObject* a1, ::System::Collections::Generic::List_1<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_FNKOHIGBOIN_OFFSET))(this, a1, a2);
		}

		::System::Void KBLPEKOJPPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_KBLPEKOJPPN_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::System::Object*>* GBEMEODJOIL(::System::Collections::Generic::List_1<::System::Object*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_GBEMEODJOIL_OFFSET))(a1);
		}

		::RPG::Client::DeformationCharacterCasterMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::DeformationCharacterCasterMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
