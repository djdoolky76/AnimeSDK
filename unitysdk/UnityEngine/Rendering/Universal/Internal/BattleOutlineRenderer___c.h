#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class Renderer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BATTLEOUTLINERENDERER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D19CF30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BATTLEOUTLINERENDERER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D19CF70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BATTLEOUTLINERENDERER___C__ONENABLE_B__17_0_OFFSET UNITYSDK_OFFSET(0x1D19CF80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BATTLEOUTLINERENDERER___C__UPDATE_B__21_0_OFFSET UNITYSDK_OFFSET(0x1D19CFA0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int BattleOutlineRenderer___c_TypeDefinitionIndex = 27054;

	class BattleOutlineRenderer___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::UnityEngine::Renderer*>** StaticGet___9__17_0()
		{
			return (::System::Predicate_1<::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(BattleOutlineRenderer___c_TypeDefinitionIndex)->GetStaticField(0x24520);
		}
		static ::System::Predicate_1<::UnityEngine::Renderer*>** StaticGet___9__21_0()
		{
			return (::System::Predicate_1<::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(BattleOutlineRenderer___c_TypeDefinitionIndex)->GetStaticField(0x24528);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BattleOutlineRenderer___c_TypeDefinitionIndex)->GetStaticField(0x24530);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BATTLEOUTLINERENDERER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BATTLEOUTLINERENDERER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnEnable_b__17_0(::UnityEngine::Renderer* r)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BATTLEOUTLINERENDERER___C__ONENABLE_B__17_0_OFFSET))(this, r);
		}

		::System::Boolean _Update_b__21_0(::UnityEngine::Renderer* r)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BATTLEOUTLINERENDERER___C__UPDATE_B__21_0_OFFSET))(this, r);
		}
	};
}
