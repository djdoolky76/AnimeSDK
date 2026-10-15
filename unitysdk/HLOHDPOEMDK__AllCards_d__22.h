#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class COOONBGCCCM;
class HLOHDPOEMDK;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define HLOHDPOEMDK__ALLCARDS_D__22_CTOR_OFFSET UNITYSDK_OFFSET(0x15D73A80)
#define HLOHDPOEMDK__ALLCARDS_D__22_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15D74860)
#define HLOHDPOEMDK__ALLCARDS_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARD__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15D74AB0)
#define HLOHDPOEMDK__ALLCARDS_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARD__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15D74A40)
#define HLOHDPOEMDK__ALLCARDS_D__22_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15D74B30)
#define HLOHDPOEMDK__ALLCARDS_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15D74AA0)
#define HLOHDPOEMDK__ALLCARDS_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15D74A50)
#define HLOHDPOEMDK__ALLCARDS_D__22_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D74850)

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22>
	class HLOHDPOEMDK__AllCards_d__22 : public ::System::Object
	{
	public:
		::HLOHDPOEMDK* __4__this; // 0x10
		::COOONBGCCCM* __2__current; // 0x18
		::System::Int32 _i_5__2; // 0x20
		::System::Int32 __1__state; // 0x24
		::System::Int32 __l__initialThreadId; // 0x28
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HLOHDPOEMDK__ALLCARDS_D__22_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOHDPOEMDK__ALLCARDS_D__22_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOHDPOEMDK__ALLCARDS_D__22_MOVENEXT_OFFSET))(this);
		}

		::COOONBGCCCM* System_Collections_Generic_IEnumerator_RPG_Client_FateRin_Card_FateRinBattleCard__get_Current()
		{
			return ((::COOONBGCCCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOHDPOEMDK__ALLCARDS_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARD__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOHDPOEMDK__ALLCARDS_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOHDPOEMDK__ALLCARDS_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::COOONBGCCCM*>* System_Collections_Generic_IEnumerable_RPG_Client_FateRin_Card_FateRinBattleCard__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::COOONBGCCCM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOHDPOEMDK__ALLCARDS_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARD__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOHDPOEMDK__ALLCARDS_D__22_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
