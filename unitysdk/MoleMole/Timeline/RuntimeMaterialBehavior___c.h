#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR___C_GHDOKHGLKPJ_OFFSET UNITYSDK_OFFSET(0x17E79170)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E79120)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E79160)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimeMaterialBehavior___c_TypeDefinitionIndex = 56337;

	class RuntimeMaterialBehavior___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::Renderer*, ::System::Boolean>** StaticGet___9__22_0()
		{
			return (::System::Func_2<::UnityEngine::Renderer*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialBehavior___c_TypeDefinitionIndex)->GetStaticField(0x34B70);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialBehavior___c_TypeDefinitionIndex)->GetStaticField(0x34B78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR___C__CTOR_OFFSET))(this);
		}

		::System::Boolean GHDOKHGLKPJ(::UnityEngine::Renderer* IPMMCGDMODG)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR___C_GHDOKHGLKPJ_OFFSET))(this, IPMMCGDMODG);
		}
	};
}
