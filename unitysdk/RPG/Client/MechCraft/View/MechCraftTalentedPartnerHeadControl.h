#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class FKKIAHNJCBC;
namespace RPG::Client::MechCraft::View { class MechCraftTalentedPartnerHeadControlBinder; }
namespace System { class String; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTEDPARTNERHEADCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD672510)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTEDPARTNERHEADCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD671DD0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTEDPARTNERHEADCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD671E70)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTEDPARTNERHEADCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD671E10)

namespace RPG::Client::MechCraft::View
{
	class MechCraftTalentedPartnerHeadControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* _StateDefault; // 0x18
		::System::String* _StateSpecial; // 0x20
		::FKKIAHNJCBC* LFGMLJCCPCH; // 0x28
		::RPG::Client::MechCraft::View::MechCraftTalentedPartnerHeadControlBinder* _Binder; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTEDPARTNERHEADCONTROL_CTOR_OFFSET))(this);
		}

		::FKKIAHNJCBC* get_Content()
		{
			return ((::FKKIAHNJCBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTEDPARTNERHEADCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::FKKIAHNJCBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKKIAHNJCBC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTEDPARTNERHEADCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::FKKIAHNJCBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKKIAHNJCBC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTEDPARTNERHEADCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

	};
}
