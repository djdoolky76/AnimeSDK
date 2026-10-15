#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::CustomRP { class CaptureScene; }
namespace System { class Object; }
namespace UnityEngine { class RenderTexture; }

#define RPG_CUSTOMRP_CAPTURESCENE___CAPTURESCENEOUTPUTCOROUTINE_D__13_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBE27B0)
#define RPG_CUSTOMRP_CAPTURESCENE___CAPTURESCENEOUTPUTCOROUTINE_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1CBE3CA0)
#define RPG_CUSTOMRP_CAPTURESCENE___CAPTURESCENEOUTPUTCOROUTINE_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CBE3F20)
#define RPG_CUSTOMRP_CAPTURESCENE___CAPTURESCENEOUTPUTCOROUTINE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CBE3F80)
#define RPG_CUSTOMRP_CAPTURESCENE___CAPTURESCENEOUTPUTCOROUTINE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1CBE3F30)
#define RPG_CUSTOMRP_CAPTURESCENE___CAPTURESCENEOUTPUTCOROUTINE_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CBE3C90)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CaptureScene___CaptureSceneOutputCoroutine_d__13_TypeDefinitionIndex = 37602;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
	class CaptureScene___CaptureSceneOutputCoroutine_d__13 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::UnityEngine::RenderTexture* _tex_5__2; // 0x18
		::System::Object* __8__1; // 0x20
		::RPG::CustomRP::CaptureScene* __4__this; // 0x28
		::System::Int32 _i_5__3; // 0x30
		::System::Int32 __1__state; // 0x34
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___CAPTURESCENEOUTPUTCOROUTINE_D__13_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___CAPTURESCENEOUTPUTCOROUTINE_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___CAPTURESCENEOUTPUTCOROUTINE_D__13_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___CAPTURESCENEOUTPUTCOROUTINE_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___CAPTURESCENEOUTPUTCOROUTINE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___CAPTURESCENEOUTPUTCOROUTINE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
