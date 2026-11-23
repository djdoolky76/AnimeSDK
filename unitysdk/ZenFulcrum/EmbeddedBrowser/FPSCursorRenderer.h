#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class A1762F3593A255C7;
namespace UnityEngine { class MeshCollider; }
namespace UnityEngine { class Transform; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }
namespace ZenFulcrum::EmbeddedBrowser { class FPSBrowserUI; }

#define ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_B4540B0BF0E12E55_OFFSET UNITYSDK_OFFSET(0x43F72A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_B6294E21F307CB95_OFFSET UNITYSDK_OFFSET(0x167AE10)
#define ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_B78C2C56FECAC938_OFFSET UNITYSDK_OFFSET(0x167AE20)
#define ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_E19D3BA5582A8A0A_OFFSET UNITYSDK_OFFSET(0x184C910)
#define ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_E67ED3B7473BFE26_OFFSET UNITYSDK_OFFSET(0x43F74F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x43F77F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_F5FA821676AF0AFB_OFFSET UNITYSDK_OFFSET(0x43F78A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x43F7880)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int FPSCursorRenderer_TypeDefinitionIndex = 19413;

	class FPSCursorRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::ZenFulcrum::EmbeddedBrowser::FPSCursorRenderer** StaticGet_EAE0569B007CD057()
		{
			return (::ZenFulcrum::EmbeddedBrowser::FPSCursorRenderer**)Il2CppClass::FromTypeDefinitionIndex(FPSCursorRenderer_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Single scale; // 0x20
		::System::Single maxDistance; // 0x24
		::UnityEngine::Transform* pointer; // 0x28
		::System::Boolean A8A3D7FB8F0D18EE; // 0x30
		::System::Byte _padding0[0x7];
		::A1762F3593A255C7* B9C5031B70B8ABCE; // 0x38
		::A1762F3593A255C7* A7D3B09A2105BA3F; // 0x40

		::System::Void E19D3BA5582A8A0A(::A1762F3593A255C7* EE95B9A38ED3DCF5, ::ZenFulcrum::EmbeddedBrowser::FPSBrowserUI* AAFDD1623DD3772F)
		{
			return ((::System::Void(*)(::PVOID, ::A1762F3593A255C7*, ::ZenFulcrum::EmbeddedBrowser::FPSBrowserUI*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_E19D3BA5582A8A0A_OFFSET))(this, EE95B9A38ED3DCF5, AAFDD1623DD3772F);
		}

		static ::System::Void E67ED3B7473BFE26(::ZenFulcrum::EmbeddedBrowser::Browser* F4DFD92A32442E67, ::UnityEngine::MeshCollider* FF762A0FE86505A5)
		{
			return ((::System::Void(*)(::ZenFulcrum::EmbeddedBrowser::Browser*, ::UnityEngine::MeshCollider*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_E67ED3B7473BFE26_OFFSET))(F4DFD92A32442E67, FF762A0FE86505A5);
		}

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_F328E4D8818B1E12_OFFSET))(this);
		}

		::System::Void B4540B0BF0E12E55()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_B4540B0BF0E12E55_OFFSET))(this);
		}

		::System::Void B78C2C56FECAC938(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_B78C2C56FECAC938_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Boolean B6294E21F307CB95()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_B6294E21F307CB95_OFFSET))(this);
		}

		static ::ZenFulcrum::EmbeddedBrowser::FPSCursorRenderer* F5FA821676AF0AFB()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::FPSCursorRenderer*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_F5FA821676AF0AFB_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER__CTOR_OFFSET))(this);
		}
	};
}
