#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class VirtualCursor; }
namespace RPG::Client::MechCraft::View { class MechCraftAttributeRadarControl; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftProgressAttrTargetControl; }
namespace UnityEngine { class Camera; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRCONTROLBINDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F98A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRCONTROLBINDER_GET_PARTICLECAMERA_OFFSET UNITYSDK_OFFSET(0x1C6F9340)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRCONTROLBINDER_GET_PREFABTRAIL_OFFSET UNITYSDK_OFFSET(0x1C6F9290)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRCONTROLBINDER_GET_RADAR_OFFSET UNITYSDK_OFFSET(0x1C6F8470)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRCONTROLBINDER_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1C6F8360)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRCONTROLBINDER_GET_VIRTUALCURSOR_OFFSET UNITYSDK_OFFSET(0x1C6F91E0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftProgressAttrControlBinder_TypeDefinitionIndex = 82689;

	class MechCraftCraftProgressAttrControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRCONTROLBINDER_CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCraftProgressAttrTargetControl* get_Target()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCraftProgressAttrTargetControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRCONTROLBINDER_GET_TARGET_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftAttributeRadarControl* get_Radar()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftAttributeRadarControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRCONTROLBINDER_GET_RADAR_OFFSET))(this);
		}

		::RPG::Client::PrefabLoadMeta* get_PrefabTrail()
		{
			return ((::RPG::Client::PrefabLoadMeta*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRCONTROLBINDER_GET_PREFABTRAIL_OFFSET))(this);
		}

		::UnityEngine::Camera* get_ParticleCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRCONTROLBINDER_GET_PARTICLECAMERA_OFFSET))(this);
		}

		::RPG::Client::VirtualCursor* get_VirtualCursor()
		{
			return ((::RPG::Client::VirtualCursor*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRCONTROLBINDER_GET_VIRTUALCURSOR_OFFSET))(this);
		}

	};
}
