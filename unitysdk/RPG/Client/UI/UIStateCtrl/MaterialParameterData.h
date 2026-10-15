#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/MaterialParameterType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_BFLFBMNKMMH_OFFSET UNITYSDK_OFFSET(0xE34AE10)
#define RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_BGPMLLNHBKH_OFFSET UNITYSDK_OFFSET(0xE34AC00)
#define RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE34AE60)
#define RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_DIKIAKAEPHJ_OFFSET UNITYSDK_OFFSET(0xE34AC60)
#define RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_GGBKGDFPBJD_OFFSET UNITYSDK_OFFSET(0xE34ACB0)
#define RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_IHABEJLNGFN_OFFSET UNITYSDK_OFFSET(0xE34AD70)
#define RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_KHKEKNLFKFK_OFFSET UNITYSDK_OFFSET(0xE34AAD0)
#define RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_LMJCPPHNKOJ_OFFSET UNITYSDK_OFFSET(0xE34AD10)
#define RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_NJHBIJJCHJA_OFFSET UNITYSDK_OFFSET(0xE34AB20)
#define RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_OFPNFHAKMEK_OFFSET UNITYSDK_OFFSET(0xE34ABA0)
#define RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_PMNAIFOMCPI_OFFSET UNITYSDK_OFFSET(0xE34ADC0)

namespace RPG::Client::UI::UIStateCtrl
{
	class MaterialParameterData : public ::System::Object
	{
	public:
		::UnityEngine::Material* TargetMaterial; // 0x10
		::System::String* ParameterName; // 0x18
		::RPG::Client::UI::UIStateCtrl::MaterialParameterType ParameterType; // 0x20
		::System::Boolean UseAnimation; // 0x24
		::System::Byte _padding0[0x3];
		::System::Single InitialFloatValue; // 0x28
		::System::Single FinalFloatValue; // 0x2C
		::UnityEngine::Vector3 InitialVector3Value; // 0x30
		::UnityEngine::Vector3 FinalVector3Value; // 0x3C
		::UnityEngine::Color InitialColorValue; // 0x48
		::UnityEngine::Color FinalColorValue; // 0x58
		::System::String* KeywordName; // 0x68
		::System::Boolean EnableKeyword; // 0x70
		::System::Byte _padding1[0x3];
		::System::Single AnimationDuration; // 0x74
		::UnityEngine::AnimationCurve* AnimationCurve; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_CTOR_OFFSET))(this);
		}

		::System::Boolean KHKEKNLFKFK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_KHKEKNLFKFK_OFFSET))(this);
		}

		::System::Boolean NJHBIJJCHJA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_NJHBIJJCHJA_OFFSET))(this);
		}

		::System::Boolean OFPNFHAKMEK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_OFPNFHAKMEK_OFFSET))(this);
		}

		::System::Boolean BGPMLLNHBKH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_BGPMLLNHBKH_OFFSET))(this);
		}

		::System::Boolean DIKIAKAEPHJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_DIKIAKAEPHJ_OFFSET))(this);
		}

		::System::Boolean GGBKGDFPBJD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_GGBKGDFPBJD_OFFSET))(this);
		}

		::System::Boolean LMJCPPHNKOJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_LMJCPPHNKOJ_OFFSET))(this);
		}

		::System::Boolean IHABEJLNGFN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_IHABEJLNGFN_OFFSET))(this);
		}

		::System::Boolean PMNAIFOMCPI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_PMNAIFOMCPI_OFFSET))(this);
		}

		::System::Boolean BFLFBMNKMMH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_BFLFBMNKMMH_OFFSET))(this);
		}

	};
}
