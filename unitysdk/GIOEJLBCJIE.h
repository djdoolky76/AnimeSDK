#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::Prop { class ChimeraEvaluationMockAnimator; }
namespace RPG::Client::Prop { class ChimeraGameObjectBuilder; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define GIOEJLBCJIE_AJCFBEEKBLC_OFFSET UNITYSDK_OFFSET(0x1A3F16D0)
#define GIOEJLBCJIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1A3F1250)
#define GIOEJLBCJIE_GET_CHIMERAID_OFFSET UNITYSDK_OFFSET(0x1A3F1830)
#define GIOEJLBCJIE_GET_UNITYGO_OFFSET UNITYSDK_OFFSET(0x1A3F1850)
#define GIOEJLBCJIE_HFGFGHJLKPE_OFFSET UNITYSDK_OFFSET(0x1A3F1680)
#define GIOEJLBCJIE_JHOFAJPNGJK_OFFSET UNITYSDK_OFFSET(0x1A3F17B0)
#define GIOEJLBCJIE_JJCMLFADNMA_OFFSET UNITYSDK_OFFSET(0x1A3F1630)
#define GIOEJLBCJIE_LPMNDPIBLFB_OFFSET UNITYSDK_OFFSET(0x1A3F15B0)
#define GIOEJLBCJIE_PAFCMAMJENB_OFFSET UNITYSDK_OFFSET(0x1A3F1720)
#define GIOEJLBCJIE_PEMLPLGBPCL_OFFSET UNITYSDK_OFFSET(0x1A3F12B0)
#define GIOEJLBCJIE_SET_CHIMERAID_OFFSET UNITYSDK_OFFSET(0x1A3F1840)
#define GIOEJLBCJIE_SET_UNITYGO_OFFSET UNITYSDK_OFFSET(0x1A3F1860)

inline static constexpr unsigned int GIOEJLBCJIE_TypeDefinitionIndex = 81181;

	class GIOEJLBCJIE : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* _UnityGO_k__BackingField; // 0x10
		::UnityEngine::GameObject* MIDIOOAFHDM; // 0x18
		::UnityEngine::Transform* OAGDNIBLMAC; // 0x20
		::RPG::Client::Prop::ChimeraGameObjectBuilder* LIOJKFIGGIJ; // 0x28
		::UnityEngine::Transform* NOBIHPOEJIM; // 0x30
		::UnityEngine::Transform* FNHOHADJEPE; // 0x38
		::RPG::Client::Prop::ChimeraEvaluationMockAnimator* APPGGMLEPLN; // 0x40
		::System::UInt32 _ChimeraID_k__BackingField; // 0x48
		// static const ::System::String* FBAIMOIGOHJ; // 0x0
		::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + GIOEJLBCJIE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void PEMLPLGBPCL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIOEJLBCJIE_PEMLPLGBPCL_OFFSET))(this, a1);
		}

		::System::Void JJCMLFADNMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIOEJLBCJIE_JJCMLFADNMA_OFFSET))(this);
		}

		::System::Void HFGFGHJLKPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIOEJLBCJIE_HFGFGHJLKPE_OFFSET))(this);
		}

		::System::Void AJCFBEEKBLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIOEJLBCJIE_AJCFBEEKBLC_OFFSET))(this);
		}

		::System::Void LPMNDPIBLFB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIOEJLBCJIE_LPMNDPIBLFB_OFFSET))(this, a1);
		}

		::System::Void PAFCMAMJENB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GIOEJLBCJIE_PAFCMAMJENB_OFFSET))(this, a1);
		}

		::System::Void JHOFAJPNGJK(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + GIOEJLBCJIE_JHOFAJPNGJK_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChimeraID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIOEJLBCJIE_GET_CHIMERAID_OFFSET))(this);
		}

		::System::Void set_ChimeraID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIOEJLBCJIE_SET_CHIMERAID_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_UnityGO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIOEJLBCJIE_GET_UNITYGO_OFFSET))(this);
		}

		::System::Void set_UnityGO(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + GIOEJLBCJIE_SET_UNITYGO_OFFSET))(this, a1);
		}

	};
