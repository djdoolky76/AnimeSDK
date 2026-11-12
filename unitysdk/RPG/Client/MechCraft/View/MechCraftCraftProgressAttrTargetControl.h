#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class IOJNNBAILBC;
namespace RPG::Client::MechCraft::View { class MechCraftCraftProgressAttrTargetControlBinder; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xE07F190)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL_GETTARGETANCHORPOS_OFFSET UNITYSDK_OFFSET(0xE07E170)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xE07EC30)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xE07EC70)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xE07D750)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL___REFRESH_B__6_0_OFFSET UNITYSDK_OFFSET(0xE07F1A0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftProgressAttrTargetControl_TypeDefinitionIndex = 82691;

	class MechCraftCraftProgressAttrTargetControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::IOJNNBAILBC* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftCraftProgressAttrTargetControlBinder* _Binder; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL_CTOR_OFFSET))(this);
		}

		::IOJNNBAILBC* get_Content()
		{
			return ((::IOJNNBAILBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::IOJNNBAILBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOJNNBAILBC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetTargetAnchorPos(::RPG::Client::MechCraft::MechCraftAttributeType a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL_GETTARGETANCHORPOS_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::IOJNNBAILBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOJNNBAILBC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* __Refresh_b__6_0()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL___REFRESH_B__6_0_OFFSET))(this);
		}

	};
}
