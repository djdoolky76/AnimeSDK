#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class UILineRenderer; }
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT_ABDJMOLOIPJ_OFFSET UNITYSDK_OFFSET(0xDBDE610)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT_AJCNEMJBEPL_OFFSET UNITYSDK_OFFSET(0xDBDDD40)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT_CJLLGBFJOPH_OFFSET UNITYSDK_OFFSET(0xDBDE740)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT_CONTAINSUID_OFFSET UNITYSDK_OFFSET(0xDBDDC20)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xDBDE7D0)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT_DDBDFKMENIB_OFFSET UNITYSDK_OFFSET(0xDBDDF00)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xDBDD930)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT_EGAFDOOCGPF_OFFSET UNITYSDK_OFFSET(0xDBDDC80)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT_GFLKGMMOOLN_OFFSET UNITYSDK_OFFSET(0xDBDDDC0)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT_HIDE_OFFSET UNITYSDK_OFFSET(0xDBDE3A0)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT_KLCJFNBDLDE_OFFSET UNITYSDK_OFFSET(0xDBDE180)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT_NFPKDNJJJAF_OFFSET UNITYSDK_OFFSET(0xDBDD790)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0xDBDD980)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDBDDA50)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT_PACBDGILPHI_OFFSET UNITYSDK_OFFSET(0xDBDDB70)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT_SHOW_OFFSET UNITYSDK_OFFSET(0xDBDDB10)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0xDBDD750)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightMemberLinkEffect_TypeDefinitionIndex = 66018;

	class GridFightMemberLinkEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::UILineRenderer* LFCILBNKKHJ; // 0x18
		::RPG::Client::UILineRenderer* OLJFECEBHPI; // 0x20
		::RPG::Client::UILineRenderer* JIGIJLPELCD; // 0x28
		::UnityEngine::Transform* EJNDGHCHAMC; // 0x30
		::UnityEngine::Transform* LPHHNGIOGMP; // 0x38
		::UnityEngine::Transform* NPHPIHFKPGA; // 0x40
		::UnityEngine::Transform* MCJIGOIDMCH; // 0x48
		::UnityEngine::Transform* KNGEKPKBIDK; // 0x50
		::UnityEngine::Transform* GNPBGAKIAHM; // 0x58
		::System::UInt32 DMMFBAFKGEP; // 0x60
		::System::UInt32 OLILHBKICKG; // 0x64
		// static const ::System::Object OPPFJHBNEDJ; // 0x0
		// static const ::System::String* KONKECODJFA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT_CTOR_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void NFPKDNJJJAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT_NFPKDNJJJAF_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT_ONDESTROY_OFFSET))(this);
		}

		::System::Void Show(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT_SHOW_OFFSET))(this, a1, a2);
		}

		::System::Boolean ContainsUID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT_CONTAINSUID_OFFSET))(this, a1);
		}

		::System::Void EGAFDOOCGPF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT_EGAFDOOCGPF_OFFSET))(this, a1);
		}

		::System::Void PACBDGILPHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT_PACBDGILPHI_OFFSET))(this);
		}

		::UnityEngine::Transform* AJCNEMJBEPL(::System::UInt32 a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT_AJCNEMJBEPL_OFFSET))(this, a1);
		}

		::System::Void Hide(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT_HIDE_OFFSET))(this, a1);
		}

		::System::Void GFLKGMMOOLN(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT_GFLKGMMOOLN_OFFSET))(this, a1, a2);
		}

		::System::Void DDBDFKMENIB(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT_DDBDFKMENIB_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 ABDJMOLOIPJ(::RPG::Client::UILineRenderer* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::Client::UILineRenderer*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT_ABDJMOLOIPJ_OFFSET))(this, a1, a2);
		}

		::System::Void KLCJFNBDLDE(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT_KLCJFNBDLDE_OFFSET))(this, a1, a2);
		}

		::System::Void CJLLGBFJOPH(::RPG::Client::UILineRenderer* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UILineRenderer*, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT_CJLLGBFJOPH_OFFSET))(this, a1, a2, a3);
		}

	};
}
