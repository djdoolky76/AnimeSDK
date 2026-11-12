#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightStageNode; }
namespace RPG::Client { class GridFightStageRoute; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE__GETENUMERATOR_D__7_CTOR_OFFSET UNITYSDK_OFFSET(0xDC98650)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE__GETENUMERATOR_D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDC994C0)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE__GETENUMERATOR_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_GRIDFIGHTSTAGENODE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDC99BC0)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE__GETENUMERATOR_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDC99C20)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE__GETENUMERATOR_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xDC99BD0)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE__GETENUMERATOR_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDC99370)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE__GETENUMERATOR_D__7___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xDC993C0)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE__GETENUMERATOR_D__7___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0xDC993B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightStageRoute__GetEnumerator_d__7_TypeDefinitionIndex = 67002;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
	class GridFightStageRoute__GetEnumerator_d__7 : public ::System::Object
	{
	public:
		::System::Object* __7__wrap2; // 0x10
		::System::Byte _padding0[0x10];
		::RPG::Client::GridFightStageRoute* __4__this; // 0x28
		::RPG::Client::GridFightStageNode* __2__current; // 0x30
		::System::Collections::Generic::IEnumerator_1<::System::UInt32>* __7__wrap1; // 0x38
		::System::Int32 __1__state; // 0x40
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE__GETENUMERATOR_D__7_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE__GETENUMERATOR_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE__GETENUMERATOR_D__7_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE__GETENUMERATOR_D__7___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE__GETENUMERATOR_D__7___M__FINALLY2_OFFSET))(this);
		}

		::RPG::Client::GridFightStageNode* System_Collections_Generic_IEnumerator_RPG_Client_GridFightStageNode__get_Current()
		{
			return ((::RPG::Client::GridFightStageNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE__GETENUMERATOR_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_GRIDFIGHTSTAGENODE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE__GETENUMERATOR_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE__GETENUMERATOR_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
