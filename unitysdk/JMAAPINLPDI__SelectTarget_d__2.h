#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAJDFCHFBGN;
class JMAAPINLPDI;
class KAKADGHNMFK;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define JMAAPINLPDI__SELECTTARGET_D__2_CTOR_OFFSET UNITYSDK_OFFSET(0x1A0A0140)
#define JMAAPINLPDI__SELECTTARGET_D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A0A0B10)
#define JMAAPINLPDI__SELECTTARGET_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A0A0DE0)
#define JMAAPINLPDI__SELECTTARGET_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A0A0D70)
#define JMAAPINLPDI__SELECTTARGET_D__2_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A0A0E70)
#define JMAAPINLPDI__SELECTTARGET_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A0A0DD0)
#define JMAAPINLPDI__SELECTTARGET_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A0A0D80)
#define JMAAPINLPDI__SELECTTARGET_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A0A0B00)

inline static constexpr unsigned int JMAAPINLPDI__SelectTarget_d__2_TypeDefinitionIndex = 80282;

	template <typename T1, typename T2>
	class JMAAPINLPDI__SelectTarget_d__2 : public ::System::Object
	{
	public:
		::HAJDFCHFBGN* __3__context; // 0x10
		::KAKADGHNMFK* __2__current; // 0x18
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* config; // 0x20
		::JMAAPINLPDI* __4__this; // 0x28
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* __3__config; // 0x30
		::HAJDFCHFBGN* context; // 0x38
		::System::Int32 __l__initialThreadId; // 0x40
		::System::Int32 __1__state; // 0x44
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JMAAPINLPDI__SELECTTARGET_D__2_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAAPINLPDI__SELECTTARGET_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAAPINLPDI__SELECTTARGET_D__2_MOVENEXT_OFFSET))(this);
		}

		::KAKADGHNMFK* System_Collections_Generic_IEnumerator_RPG_Client_LittleGame_ChimeraDuelGameEntity__get_Current()
		{
			return ((::KAKADGHNMFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAAPINLPDI__SELECTTARGET_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAAPINLPDI__SELECTTARGET_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAAPINLPDI__SELECTTARGET_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::KAKADGHNMFK*>* System_Collections_Generic_IEnumerable_RPG_Client_LittleGame_ChimeraDuelGameEntity__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::KAKADGHNMFK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAAPINLPDI__SELECTTARGET_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAAPINLPDI__SELECTTARGET_D__2_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
