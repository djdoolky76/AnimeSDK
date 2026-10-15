#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class HBDIGCKCAEB;
namespace RPG::Client::MechCraft::View { class MechCraftOrderSelectControlBinder; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD648EA0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROL_HEHMNGANAJO_OFFSET UNITYSDK_OFFSET(0xD648880)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD6488E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROL_KCEDLPGDJLN_OFFSET UNITYSDK_OFFSET(0xD648840)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftOrderSelectControl_TypeDefinitionIndex = 80001;

	class MechCraftOrderSelectControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::HBDIGCKCAEB* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftOrderSelectControlBinder* _Binder; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROL_CTOR_OFFSET))(this);
		}

		::HBDIGCKCAEB* KCEDLPGDJLN()
		{
			return ((::HBDIGCKCAEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROL_KCEDLPGDJLN_OFFSET))(this);
		}

		::System::Void HEHMNGANAJO(::HBDIGCKCAEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBDIGCKCAEB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROL_HEHMNGANAJO_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::HBDIGCKCAEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBDIGCKCAEB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

	};
}
