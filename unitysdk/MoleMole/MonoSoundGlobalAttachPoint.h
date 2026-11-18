#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_ADD_OFFSET UNITYSDK_OFFSET(0x13F00F20)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_AJEEBNCNHMN_OFFSET UNITYSDK_OFFSET(0x13F01910)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_AWAKE_OFFSET UNITYSDK_OFFSET(0x13F015A0)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_GETATTACHPOINTTRANSBYNAME_OFFSET UNITYSDK_OFFSET(0x13F00B60)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_GET_OFFSET UNITYSDK_OFFSET(0x13F00A00)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_JMPNKFCKKFG_OFFSET UNITYSDK_OFFSET(0x13F018B0)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13F01650)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x13F008A0)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x13F00730)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0x13F00960)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x13F007F0)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_REMOVE_OFFSET UNITYSDK_OFFSET(0x13F01270)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_REREGISTER_OFFSET UNITYSDK_OFFSET(0x13F016F0)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT__CCTOR_OFFSET UNITYSDK_OFFSET(0x13F01810)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x13F017C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSoundGlobalAttachPoint_TypeDefinitionIndex = 68773;

	class MonoSoundGlobalAttachPoint : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>** StaticGet_attachPoints()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoSoundGlobalAttachPoint_TypeDefinitionIndex)->GetStaticField(0x4AA50);
		}
		::System::String* attachPointName; // 0x18
		::System::Boolean registerOnAwake; // 0x20
		::System::Boolean EGAJDCIDHBP; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_ONDISABLE_OFFSET))(this);
		}

		static ::UnityEngine::GameObject* Get(::System::String* HIAIKHDFCLN)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_GET_OFFSET))(HIAIKHDFCLN);
		}

		static ::UnityEngine::Transform* GetAttachPointTransByName(::System::String* HIAIKHDFCLN, ::System::Boolean KPEPPCLPNOI)
		{
			return ((::UnityEngine::Transform*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_GETATTACHPOINTTRANSBYNAME_OFFSET))(HIAIKHDFCLN, KPEPPCLPNOI);
		}

		static ::System::Void Add(::System::String* HIAIKHDFCLN, ::UnityEngine::GameObject* JEIDPPCEHLD)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_ADD_OFFSET))(HIAIKHDFCLN, JEIDPPCEHLD);
		}

		static ::System::Boolean Remove(::UnityEngine::GameObject* JEIDPPCEHLD)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_REMOVE_OFFSET))(JEIDPPCEHLD);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_AWAKE_OFFSET))(this);
		}

		::System::Void OnRealEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_ONREALENABLE_OFFSET))(this);
		}

		::System::Void OnRealDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_ONREALDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_ONDESTROY_OFFSET))(this);
		}

		::System::Void Reregister()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_REREGISTER_OFFSET))(this);
		}

		::System::Void JMPNKFCKKFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_JMPNKFCKKFG_OFFSET))(this);
		}

		::System::Void AJEEBNCNHMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_AJEEBNCNHMN_OFFSET))(this);
		}
	};
}
