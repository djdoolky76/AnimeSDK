#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class IIIBPJDFPLJ;
namespace R3 { class CompositeDisposable; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftProgressOverlapControlBinder; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSOVERLAPCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xE0C4D60)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSOVERLAPCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xE0C42B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSOVERLAPCONTROL_JFAKEMMEMHJ_OFFSET UNITYSDK_OFFSET(0xE0C43C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSOVERLAPCONTROL_MOIOMPLMGPF_OFFSET UNITYSDK_OFFSET(0xE0C42F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSOVERLAPCONTROL_NDPIJBKNNLJ_OFFSET UNITYSDK_OFFSET(0xE0C4A50)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSOVERLAPCONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE0C4900)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSOVERLAPCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xE0C0E40)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftProgressOverlapControl_TypeDefinitionIndex = 82718;

	class MechCraftCraftProgressOverlapControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::IIIBPJDFPLJ* LFGMLJCCPCH; // 0x18
		::R3::CompositeDisposable* GLJKCIFADHM; // 0x20
		::RPG::Client::MechCraft::View::MechCraftCraftProgressOverlapControlBinder* _Binder; // 0x28
		::System::String* _StateNormal; // 0x30
		::System::String* _StateError; // 0x38
		::System::String* _AnimEventCraftFadeInHintOverlap; // 0x40
		::System::String* _AnimEventCraftTargetFinished; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSOVERLAPCONTROL_CTOR_OFFSET))(this);
		}

		::IIIBPJDFPLJ* get_Content()
		{
			return ((::IIIBPJDFPLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSOVERLAPCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::IIIBPJDFPLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIIBPJDFPLJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSOVERLAPCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSOVERLAPCONTROL_ONDESTROY_OFFSET))(this);
		}

		::System::Void JFAKEMMEMHJ(::IIIBPJDFPLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIIBPJDFPLJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSOVERLAPCONTROL_JFAKEMMEMHJ_OFFSET))(this, a1);
		}

		::System::Void MOIOMPLMGPF(::IIIBPJDFPLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIIBPJDFPLJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSOVERLAPCONTROL_MOIOMPLMGPF_OFFSET))(this, a1);
		}

		::System::Void NDPIJBKNNLJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSOVERLAPCONTROL_NDPIJBKNNLJ_OFFSET))(this, a1);
		}

	};
}
