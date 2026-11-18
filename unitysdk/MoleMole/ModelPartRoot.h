#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MODELPARTROOT_APEDDJHPLFF_OFFSET UNITYSDK_OFFSET(0x130E52E0)
#define MOLEMOLE_MODELPARTROOT_AWAKE_OFFSET UNITYSDK_OFFSET(0x130E4530)
#define MOLEMOLE_MODELPARTROOT_CHANGEPARTPATHS_OFFSET UNITYSDK_OFFSET(0x130E4AE0)
#define MOLEMOLE_MODELPARTROOT_DPCIAGJJANP_OFFSET UNITYSDK_OFFSET(0x130E4D70)
#define MOLEMOLE_MODELPARTROOT_EFOLBGIBJHA_OFFSET UNITYSDK_OFFSET(0x130E5EA0)
#define MOLEMOLE_MODELPARTROOT_EOEIJDLCENG_OFFSET UNITYSDK_OFFSET(0x130E54A0)
#define MOLEMOLE_MODELPARTROOT_GET_BONEDICT_OFFSET UNITYSDK_OFFSET(0x130E4510)
#define MOLEMOLE_MODELPARTROOT_GET_FINALPATHS_OFFSET UNITYSDK_OFFSET(0x130E4520)
#define MOLEMOLE_MODELPARTROOT_GKLBGENLCAK_OFFSET UNITYSDK_OFFSET(0x130E5D20)
#define MOLEMOLE_MODELPARTROOT_GKPNIGPOPCJ_OFFSET UNITYSDK_OFFSET(0x130E5C40)
#define MOLEMOLE_MODELPARTROOT_GNKDMDLOLBF_OFFSET UNITYSDK_OFFSET(0x130E53C0)
#define MOLEMOLE_MODELPARTROOT_HGJINIMECIL_OFFSET UNITYSDK_OFFSET(0x130E5040)
#define MOLEMOLE_MODELPARTROOT_JNBNFCDIKDK_OFFSET UNITYSDK_OFFSET(0x130E63A0)
#define MOLEMOLE_MODELPARTROOT_MMBGMEKJJAO_OFFSET UNITYSDK_OFFSET(0x130E4CB0)
#define MOLEMOLE_MODELPARTROOT_OIMPBDKAAOC_OFFSET UNITYSDK_OFFSET(0x130E6130)
#define MOLEMOLE_MODELPARTROOT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x130E4A80)
#define MOLEMOLE_MODELPARTROOT_ONFFEBEHGCD_OFFSET UNITYSDK_OFFSET(0x130E56C0)
#define MOLEMOLE_MODELPARTROOT_ONOBJINNIMI_OFFSET UNITYSDK_OFFSET(0x130E6330)
#define MOLEMOLE_MODELPARTROOT__CTOR_OFFSET UNITYSDK_OFFSET(0x130E4FF0)

namespace MoleMole
{
	inline static constexpr unsigned int ModelPartRoot_TypeDefinitionIndex = 77978;

	class ModelPartRoot : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* rootBone; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* EDBFNHIHECD; // 0x20
		::System::Collections::Generic::List_1<::Foundation::AssetPath>* OJEFPFGBJJM; // 0x28
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* FCPHIIAPLLN; // 0x30
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* FKFOPICGPAN; // 0x38
		::System::Boolean PMDELOOPADE; // 0x40
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::System::Action_1<::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*>*>* JJKJFMPJPAE; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* get_BoneDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_GET_BONEDICT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Foundation::AssetPath>* get_FinalPaths()
		{
			return ((::System::Collections::Generic::List_1<::Foundation::AssetPath>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_GET_FINALPATHS_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_ONDESTROY_OFFSET))(this);
		}

		::System::Void ChangePartPaths(::System::Collections::Generic::List_1<::Foundation::AssetPath>* JIFNFNAPKBO, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*>* EJGDHCIBCJH, ::System::Boolean EBAJLMBGMFE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::AssetPath>*, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_CHANGEPARTPATHS_OFFSET))(this, JIFNFNAPKBO, EJGDHCIBCJH, EBAJLMBGMFE);
		}

		::System::Void HGJINIMECIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_HGJINIMECIL_OFFSET))(this);
		}

		::System::Void GNKDMDLOLBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_GNKDMDLOLBF_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Action_1<::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*>*>* MMBGMEKJJAO()
		{
			return ((::System::Collections::Generic::List_1<::System::Action_1<::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_MMBGMEKJJAO_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* APEDDJHPLFF()
		{
			return ((::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_APEDDJHPLFF_OFFSET))(this);
		}

		::System::Void EOEIJDLCENG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_EOEIJDLCENG_OFFSET))(this);
		}

		::System::Void ONFFEBEHGCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_ONFFEBEHGCD_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* GKPNIGPOPCJ()
		{
			return ((::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_GKPNIGPOPCJ_OFFSET))(this);
		}

		::System::Void GKLBGENLCAK(::Foundation::AssetPath OIIHCACKLHD, ::UnityEngine::GameObject* DDCKPCOODAM)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_GKLBGENLCAK_OFFSET))(this, OIIHCACKLHD, DDCKPCOODAM);
		}

		::System::Collections::Generic::List_1<::Foundation::AssetPath>* EFOLBGIBJHA()
		{
			return ((::System::Collections::Generic::List_1<::Foundation::AssetPath>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_EFOLBGIBJHA_OFFSET))(this);
		}

		::System::Void OIMPBDKAAOC(::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* GLGCAAPINNH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_OIMPBDKAAOC_OFFSET))(this, GLGCAAPINNH);
		}

		::System::Void DPCIAGJJANP(::System::Boolean EBAJLMBGMFE, ::System::Int32 BLCLDOCEPCC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_DPCIAGJJANP_OFFSET))(this, EBAJLMBGMFE, BLCLDOCEPCC);
		}

		::System::Void ONOBJINNIMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_ONOBJINNIMI_OFFSET))(this);
		}

		::System::Void JNBNFCDIKDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_JNBNFCDIKDK_OFFSET))(this);
		}
	};
}
