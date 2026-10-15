#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CRPCameraSmallWindowMeshUI_MeshUIOutlineType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/RPGTools/Timeline/PerformanceLiveStreamMeshUISwitchData.h"
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MeshRenderer; }

#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_BLJLIHCPEAK_OFFSET UNITYSDK_OFFSET(0xF7870)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_FLHNOIIPDOI_OFFSET UNITYSDK_OFFSET(0xF7830)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xF75F0)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_GET_CENTERPOINT_OFFSET UNITYSDK_OFFSET(0xF7560)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_GET_MESH_OFFSET UNITYSDK_OFFSET(0x2070)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_GET_SWITCHDATA_OFFSET UNITYSDK_OFFSET(0xF76F0)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_GET_WINDOWSIZE_OFFSET UNITYSDK_OFFSET(0xF7570)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_GET__WIDTHHEIGHTRATIO_OFFSET UNITYSDK_OFFSET(0xF7650)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_HDOICGFBNFA_OFFSET UNITYSDK_OFFSET(0xF7850)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_HMODHJPLCJD_OFFSET UNITYSDK_OFFSET(0xF7860)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_MNBEIKIHPOG_OFFSET UNITYSDK_OFFSET(0xF77C0)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_NBGAABDHEBC_OFFSET UNITYSDK_OFFSET(0xF7820)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_NNDCJGEAHGK_OFFSET UNITYSDK_OFFSET(0xF7840)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_PNLHNKDCEOA_OFFSET UNITYSDK_OFFSET(0xF77B0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CRPCameraSmallWindowMeshUI_TypeDefinitionIndex = 47898;

	struct alignas(8) CRPCameraSmallWindowMeshUI
	{
		::RPGTools::Timeline::CRPCameraSmallWindowMeshUI_MeshUIOutlineType OutlineType; // 0x10
		::UnityEngine::Vector2 Position; // 0x14
		::System::Single Rotation; // 0x1C
		::System::Single Scale; // 0x20
		::UnityEngine::Color Color; // 0x24
		::System::Single FinalScale; // 0x34
		::UnityEngine::MeshRenderer* _CachedMeshRenderer; // 0x38
		::UnityEngine::GameObject* _CachedMeshGo; // 0x40
		::UnityEngine::Camera* _CachedMainCamera; // 0x48
		// static const ::System::Object _MeshFixedDepth; // 0x0
		// static const ::System::Object _TargetWidthHeightRatio; // 0x0
		::UnityEngine::MeshRenderer* get_Mesh()
		{
			return ((::UnityEngine::MeshRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_GET_MESH_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_CenterPoint()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_GET_CENTERPOINT_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_WindowSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_GET_WINDOWSIZE_OFFSET))(this);
		}

		::System::Boolean get_Active()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_GET_ACTIVE_OFFSET))(this);
		}

		::System::Single get__WidthHeightRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_GET__WIDTHHEIGHTRATIO_OFFSET))(this);
		}

		::RPGTools::Timeline::PerformanceLiveStreamMeshUISwitchData get_SwitchData()
		{
			return ((::RPGTools::Timeline::PerformanceLiveStreamMeshUISwitchData(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_GET_SWITCHDATA_OFFSET))(this);
		}

		::System::Boolean PNLHNKDCEOA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_PNLHNKDCEOA_OFFSET))(this);
		}

		::System::Void MNBEIKIHPOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_MNBEIKIHPOG_OFFSET))(this);
		}

		::System::Void NBGAABDHEBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_NBGAABDHEBC_OFFSET))(this);
		}

		::System::Void FLHNOIIPDOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_FLHNOIIPDOI_OFFSET))(this);
		}

		::UnityEngine::Vector2 NNDCJGEAHGK(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_NNDCJGEAHGK_OFFSET))(this, a1);
		}

		::System::Void HDOICGFBNFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_HDOICGFBNFA_OFFSET))(this);
		}

		::System::Void HMODHJPLCJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_HMODHJPLCJD_OFFSET))(this);
		}

		::System::Void BLJLIHCPEAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_BLJLIHCPEAK_OFFSET))(this);
		}

	};
}
