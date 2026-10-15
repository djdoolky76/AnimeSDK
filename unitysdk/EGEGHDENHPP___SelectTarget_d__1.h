#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"
class HAJDFCHFBGN;
class KAKADGHNMFK;
namespace RPG::GameCore { class ChimeraDuelGroupEntitiesSelectorConfig; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define EGEGHDENHPP___SELECTTARGET_D__1_CTOR_OFFSET UNITYSDK_OFFSET(0x145098A0)
#define EGEGHDENHPP___SELECTTARGET_D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x14509A10)
#define EGEGHDENHPP___SELECTTARGET_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1450A0D0)
#define EGEGHDENHPP___SELECTTARGET_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1450A060)
#define EGEGHDENHPP___SELECTTARGET_D__1_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1450A150)
#define EGEGHDENHPP___SELECTTARGET_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1450A0C0)
#define EGEGHDENHPP___SELECTTARGET_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1450A070)
#define EGEGHDENHPP___SELECTTARGET_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x145098D0)
#define EGEGHDENHPP___SELECTTARGET_D__1___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x14509910)

inline static constexpr unsigned int EGEGHDENHPP___SelectTarget_d__1_TypeDefinitionIndex = 77507;

	template <typename T>
	class EGEGHDENHPP___SelectTarget_d__1 : public ::System::Object
	{
	public:
		::KAKADGHNMFK* __2__current; // 0x10
		::RPG::GameCore::ChimeraDuelGroupEntitiesSelectorConfig* __3__config; // 0x18
		::System::Collections::Generic::IEnumerator_1<::KAKADGHNMFK*>* __7__wrap2; // 0x20
		::RPG::GameCore::ChimeraDuelGroupEntitiesSelectorConfig* config; // 0x28
		::HAJDFCHFBGN* context; // 0x30
		::HAJDFCHFBGN* __3__context; // 0x38
		::System::Int32 __l__initialThreadId; // 0x40
		::System::Int32 __1__state; // 0x44
		::RPG::GameCore::ChimeraDuelTeamType _casterSide_5__2; // 0x48
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EGEGHDENHPP___SELECTTARGET_D__1_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEGHDENHPP___SELECTTARGET_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEGHDENHPP___SELECTTARGET_D__1_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEGHDENHPP___SELECTTARGET_D__1___M__FINALLY1_OFFSET))(this);
		}

		::KAKADGHNMFK* System_Collections_Generic_IEnumerator_RPG_Client_LittleGame_ChimeraDuelGameEntity__get_Current()
		{
			return ((::KAKADGHNMFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEGHDENHPP___SELECTTARGET_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEGHDENHPP___SELECTTARGET_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEGHDENHPP___SELECTTARGET_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::KAKADGHNMFK*>* System_Collections_Generic_IEnumerable_RPG_Client_LittleGame_ChimeraDuelGameEntity__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::KAKADGHNMFK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEGHDENHPP___SELECTTARGET_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEGHDENHPP___SELECTTARGET_D__1_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
