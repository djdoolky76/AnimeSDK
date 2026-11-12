#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"
namespace RPG::Client::MechCraft::View { class MechCraftAttributeRadarDimensionControl; }
namespace RPG::Client::MechCraft::View { class MechCraftRadarChartControl; }
namespace RPG::Client::MechCraft::View { class MechCraftRadarVerticesControl; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARCONTROLBINDER_CTOR_OFFSET UNITYSDK_OFFSET(0xE040A70)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARCONTROLBINDER_GET_RADARCHARTCURRENT_OFFSET UNITYSDK_OFFSET(0xE0403C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARCONTROLBINDER_GET_RADARCHARTTARGET_OFFSET UNITYSDK_OFFSET(0xE040260)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARCONTROLBINDER_GET_RADARVERTICESCURRENT_OFFSET UNITYSDK_OFFSET(0xE040470)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARCONTROLBINDER_GET_RADARVERTICESTARGET_OFFSET UNITYSDK_OFFSET(0xE040310)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARCONTROLBINDER_GET_VFXCHANGE1_OFFSET UNITYSDK_OFFSET(0xE03D0A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARCONTROLBINDER_GET_VFXCHANGE2_OFFSET UNITYSDK_OFFSET(0xE03D150)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARCONTROLBINDER_KKKPGPHAFNN_OFFSET UNITYSDK_OFFSET(0xE03DF40)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftAttributeRadarControlBinder_TypeDefinitionIndex = 82583;

	class MechCraftAttributeRadarControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARCONTROLBINDER_CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftRadarChartControl* get_RadarChartCurrent()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftRadarChartControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARCONTROLBINDER_GET_RADARCHARTCURRENT_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftRadarVerticesControl* get_RadarVerticesCurrent()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftRadarVerticesControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARCONTROLBINDER_GET_RADARVERTICESCURRENT_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftRadarChartControl* get_RadarChartTarget()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftRadarChartControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARCONTROLBINDER_GET_RADARCHARTTARGET_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftRadarVerticesControl* get_RadarVerticesTarget()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftRadarVerticesControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARCONTROLBINDER_GET_RADARVERTICESTARGET_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_VfxChange1()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARCONTROLBINDER_GET_VFXCHANGE1_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_VfxChange2()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARCONTROLBINDER_GET_VFXCHANGE2_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftAttributeRadarDimensionControl* KKKPGPHAFNN(::System::Int32 a1)
		{
			return ((::RPG::Client::MechCraft::View::MechCraftAttributeRadarDimensionControl*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARCONTROLBINDER_KKKPGPHAFNN_OFFSET))(this, a1);
		}

	};
}
