#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class IIHJNOMNIEC;
namespace RPG::Client::MechCraft::View { class MechCraftStarControlBinder; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSTARCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEFCFE0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSTARCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1DEFCDA0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSTARCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x1DEFCDE0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSTARCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1DEE4C70)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftStarControl_TypeDefinitionIndex = 82796;

	class MechCraftStarControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::IIHJNOMNIEC* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftStarControlBinder* _Binder; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSTARCONTROL_CTOR_OFFSET))(this);
		}

		::IIHJNOMNIEC* get_Content()
		{
			return ((::IIHJNOMNIEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSTARCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::IIHJNOMNIEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIHJNOMNIEC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSTARCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::IIHJNOMNIEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIHJNOMNIEC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSTARCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

	};
}
