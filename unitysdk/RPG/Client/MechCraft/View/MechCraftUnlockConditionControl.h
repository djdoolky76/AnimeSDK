#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class AHDANEIIJML;
namespace RPG::Client::MechCraft::View { class MechCraftUnlockConditionControlBinder; }
namespace System { class String; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTUNLOCKCONDITIONCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD66B7F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTUNLOCKCONDITIONCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD66B3C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTUNLOCKCONDITIONCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD66B400)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTUNLOCKCONDITIONCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD6600D0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftUnlockConditionControl_TypeDefinitionIndex = 80066;

	class MechCraftUnlockConditionControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::AHDANEIIJML* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftUnlockConditionControlBinder* _Binder; // 0x20
		::System::String* _StateLocked; // 0x28
		::System::String* _StateUnlocked; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTUNLOCKCONDITIONCONTROL_CTOR_OFFSET))(this);
		}

		::AHDANEIIJML* get_Content()
		{
			return ((::AHDANEIIJML*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTUNLOCKCONDITIONCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::AHDANEIIJML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHDANEIIJML*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTUNLOCKCONDITIONCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::AHDANEIIJML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHDANEIIJML*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTUNLOCKCONDITIONCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

	};
}
