#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PolymerAnimationPropertyDatabase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_POLYMERPROPERTYLINKBASE_AFBOJMAKNJF_OFFSET UNITYSDK_OFFSET(0xDBFB0C0)
#define RPG_CLIENT_POLYMERPROPERTYLINKBASE_CBHKBEBAAMH_OFFSET UNITYSDK_OFFSET(0xDBFB670)
#define RPG_CLIENT_POLYMERPROPERTYLINKBASE_CGOPBPEOJMF_OFFSET UNITYSDK_OFFSET(0xDBFB330)
#define RPG_CLIENT_POLYMERPROPERTYLINKBASE_CTOR_OFFSET UNITYSDK_OFFSET(0xDBFAFF0)
#define RPG_CLIENT_POLYMERPROPERTYLINKBASE_HGBNKOJOCLC_OFFSET UNITYSDK_OFFSET(0xDBFB100)
#define RPG_CLIENT_POLYMERPROPERTYLINKBASE_HOINIFLGIOK_OFFSET UNITYSDK_OFFSET(0xDBFB140)
#define RPG_CLIENT_POLYMERPROPERTYLINKBASE_IFODKCJGNGF_OFFSET UNITYSDK_OFFSET(0xDBFB420)
#define RPG_CLIENT_POLYMERPROPERTYLINKBASE_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xDBFB630)

namespace RPG::Client
{
	inline static constexpr unsigned int PolymerPropertyLinkBase_TypeDefinitionIndex = 70302;

	class PolymerPropertyLinkBase : public ::System::Object
	{
	public:
		::UnityEngine::Transform* target; // 0x10
		::UnityEngine::Transform* target2; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* prefabPath; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* hierachyPath; // 0x28
		::System::Boolean targetNotInArtPreb; // 0x30
		::System::Byte _padding0[0x7];
		::UnityEngine::Transform* root; // 0x38
		::UnityEngine::Transform* polymerRoot; // 0x40
		::RPG::Client::PolymerAnimationPropertyDatabase* database; // 0x48
		::System::Boolean EditorFolder; // 0x50
		::System::Void _ctor(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKBASE_CTOR_OFFSET))(this, a1);
		}

		::System::Void AFBOJMAKNJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKBASE_AFBOJMAKNJF_OFFSET))(this);
		}

		::System::Void HGBNKOJOCLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKBASE_HGBNKOJOCLC_OFFSET))(this);
		}

		::System::Void HOINIFLGIOK(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKBASE_HOINIFLGIOK_OFFSET))(this, a1);
		}

		::System::Void IFODKCJGNGF(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKBASE_IFODKCJGNGF_OFFSET))(this, a1, a2);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKBASE_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Int32 CBHKBEBAAMH(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKBASE_CBHKBEBAAMH_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* CGOPBPEOJMF(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKBASE_CGOPBPEOJMF_OFFSET))(this, a1);
		}

	};
}
