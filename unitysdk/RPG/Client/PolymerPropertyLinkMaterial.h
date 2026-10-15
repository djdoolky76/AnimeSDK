#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PolymerPropertyLinkBase.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_AFBOJMAKNJF_OFFSET UNITYSDK_OFFSET(0xDC02160)
#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_CTOR_OFFSET UNITYSDK_OFFSET(0xDC04BF0)
#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_HGBNKOJOCLC_OFFSET UNITYSDK_OFFSET(0xDC04C50)
#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_HOINIFLGIOK_OFFSET UNITYSDK_OFFSET(0xDC01A20)
#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_IFODKCJGNGF_OFFSET UNITYSDK_OFFSET(0xDC01D60)
#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xDC01F00)

namespace RPG::Client
{
	class PolymerPropertyLinkMaterial : public ::RPG::Client::PolymerPropertyLinkBase
	{
	public:
		::System::Int32 targetMatID; // 0x58
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* ElementList; // 0x60
		::UnityEngine::Object* targetComponent; // 0x68
		::System::Boolean kAllTarget; // 0x70
		::System::Boolean kAllTarget2; // 0x71
		::System::Void _ctor(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_CTOR_OFFSET))(this, a1);
		}

		::System::Void AFBOJMAKNJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_AFBOJMAKNJF_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void HGBNKOJOCLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_HGBNKOJOCLC_OFFSET))(this);
		}

		::System::Void HOINIFLGIOK(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_HOINIFLGIOK_OFFSET))(this, a1);
		}

		::System::Void IFODKCJGNGF(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_IFODKCJGNGF_OFFSET))(this, a1, a2);
		}

	};
}
