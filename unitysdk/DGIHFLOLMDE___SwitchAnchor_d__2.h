#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DGIHFLOLMDE;
class KDFFHMDFALG;
namespace System { class Object; }

#define DGIHFLOLMDE___SWITCHANCHOR_D__2_CTOR_OFFSET UNITYSDK_OFFSET(0xE84AD40)
#define DGIHFLOLMDE___SWITCHANCHOR_D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE84B430)
#define DGIHFLOLMDE___SWITCHANCHOR_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE84BA80)
#define DGIHFLOLMDE___SWITCHANCHOR_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE84BAE0)
#define DGIHFLOLMDE___SWITCHANCHOR_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xE84BA90)
#define DGIHFLOLMDE___SWITCHANCHOR_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE84B420)

inline static constexpr unsigned int DGIHFLOLMDE___SwitchAnchor_d__2_TypeDefinitionIndex = 60780;

	template <typename T1, typename T2>
	class DGIHFLOLMDE___SwitchAnchor_d__2 : public ::System::Object
	{
	public:
		::KDFFHMDFALG* _mapRotationManager_5__4; // 0x10
		::System::Object* __2__current; // 0x18
		::DGIHFLOLMDE* __4__this; // 0x20
		::System::Int32 __1__state; // 0x28
		::UnityEngine::Vector3 _switchAnchorPosition_5__2; // 0x2C
		::UnityEngine::Quaternion _switchAnchorRotation_5__3; // 0x38
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DGIHFLOLMDE___SWITCHANCHOR_D__2_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGIHFLOLMDE___SWITCHANCHOR_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGIHFLOLMDE___SWITCHANCHOR_D__2_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGIHFLOLMDE___SWITCHANCHOR_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGIHFLOLMDE___SWITCHANCHOR_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGIHFLOLMDE___SWITCHANCHOR_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
