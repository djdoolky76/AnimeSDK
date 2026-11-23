#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/BaseRaycaster.h"
#include "unitysdk/UnityEngine/UI/GraphicRaycaster_FCD61ACEA2950DF6.h"
#include "unitysdk/UnityEngine/B8AC70DD96553B07.h"
#include "unitysdk/F5D9B2730D543D46/B22D1632AF3C5F18.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace F5D9B2730D543D46 { class A9BDD7E8F3994CE6; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine::UI { class Graphic; }

#define UNITYENGINE_UI_GRAPHICRAYCASTER_A1EF2D84C5DAA438_OFFSET UNITYSDK_OFFSET(0x191BCC0)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_A52325069ED6C3DD_OFFSET UNITYSDK_OFFSET(0x43B4110)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_ACF68E7FF81AFE56_1_OFFSET UNITYSDK_OFFSET(0x43B30C0)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_ACF68E7FF81AFE56_OFFSET UNITYSDK_OFFSET(0x43B2B70)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_AFDB5019F72B55AB_OFFSET UNITYSDK_OFFSET(0x18D8920)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_E013C10B146CB366_OFFSET UNITYSDK_OFFSET(0x1925A50)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_EE7405EC9EB8384F_OFFSET UNITYSDK_OFFSET(0x43B42C0)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_F3009D770C96C882_OFFSET UNITYSDK_OFFSET(0x1925A40)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_F41B2F65192D4AFD_OFFSET UNITYSDK_OFFSET(0x43B4260)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_F4372FCBB5121F9F_OFFSET UNITYSDK_OFFSET(0x43B41A0)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_FA71A5B89229A89C_OFFSET UNITYSDK_OFFSET(0x1E962E0)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_FE303F3D23E21CC1_OFFSET UNITYSDK_OFFSET(0x1AFB130)
#define UNITYENGINE_UI_GRAPHICRAYCASTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x43B4000)
#define UNITYENGINE_UI_GRAPHICRAYCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x43B4080)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int GraphicRaycaster_TypeDefinitionIndex = 18635;

	class GraphicRaycaster : public ::UnityEngine::EventSystems::BaseRaycaster
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>** StaticGet_FEDCA934C11C2D32()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>**)Il2CppClass::FromTypeDefinitionIndex(GraphicRaycaster_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Boolean m_IgnoreReversedGraphics; // 0x28
		::System::Byte _padding0[0x3];
		::UnityEngine::UI::GraphicRaycaster_FCD61ACEA2950DF6 m_BlockingObjects; // 0x2C
		::UnityEngine::B8AC70DD96553B07 m_BlockingMask; // 0x30
		::System::Byte _padding1[0x4];
		::UnityEngine::Canvas* E95728BD03BF33D1; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>* AB547902CB906059; // 0x40

		::System::Void FE303F3D23E21CC1(::UnityEngine::UI::GraphicRaycaster_FCD61ACEA2950DF6 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::GraphicRaycaster_FCD61ACEA2950DF6))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_FE303F3D23E21CC1_OFFSET))(this, E937D4885DAA1AE8);
		}

		static ::System::Void ACF68E7FF81AFE56(::UnityEngine::Canvas* E8C4D6A7589BBAA2, ::UnityEngine::Camera* E20C7C245327F84D, ::UnityEngine::Vector2 FCC0933525D371F5, ::System::Collections::Generic::IList_1<::UnityEngine::UI::Graphic*>* F2E8C3788C4BDC31, ::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>* ED6F2018685A621A)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas*, ::UnityEngine::Camera*, ::UnityEngine::Vector2, ::System::Collections::Generic::IList_1<::UnityEngine::UI::Graphic*>*, ::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_ACF68E7FF81AFE56_OFFSET))(E8C4D6A7589BBAA2, E20C7C245327F84D, FCC0933525D371F5, F2E8C3788C4BDC31, ED6F2018685A621A);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER__CCTOR_OFFSET))();
		}

		::System::Void FA71A5B89229A89C(::UnityEngine::B8AC70DD96553B07 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::B8AC70DD96553B07))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_FA71A5B89229A89C_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::UI::GraphicRaycaster_FCD61ACEA2950DF6 A1EF2D84C5DAA438()
		{
			return ((::UnityEngine::UI::GraphicRaycaster_FCD61ACEA2950DF6(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_A1EF2D84C5DAA438_OFFSET))(this);
		}

		::System::Void ACF68E7FF81AFE56_1(::F5D9B2730D543D46::A9BDD7E8F3994CE6* E7336521BA8945EE, ::System::Collections::Generic::List_1<::F5D9B2730D543D46::B22D1632AF3C5F18>* E438586BDA525A50)
		{
			return ((::System::Void(*)(::PVOID, ::F5D9B2730D543D46::A9BDD7E8F3994CE6*, ::System::Collections::Generic::List_1<::F5D9B2730D543D46::B22D1632AF3C5F18>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_ACF68E7FF81AFE56_1_OFFSET))(this, E7336521BA8945EE, E438586BDA525A50);
		}

		::UnityEngine::Canvas* A52325069ED6C3DD()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_A52325069ED6C3DD_OFFSET))(this);
		}

		::System::Boolean F3009D770C96C882()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_F3009D770C96C882_OFFSET))(this);
		}

		::UnityEngine::B8AC70DD96553B07 AFDB5019F72B55AB()
		{
			return ((::UnityEngine::B8AC70DD96553B07(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_AFDB5019F72B55AB_OFFSET))(this);
		}

		::System::Int32 EE7405EC9EB8384F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_EE7405EC9EB8384F_OFFSET))(this);
		}

		::System::Int32 F41B2F65192D4AFD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_F41B2F65192D4AFD_OFFSET))(this);
		}

		::System::Void E013C10B146CB366(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_E013C10B146CB366_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Camera* F4372FCBB5121F9F()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_F4372FCBB5121F9F_OFFSET))(this);
		}
	};
}
