#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrackExtensionMonoPlugin_GDDBFGDLILA.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace BansheeGz::BGSpline::Curve { class BGCurve; }

#define RPG_CLIENT_TRACKEXTENSIONMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xE2AB9E0)
#define RPG_CLIENT_TRACKEXTENSIONMONOPLUGIN_EHKIOIJPAAD_OFFSET UNITYSDK_OFFSET(0xE2AAE60)
#define RPG_CLIENT_TRACKEXTENSIONMONOPLUGIN_GETANCHOR_OFFSET UNITYSDK_OFFSET(0xE2A9B90)
#define RPG_CLIENT_TRACKEXTENSIONMONOPLUGIN_GETPOSITION_OFFSET UNITYSDK_OFFSET(0xE2AB440)
#define RPG_CLIENT_TRACKEXTENSIONMONOPLUGIN_GET_CURVEMATH_OFFSET UNITYSDK_OFFSET(0xE2A9920)
#define RPG_CLIENT_TRACKEXTENSIONMONOPLUGIN_GET_CURVE_OFFSET UNITYSDK_OFFSET(0xE2A9870)
#define RPG_CLIENT_TRACKEXTENSIONMONOPLUGIN_LKEMAPHCJCD_OFFSET UNITYSDK_OFFSET(0xE2AB560)

namespace RPG::Client
{
	inline static constexpr unsigned int TrackExtensionMonoPlugin_TypeDefinitionIndex = 71029;

	class TrackExtensionMonoPlugin
	{
	public:
		::System::Boolean IfUseRotation; // 0x30
		::System::Boolean IfUseAuxiliaryNormal; // 0x31
		::System::Boolean IfPreviewPosition; // 0x32
		::System::Byte _padding0[0x1];
		::System::Single PreviewDistance; // 0x34
		::System::Single PreviewSideOffset; // 0x38
		::System::Single PreviewNormOffset; // 0x3C
		::System::Single PreviewSize; // 0x40
		::System::Byte _padding1[0x4];
		::BansheeGz::BGSpline::Curve::BGCurve* PNOHBBMHGLB; // 0x48
		::BansheeGz::BGSpline::Components::BGCcMath* JPEGGCCPIEG; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRACKEXTENSIONMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Curve::BGCurve* get_Curve()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRACKEXTENSIONMONOPLUGIN_GET_CURVE_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Components::BGCcMath* get_CurveMath()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcMath*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRACKEXTENSIONMONOPLUGIN_GET_CURVEMATH_OFFSET))(this);
		}

		::RPG::Client::TrackExtensionMonoPlugin_GDDBFGDLILA GetAnchor(::System::Single a1)
		{
			return ((::RPG::Client::TrackExtensionMonoPlugin_GDDBFGDLILA(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRACKEXTENSIONMONOPLUGIN_GETANCHOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetPosition(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRACKEXTENSIONMONOPLUGIN_GETPOSITION_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::TrackExtensionMonoPlugin_GDDBFGDLILA LKEMAPHCJCD(::BansheeGz::BGSpline::Components::BGCcMath* a1, ::System::Single a2)
		{
			return ((::RPG::Client::TrackExtensionMonoPlugin_GDDBFGDLILA(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcMath*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRACKEXTENSIONMONOPLUGIN_LKEMAPHCJCD_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TrackExtensionMonoPlugin_GDDBFGDLILA EHKIOIJPAAD(::System::Single a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector3 a4)
		{
			return ((::RPG::Client::TrackExtensionMonoPlugin_GDDBFGDLILA(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRACKEXTENSIONMONOPLUGIN_EHKIOIJPAAD_OFFSET))(this, a1, a2, a3, a4);
		}

	};
}
