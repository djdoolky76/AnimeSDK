#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDNHGIFGBFM_ContentType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class LDNHGIFGBFM;
class OMNGKIHLBOL;
namespace RPG::Client { class LocalizedText; }
namespace System { class IDisposable; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITERRORHINTCONTROL_BJAPGBDHHFM_OFFSET UNITYSDK_OFFSET(0xD61A450)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITERRORHINTCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD61A5E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITERRORHINTCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD61A050)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITERRORHINTCONTROL_JFAKEMMEMHJ_OFFSET UNITYSDK_OFFSET(0xD61A1E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITERRORHINTCONTROL_MOIOMPLMGPF_OFFSET UNITYSDK_OFFSET(0xD61A090)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITERRORHINTCONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD61A3C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITERRORHINTCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD615EB0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftEditErrorHintControl_TypeDefinitionIndex = 79878;

	class MechCraftCraftEditErrorHintControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::LDNHGIFGBFM* LFGMLJCCPCH; // 0x18
		::System::IDisposable* GLJKCIFADHM; // 0x20
		::RPG::Client::LocalizedText* _Text; // 0x28
		::RPG::Client::TextID _TextIDDiscouraged; // 0x30
		::RPG::Client::TextID _TextIDCoveringBanned; // 0x40
		::RPG::Client::TextID _TextIDOverOverlapped; // 0x50
		::UnityEngine::Animation* _Anim; // 0x60
		::System::String* _AnimNameFadeIn; // 0x68
		::System::String* _AnimNameFadeOut; // 0x70
		::OMNGKIHLBOL* MHDKFLLGCFH; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITERRORHINTCONTROL_CTOR_OFFSET))(this);
		}

		::LDNHGIFGBFM* get_Content()
		{
			return ((::LDNHGIFGBFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITERRORHINTCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::LDNHGIFGBFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDNHGIFGBFM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITERRORHINTCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITERRORHINTCONTROL_ONDESTROY_OFFSET))(this);
		}

		::System::Void JFAKEMMEMHJ(::LDNHGIFGBFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDNHGIFGBFM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITERRORHINTCONTROL_JFAKEMMEMHJ_OFFSET))(this, a1);
		}

		::System::Void MOIOMPLMGPF(::LDNHGIFGBFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDNHGIFGBFM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITERRORHINTCONTROL_MOIOMPLMGPF_OFFSET))(this, a1);
		}

		::System::Void BJAPGBDHHFM(::LDNHGIFGBFM_ContentType a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDNHGIFGBFM_ContentType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITERRORHINTCONTROL_BJAPGBDHHFM_OFFSET))(this, a1);
		}

	};
}
