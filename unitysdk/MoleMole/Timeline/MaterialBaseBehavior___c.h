#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F43C9F0)
#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F43CA30)
#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR___C__GETALLRENDERERS_B__25_0_OFFSET UNITYSDK_OFFSET(0x1F43CA40)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MaterialBaseBehavior___c_TypeDefinitionIndex = 32250;

	class MaterialBaseBehavior___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MaterialBaseBehavior___c_TypeDefinitionIndex)->GetStaticField(0x290F0);
		}
		static ::System::Func_2<::UnityEngine::Renderer*, ::System::Boolean>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::UnityEngine::Renderer*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MaterialBaseBehavior___c_TypeDefinitionIndex)->GetStaticField(0x290F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAllRenderers_b__25_0(::UnityEngine::Renderer* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR___C__GETALLRENDERERS_B__25_0_OFFSET))(this, item);
		}
	};
}
