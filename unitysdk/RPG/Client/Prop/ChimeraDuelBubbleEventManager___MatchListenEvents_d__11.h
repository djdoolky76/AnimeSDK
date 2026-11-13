#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKFPFNBKMLD;
namespace RPG::Client::Prop { class ChimeraDuelBubbleEvent; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFEA500)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BFEA930)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_PROP_CHIMERADUELBUBBLELISTENEVENT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1BFEAB70)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_PROP_CHIMERADUELBUBBLELISTENEVENT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BFEAB00)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1BFEABF0)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BFEAB60)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1BFEAB10)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BFEA910)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1BFEA920)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelBubbleEventManager___MatchListenEvents_d__11_TypeDefinitionIndex = 81009;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
	class ChimeraDuelBubbleEventManager___MatchListenEvents_d__11 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChimeraDuelBubbleEvent* evt; // 0x10
		::System::Object* __7__wrap1; // 0x18
		::System::Byte _padding0[0x10];
		::System::Collections::Generic::List_1<::FKFPFNBKMLD*>* __3__listenEvents; // 0x30
		::FKFPFNBKMLD* __2__current; // 0x38
		::System::Collections::Generic::List_1<::FKFPFNBKMLD*>* listenEvents; // 0x40
		::RPG::Client::Prop::ChimeraDuelBubbleEvent* __3__evt; // 0x48
		::System::Int32 __1__state; // 0x50
		::System::Int32 __l__initialThreadId; // 0x54
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11___M__FINALLY1_OFFSET))(this);
		}

		::FKFPFNBKMLD* System_Collections_Generic_IEnumerator_RPG_Client_Prop_ChimeraDuelBubbleListenEvent__get_Current()
		{
			return ((::FKFPFNBKMLD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_PROP_CHIMERADUELBUBBLELISTENEVENT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::FKFPFNBKMLD*>* System_Collections_Generic_IEnumerable_RPG_Client_Prop_ChimeraDuelBubbleListenEvent__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::FKFPFNBKMLD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_PROP_CHIMERADUELBUBBLELISTENEVENT__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
}
