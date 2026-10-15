#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleResultState.h"
#include "unitysdk/System/Object.h"
class CLPEDLAFEEB;
namespace System { class Object; }

#define CLPEDLAFEEB__PROCESSCHALLENGESETTLE_D__2_CTOR_OFFSET UNITYSDK_OFFSET(0xDA1B2F0)
#define CLPEDLAFEEB__PROCESSCHALLENGESETTLE_D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDA1B310)
#define CLPEDLAFEEB__PROCESSCHALLENGESETTLE_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDA1B7E0)
#define CLPEDLAFEEB__PROCESSCHALLENGESETTLE_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDA1B840)
#define CLPEDLAFEEB__PROCESSCHALLENGESETTLE_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xDA1B7F0)
#define CLPEDLAFEEB__PROCESSCHALLENGESETTLE_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDA1B300)

inline static constexpr unsigned int CLPEDLAFEEB__ProcessChallengeSettle_d__2_TypeDefinitionIndex = 80755;

	template <typename T1, typename T2>
	class CLPEDLAFEEB__ProcessChallengeSettle_d__2 : public ::System::Object
	{
	public:
		::CLPEDLAFEEB* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::UInt32 stageID; // 0x20
		::System::Int32 __1__state; // 0x24
		::RPG::GameCore::BattleResultState state; // 0x28
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLPEDLAFEEB__PROCESSCHALLENGESETTLE_D__2_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPEDLAFEEB__PROCESSCHALLENGESETTLE_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPEDLAFEEB__PROCESSCHALLENGESETTLE_D__2_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPEDLAFEEB__PROCESSCHALLENGESETTLE_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPEDLAFEEB__PROCESSCHALLENGESETTLE_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPEDLAFEEB__PROCESSCHALLENGESETTLE_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
