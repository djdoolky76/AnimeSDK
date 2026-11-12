#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CFNALNFLBIN;
namespace RPG::Client { class IRIManager; }
namespace RPG::Client { class IRIRenderer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_IRIRENDERER_AWAKE_OFFSET UNITYSDK_OFFSET(0xDD6FE00)
#define RPG_CLIENT_IRIRENDERER_CCTOR_OFFSET UNITYSDK_OFFSET(0xDD70440)
#define RPG_CLIENT_IRIRENDERER_CTOR_OFFSET UNITYSDK_OFFSET(0xDD70410)
#define RPG_CLIENT_IRIRENDERER_EFFBPCOJJGP_OFFSET UNITYSDK_OFFSET(0xDD6FE50)
#define RPG_CLIENT_IRIRENDERER_GET_UPDATETRANSFORM_OFFSET UNITYSDK_OFFSET(0xDD703F0)
#define RPG_CLIENT_IRIRENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xDD702C0)
#define RPG_CLIENT_IRIRENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xDD70190)
#define RPG_CLIENT_IRIRENDERER_SET_UPDATETRANSFORM_OFFSET UNITYSDK_OFFSET(0xDD70400)

namespace RPG::Client
{
	inline static constexpr unsigned int IRIRenderer_TypeDefinitionIndex = 70844;

	class IRIRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* DataAssetPath; // 0x18
		::System::Boolean _UpdateTransform_k__BackingField; // 0x20
		::System::Byte _padding0[0x7];
		::CFNALNFLBIN* JOOGPAFFGNM; // 0x28
		::System::UInt64 PJDJNFIMJFK; // 0x30
		::UnityEngine::Collider* ADKPEOEFBFI; // 0x38
		::UnityEngine::Vector3 KFEJGBAKKEF; // 0x40
		::UnityEngine::Vector3 NCBBBANOECE; // 0x4C
		static ::System::Collections::Generic::List_1<::RPG::Client::IRIRenderer*>** StaticGet_PHOKFJMLCDE()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::IRIRenderer*>**)UnitySDK::FromName("RPG.Client", "IRIRenderer")->GetStaticField(0x1F500);
		}

		static ::RPG::Client::IRIManager** StaticGet_KJEGMPNCGEH()
		{
			return (::RPG::Client::IRIManager**)UnitySDK::FromName("RPG.Client", "IRIRenderer")->GetStaticField(0x1F508);
		}

		static ::System::Collections::Generic::HashSet_1<::RPG::Client::IRIRenderer*>** StaticGet_KPODFFOJOBN()
		{
			return (::System::Collections::Generic::HashSet_1<::RPG::Client::IRIRenderer*>**)UnitySDK::FromName("RPG.Client", "IRIRenderer")->GetStaticField(0x1F510);
		}

		static ::System::Boolean* StaticGet_UseGlobalVolume()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "IRIRenderer")->GetStaticField(0x6D10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRIRENDERER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_IRIRENDERER_CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRIRENDERER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRIRENDERER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRIRENDERER_ONDISABLE_OFFSET))(this);
		}

		::System::Boolean get_UpdateTransform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRIRENDERER_GET_UPDATETRANSFORM_OFFSET))(this);
		}

		::System::Void set_UpdateTransform(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRIRENDERER_SET_UPDATETRANSFORM_OFFSET))(this, a1);
		}

		::RPG::Client::IRIManager* EFFBPCOJJGP()
		{
			return ((::RPG::Client::IRIManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRIRENDERER_EFFBPCOJJGP_OFFSET))(this);
		}

	};
}
