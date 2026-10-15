#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class HLOFKELIMGM;
namespace RPG::Client::MechCraft::View { class MechCraftSettleRewardItemControlBinder; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEREWARDITEMCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD65C180)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEREWARDITEMCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD65BAF0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEREWARDITEMCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD65BB30)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEREWARDITEMCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD658B30)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftSettleRewardItemControl_TypeDefinitionIndex = 80030;

	class MechCraftSettleRewardItemControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::HLOFKELIMGM* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftSettleRewardItemControlBinder* _Binder; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEREWARDITEMCONTROL_CTOR_OFFSET))(this);
		}

		::HLOFKELIMGM* get_Content()
		{
			return ((::HLOFKELIMGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEREWARDITEMCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::HLOFKELIMGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLOFKELIMGM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEREWARDITEMCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::HLOFKELIMGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLOFKELIMGM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEREWARDITEMCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

	};
}
