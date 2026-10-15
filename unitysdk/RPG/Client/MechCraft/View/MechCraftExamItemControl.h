#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/MechCraftExamItemState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class FKNABMFHPCN;
namespace RPG::Client::MechCraft::View { class MechCraftExamItemControlBinder; }
namespace System { class String; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD63A760)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD639FC0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROL_GET_ISWAITTOSHOWANIM_OFFSET UNITYSDK_OFFSET(0xD63A430)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD63A060)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROL_PEBGLOOEIIE_OFFSET UNITYSDK_OFFSET(0xD63A5B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD63A000)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROL_SET_ISWAITTOSHOWANIM_OFFSET UNITYSDK_OFFSET(0xD63A440)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROL_SHOWANIM_OFFSET UNITYSDK_OFFSET(0xD63A620)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftExamItemControl_TypeDefinitionIndex = 79961;

	class MechCraftExamItemControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* _StateUnknown; // 0x18
		::System::String* _StateCurrent; // 0x20
		::System::String* _StateFinish; // 0x28
		::FKNABMFHPCN* LFGMLJCCPCH; // 0x30
		::System::Boolean _IsWaitToShowAnim_k__BackingField; // 0x38
		::System::Byte _padding0[0x7];
		::RPG::Client::MechCraft::View::MechCraftExamItemControlBinder* _Binder; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROL_CTOR_OFFSET))(this);
		}

		::FKNABMFHPCN* get_Content()
		{
			return ((::FKNABMFHPCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::FKNABMFHPCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKNABMFHPCN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWaitToShowAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROL_GET_ISWAITTOSHOWANIM_OFFSET))(this);
		}

		::System::Void set_IsWaitToShowAnim(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROL_SET_ISWAITTOSHOWANIM_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::FKNABMFHPCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKNABMFHPCN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

		::System::String* PEBGLOOEIIE(::RPG::Client::MechCraft::ViewModel::MechCraftExamItemState a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftExamItemState))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROL_PEBGLOOEIIE_OFFSET))(this, a1);
		}

		::System::Void ShowAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROL_SHOWANIM_OFFSET))(this);
		}

	};
}
