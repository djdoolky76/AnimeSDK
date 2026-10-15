#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client { class SmallWindowVCControl; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define DJHGHIBGJCF_AEIMGCLHIDJ_OFFSET UNITYSDK_OFFSET(0xF2300D0)
#define DJHGHIBGJCF_CTOR_OFFSET UNITYSDK_OFFSET(0xF230290)
#define DJHGHIBGJCF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF22FDD0)
#define DJHGHIBGJCF_DNMNDNOAAJH_OFFSET UNITYSDK_OFFSET(0xF22FF10)
#define DJHGHIBGJCF_FLKHJAHCFFF_OFFSET UNITYSDK_OFFSET(0xF2301C0)
#define DJHGHIBGJCF_IEGOIFHEIDD_OFFSET UNITYSDK_OFFSET(0xF22FEA0)
#define DJHGHIBGJCF_JBPMHLKEDFJ_OFFSET UNITYSDK_OFFSET(0xF22FE30)
#define DJHGHIBGJCF_JJHEHOHPNBE_OFFSET UNITYSDK_OFFSET(0xF22FF80)
#define DJHGHIBGJCF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xF22FC80)
#define DJHGHIBGJCF_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xF22FD60)
#define DJHGHIBGJCF_NDCAEPIDPLE_OFFSET UNITYSDK_OFFSET(0xF230150)
#define DJHGHIBGJCF_OELGAPOIPIH_OFFSET UNITYSDK_OFFSET(0xF230000)
#define DJHGHIBGJCF_PEEICDAMCMG_OFFSET UNITYSDK_OFFSET(0xF230060)

inline static constexpr unsigned int DJHGHIBGJCF_TypeDefinitionIndex = 60671;

	class DJHGHIBGJCF : public ::System::Object
	{
	public:
		::RPG::Client::SmallWindowVCControl* LBMCADHKKCA; // 0x10
		// static const ::System::String* IDFMIHMADLI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJHGHIBGJCF_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DJHGHIBGJCF_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void LJBCDJNNBJH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DJHGHIBGJCF_LJBCDJNNBJH_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJHGHIBGJCF_DISPOSE_OFFSET))(this);
		}

		::System::Void JBPMHLKEDFJ(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DJHGHIBGJCF_JBPMHLKEDFJ_OFFSET))(this, a1);
		}

		::System::Void IEGOIFHEIDD(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DJHGHIBGJCF_IEGOIFHEIDD_OFFSET))(this, a1);
		}

		::System::Void DNMNDNOAAJH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DJHGHIBGJCF_DNMNDNOAAJH_OFFSET))(this, a1);
		}

		::System::Void JJHEHOHPNBE(::UnityEngine::MeshRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + DJHGHIBGJCF_JJHEHOHPNBE_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::CRPVirtualCamera* OELGAPOIPIH()
		{
			return ((::UnityEngine::Rendering::CRPVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJHGHIBGJCF_OELGAPOIPIH_OFFSET))(this);
		}

		::System::Void PEEICDAMCMG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DJHGHIBGJCF_PEEICDAMCMG_OFFSET))(this, a1);
		}

		::System::Void AEIMGCLHIDJ(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DJHGHIBGJCF_AEIMGCLHIDJ_OFFSET))(this, a1);
		}

		::System::Void NDCAEPIDPLE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DJHGHIBGJCF_NDCAEPIDPLE_OFFSET))(this, a1);
		}

		::System::Void FLKHJAHCFFF(::System::Single a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + DJHGHIBGJCF_FLKHJAHCFFF_OFFSET))(this, a1, a2, a3);
		}

	};
