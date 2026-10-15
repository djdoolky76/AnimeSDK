#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define POKLKMOKPJC_AIFKAKDJOJK_OFFSET UNITYSDK_OFFSET(0xC36EB30)
#define POKLKMOKPJC_CTOR_OFFSET UNITYSDK_OFFSET(0xC36ECB0)
#define POKLKMOKPJC_IBIMCLMLHFA_OFFSET UNITYSDK_OFFSET(0xC36E9E0)
#define POKLKMOKPJC_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xC36EC40)
#define POKLKMOKPJC_LHPFICIGLMP_OFFSET UNITYSDK_OFFSET(0xC36E800)
#define POKLKMOKPJC_MLEIJPGFLPD_OFFSET UNITYSDK_OFFSET(0xC36E940)
#define POKLKMOKPJC_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xC36E810)
#define POKLKMOKPJC_PHJILFCMIBF_OFFSET UNITYSDK_OFFSET(0xC36E7B0)

inline static constexpr unsigned int POKLKMOKPJC_TypeDefinitionIndex = 69990;

	class POKLKMOKPJC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* JJDBDLKKDFC; // 0x10
		::RPG::GameCore::GameEntity* HFOOLDDNDLK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POKLKMOKPJC_CTOR_OFFSET))(this);
		}

		::System::Int32 PHJILFCMIBF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POKLKMOKPJC_PHJILFCMIBF_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* LHPFICIGLMP()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + POKLKMOKPJC_LHPFICIGLMP_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + POKLKMOKPJC_OINBDMGFFJL_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* MLEIJPGFLPD(::System::Int32 a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + POKLKMOKPJC_MLEIJPGFLPD_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* IBIMCLMLHFA(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + POKLKMOKPJC_IBIMCLMLHFA_OFFSET))(this, a1, a2);
		}

		::System::Void AIFKAKDJOJK(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + POKLKMOKPJC_AIFKAKDJOJK_OFFSET))(this, a1, a2);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POKLKMOKPJC_KHGIKBFDLFB_OFFSET))(this);
		}

	};
