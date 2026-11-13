#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class StageRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__14_CTOR_OFFSET UNITYSDK_OFFSET(0x1A168190)
#define RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A169C50)
#define RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_UINT32___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A169EA0)
#define RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A169F00)
#define RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A169EB0)
#define RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A169C40)

namespace RPG::Client
{
	inline static constexpr unsigned int MonsterData__GetMonsterWavesEnumerator_d__14_TypeDefinitionIndex = 64579;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
	class MonsterData__GetMonsterWavesEnumerator_d__14 : public ::System::Object
	{
	public:
		::RPG::GameCore::StageRow* stageRow; // 0x10
		::System::Collections::Generic::IEnumerator_1<::System::UInt32>* __2__current; // 0x18
		::Il2CppArray<::System::UInt32>* _waveIDs_5__2; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Int32 _i_5__3; // 0x2C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__14_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__14_MOVENEXT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::UInt32>* System_Collections_Generic_IEnumerator_System_Collections_Generic_IEnumerator_System_UInt32___get_Current()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_UINT32___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
