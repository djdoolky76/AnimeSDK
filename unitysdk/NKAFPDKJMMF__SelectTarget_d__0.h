#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAJDFCHFBGN;
class KAKADGHNMFK;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define NKAFPDKJMMF__SELECTTARGET_D__0_CTOR_OFFSET UNITYSDK_OFFSET(0x1A7A8B10)
#define NKAFPDKJMMF__SELECTTARGET_D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A7A8C80)
#define NKAFPDKJMMF__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A7A91F0)
#define NKAFPDKJMMF__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A7A9180)
#define NKAFPDKJMMF__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A7A9270)
#define NKAFPDKJMMF__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A7A91E0)
#define NKAFPDKJMMF__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A7A9190)
#define NKAFPDKJMMF__SELECTTARGET_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A7A8B40)
#define NKAFPDKJMMF__SELECTTARGET_D__0___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1A7A8B80)

inline static constexpr unsigned int NKAFPDKJMMF__SelectTarget_d__0_TypeDefinitionIndex = 80279;

	class NKAFPDKJMMF__SelectTarget_d__0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::KAKADGHNMFK*>* __7__wrap1; // 0x10
		::HAJDFCHFBGN* __3__context; // 0x18
		::HAJDFCHFBGN* context; // 0x20
		::KAKADGHNMFK* __2__current; // 0x28
		::System::Int32 __l__initialThreadId; // 0x30
		::System::Int32 __1__state; // 0x34
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NKAFPDKJMMF__SELECTTARGET_D__0_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKAFPDKJMMF__SELECTTARGET_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKAFPDKJMMF__SELECTTARGET_D__0_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKAFPDKJMMF__SELECTTARGET_D__0___M__FINALLY1_OFFSET))(this);
		}

		::KAKADGHNMFK* System_Collections_Generic_IEnumerator_RPG_Client_LittleGame_ChimeraDuelGameEntity__get_Current()
		{
			return ((::KAKADGHNMFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKAFPDKJMMF__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKAFPDKJMMF__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKAFPDKJMMF__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::KAKADGHNMFK*>* System_Collections_Generic_IEnumerable_RPG_Client_LittleGame_ChimeraDuelGameEntity__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::KAKADGHNMFK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKAFPDKJMMF__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKAFPDKJMMF__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
