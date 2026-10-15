#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define NKOFFFBEBFG_AIFKAKDJOJK_OFFSET UNITYSDK_OFFSET(0xBC45790)
#define NKOFFFBEBFG_CTOR_OFFSET UNITYSDK_OFFSET(0xBC45830)
#define NKOFFFBEBFG_IBIMCLMLHFA_OFFSET UNITYSDK_OFFSET(0xBC45550)
#define NKOFFFBEBFG_ILKDNNJHDHD_OFFSET UNITYSDK_OFFSET(0xBC455C0)
#define NKOFFFBEBFG_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xBC457E0)
#define NKOFFFBEBFG_LHPFICIGLMP_OFFSET UNITYSDK_OFFSET(0xBC45420)
#define NKOFFFBEBFG_MLEIJPGFLPD_OFFSET UNITYSDK_OFFSET(0xBC45500)
#define NKOFFFBEBFG_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xBC45430)
#define NKOFFFBEBFG_PHJILFCMIBF_OFFSET UNITYSDK_OFFSET(0xBC453D0)
#define NKOFFFBEBFG_PJFHOOJJBPN_OFFSET UNITYSDK_OFFSET(0xBC456B0)

inline static constexpr unsigned int NKOFFFBEBFG_TypeDefinitionIndex = 69991;

	class NKOFFFBEBFG : public ::System::Object
	{
	public:
		::RPG::Client::AttachPointMapping* ECNFDPGGDIN; // 0x10
		::UnityEngine::Transform* OHOCBNKBPHJ; // 0x18
		::RPG::GameCore::GameEntity* ANKKMNPGEBN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOFFFBEBFG_CTOR_OFFSET))(this);
		}

		::System::Int32 PHJILFCMIBF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOFFFBEBFG_PHJILFCMIBF_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* LHPFICIGLMP()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOFFFBEBFG_LHPFICIGLMP_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL(::UnityEngine::Transform* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NKOFFFBEBFG_OINBDMGFFJL_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Transform* MLEIJPGFLPD(::System::Int32 a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NKOFFFBEBFG_MLEIJPGFLPD_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* IBIMCLMLHFA(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + NKOFFFBEBFG_IBIMCLMLHFA_OFFSET))(this, a1, a2);
		}

		::System::Void AIFKAKDJOJK(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NKOFFFBEBFG_AIFKAKDJOJK_OFFSET))(this, a1, a2);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOFFFBEBFG_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::String* ILKDNNJHDHD(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NKOFFFBEBFG_ILKDNNJHDHD_OFFSET))(this, a1);
		}

		static ::UnityEngine::Transform* PJFHOOJJBPN(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + NKOFFFBEBFG_PJFHOOJJBPN_OFFSET))(a1, a2);
		}

	};
