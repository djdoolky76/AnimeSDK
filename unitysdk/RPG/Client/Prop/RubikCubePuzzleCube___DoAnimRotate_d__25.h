#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/RubikCubePuzzleAxis.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::Prop { class RubikCubePuzzleCube; }
namespace System { class Object; }

#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE___DOANIMROTATE_D__25_CTOR_OFFSET UNITYSDK_OFFSET(0xDDA8140)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE___DOANIMROTATE_D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDDA9460)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE___DOANIMROTATE_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDDA98E0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE___DOANIMROTATE_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDDA9940)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE___DOANIMROTATE_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xDDA98F0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE___DOANIMROTATE_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDDA9450)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RubikCubePuzzleCube___DoAnimRotate_d__25_TypeDefinitionIndex = 78833;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25>
	class RubikCubePuzzleCube___DoAnimRotate_d__25 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::Client::Prop::RubikCubePuzzleCube* __4__this; // 0x18
		::System::Boolean isClockWise; // 0x20
		::System::Byte _padding0[0x3];
		::System::Int32 index; // 0x24
		::RPG::Client::Prop::RubikCubePuzzleAxis axis; // 0x28
		::System::Single _maxTime_5__3; // 0x2C
		::System::Single _t_5__4; // 0x30
		::System::Int32 __1__state; // 0x34
		::UnityEngine::Vector3 _centroid_5__2; // 0x38
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE___DOANIMROTATE_D__25_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE___DOANIMROTATE_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE___DOANIMROTATE_D__25_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE___DOANIMROTATE_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE___DOANIMROTATE_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE___DOANIMROTATE_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
