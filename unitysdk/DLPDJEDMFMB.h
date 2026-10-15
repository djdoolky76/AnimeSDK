#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIJPIJFOOCN;
namespace RPG::Client { class UIFollow3DTarget; }
namespace UnityEngine { class Transform; }

#define DLPDJEDMFMB_CDEJPMDKIOH_OFFSET UNITYSDK_OFFSET(0xF8B6CB0)
#define DLPDJEDMFMB_CTOR_OFFSET UNITYSDK_OFFSET(0xF8B6830)
#define DLPDJEDMFMB_GLMAKLKGGNA_OFFSET UNITYSDK_OFFSET(0xF8B6B60)
#define DLPDJEDMFMB_HOKCKOEPGKK_OFFSET UNITYSDK_OFFSET(0xF8B6AE0)
#define DLPDJEDMFMB_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xF8B6840)
#define DLPDJEDMFMB_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xF8B6890)
#define DLPDJEDMFMB_LKJGCBHLILB_OFFSET UNITYSDK_OFFSET(0xF8B69D0)

inline static constexpr unsigned int DLPDJEDMFMB_TypeDefinitionIndex = 81926;

	class DLPDJEDMFMB : public ::System::Object
	{
	public:
		::RPG::Client::UIFollow3DTarget* PNODIKHCBGB; // 0x10
		::UnityEngine::Transform* NEGJDPKNJME; // 0x18
		// static const ::System::Object CJAGFOAKIGD; // 0x0
		::System::Void _ctor(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + DLPDJEDMFMB_CTOR_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPDJEDMFMB_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void LJBCDJNNBJH(::HIJPIJFOOCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIJPIJFOOCN*))((::PBYTE)hIl2Cpp + DLPDJEDMFMB_LJBCDJNNBJH_OFFSET))(this, a1);
		}

		static ::UnityEngine::Transform* HOKCKOEPGKK(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + DLPDJEDMFMB_HOKCKOEPGKK_OFFSET))(a1);
		}

		::RPG::Client::UIFollow3DTarget* LKJGCBHLILB()
		{
			return ((::RPG::Client::UIFollow3DTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPDJEDMFMB_LKJGCBHLILB_OFFSET))(this);
		}

		::System::Void GLMAKLKGGNA(::RPG::Client::UIFollow3DTarget* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFollow3DTarget*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + DLPDJEDMFMB_GLMAKLKGGNA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CDEJPMDKIOH(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + DLPDJEDMFMB_CDEJPMDKIOH_OFFSET))(this, a1, a2);
		}

	};
