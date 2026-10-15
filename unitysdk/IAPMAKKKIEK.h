#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALCAOBIABGN;
namespace RPG::GameCore { class EntityLodLoadingData; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define IAPMAKKKIEK_BCAOOLKHBDN_OFFSET UNITYSDK_OFFSET(0x15E18C90)
#define IAPMAKKKIEK_CTOR_OFFSET UNITYSDK_OFFSET(0x15E19130)
#define IAPMAKKKIEK_EPEMBGBMOPP_OFFSET UNITYSDK_OFFSET(0x15E18840)
#define IAPMAKKKIEK_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15E18C00)
#define IAPMAKKKIEK_HGHFGMBNCDP_OFFSET UNITYSDK_OFFSET(0x15E18CE0)
#define IAPMAKKKIEK_HKKMBFDKGBC_OFFSET UNITYSDK_OFFSET(0x15E18A10)
#define IAPMAKKKIEK_HNFECGABCMO_OFFSET UNITYSDK_OFFSET(0x15E18570)
#define IAPMAKKKIEK_JEJMLFICNMH_OFFSET UNITYSDK_OFFSET(0x15E18F00)
#define IAPMAKKKIEK_JONHKJHCMKN_OFFSET UNITYSDK_OFFSET(0x15E181B0)
#define IAPMAKKKIEK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15E18090)
#define IAPMAKKKIEK_LJKJLNDLAEL_OFFSET UNITYSDK_OFFSET(0x15E18730)
#define IAPMAKKKIEK_MONBMAIMOKD_OFFSET UNITYSDK_OFFSET(0x15E190D0)

inline static constexpr unsigned int IAPMAKKKIEK_TypeDefinitionIndex = 57325;

	class IAPMAKKKIEK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::ALCAOBIABGN*>* BONENBLJGCN; // 0x10
		::System::Action_3<::System::String*, ::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Mesh*>* KINHNJOJAGB; // 0x18
		::System::String* AJDOEJPFFBF; // 0x20
		::System::Action_1<::ALCAOBIABGN*>* MAEBAFINNNO; // 0x28
		::UnityEngine::GameObject* OAGDNIBLMAC; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* JIDFGJPFONL; // 0x38
		::RPG::GameCore::EntityLodLoadingData* CMCKMDEBKHE; // 0x40
		::System::Boolean GFAMGLFOMGI; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAPMAKKKIEK_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::EntityLodLoadingData* a1, ::UnityEngine::GameObject* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLodLoadingData*, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + IAPMAKKKIEK_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HNFECGABCMO(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + IAPMAKKKIEK_HNFECGABCMO_OFFSET))(this, a1, a2);
		}

		::System::Void EPEMBGBMOPP(::System::Collections::Generic::Dictionary_2<::UnityEngine::Object*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Object*, ::System::String*>*))((::PBYTE)hIl2Cpp + IAPMAKKKIEK_EPEMBGBMOPP_OFFSET))(this, a1);
		}

		::System::Void LJKJLNDLAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAPMAKKKIEK_LJKJLNDLAEL_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAPMAKKKIEK_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void BCAOOLKHBDN(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + IAPMAKKKIEK_BCAOOLKHBDN_OFFSET))(this, a1);
		}

		::System::Void JONHKJHCMKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAPMAKKKIEK_JONHKJHCMKN_OFFSET))(this);
		}

		::System::Void JEJMLFICNMH(::ALCAOBIABGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALCAOBIABGN*))((::PBYTE)hIl2Cpp + IAPMAKKKIEK_JEJMLFICNMH_OFFSET))(this, a1);
		}

		::System::Void HGHFGMBNCDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAPMAKKKIEK_HGHFGMBNCDP_OFFSET))(this);
		}

		::System::Void HKKMBFDKGBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAPMAKKKIEK_HKKMBFDKGBC_OFFSET))(this);
		}

		::System::Boolean MONBMAIMOKD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IAPMAKKKIEK_MONBMAIMOKD_OFFSET))(this);
		}

	};
