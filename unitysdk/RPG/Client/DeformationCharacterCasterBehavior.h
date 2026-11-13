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

#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_CBKEMMANBKG_OFFSET UNITYSDK_OFFSET(0x1B800720)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B800E60)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0x1B8002E0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_CLPLDLNJFGF_OFFSET UNITYSDK_OFFSET(0x1B8003F0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1B800DD0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_FNKOHIGBOIN_OFFSET UNITYSDK_OFFSET(0x1B7FFFD0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_GBEMEODJOIL_OFFSET UNITYSDK_OFFSET(0x1B800B90)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_GET_HASRUNTIMEBINDING_OFFSET UNITYSDK_OFFSET(0x1B7FF530)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x1B7FFB60)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_HCGGJFPKOPM_OFFSET UNITYSDK_OFFSET(0x1B7FF290)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_HKFENCICMHD_OFFSET UNITYSDK_OFFSET(0x1B7FF0C0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_HNEJEDJNIHM_OFFSET UNITYSDK_OFFSET(0x1B7FFBA0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_IFFAEHIPCKL_OFFSET UNITYSDK_OFFSET(0x1B800110)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_JDEKJLHMPLG_OFFSET UNITYSDK_OFFSET(0x1B7FFC40)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_JDPJFBDMGMJ_OFFSET UNITYSDK_OFFSET(0x1B7FFA40)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_KBLPEKOJPPN_OFFSET UNITYSDK_OFFSET(0x1B800290)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_KEEHAMOPJNK_OFFSET UNITYSDK_OFFSET(0x1B7FF9E0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1B7FEFC0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x1B7FF220)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_MLHAGHNLLBJ_OFFSET UNITYSDK_OFFSET(0x1B800680)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_NJHINMAADMA_OFFSET UNITYSDK_OFFSET(0x1B7FF5D0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x1B7FF050)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_PINOKCNDANM_OFFSET UNITYSDK_OFFSET(0x1B800050)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0x1B800350)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x1B800390)

namespace RPG::Client
{
	inline static constexpr unsigned int DeformationCharacterCasterBehavior_TypeDefinitionIndex = 72234;

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
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.Client", "DeformationCharacterCasterBehavior")->GetStaticField(0x22710);
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
