#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class ADDF5F55A85EB950; }
namespace UnityEngine::UI { class Graphic; }

#define UNITYENGINE_UI_GRAPHICRAYCASTER_F5628F8349D4A8A6_BFFC431AD09D0F1E_OFFSET UNITYSDK_OFFSET(0x43C6440)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x43C6840)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int GraphicRaycaster_F5628F8349D4A8A6_TypeDefinitionIndex = 18634;

	class GraphicRaycaster_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::UnityEngine::UI::GraphicRaycaster_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::UnityEngine::UI::GraphicRaycaster_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(GraphicRaycaster_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::ADDF5F55A85EB950<::UnityEngine::UI::Graphic*>** StaticGet_B55D445D85F5FA3C()
		{
			return (::System::ADDF5F55A85EB950<::UnityEngine::UI::Graphic*>**)Il2CppClass::FromTypeDefinitionIndex(GraphicRaycaster_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Int32 BFFC431AD09D0F1E(::UnityEngine::UI::Graphic* BE5F3F8ED1EE787F, ::UnityEngine::UI::Graphic* E13619F196867521)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::UI::Graphic*, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_F5628F8349D4A8A6_BFFC431AD09D0F1E_OFFSET))(this, BE5F3F8ED1EE787F, E13619F196867521);
		}
	};
}
