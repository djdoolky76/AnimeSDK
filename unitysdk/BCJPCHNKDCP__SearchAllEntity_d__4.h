#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EParkourEventEntityType.h"
#include "unitysdk/System/Object.h"
class BCJPCHNKDCP;
class CFALFIPEHJH;
class DMHFEDAIKME;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define BCJPCHNKDCP__SEARCHALLENTITY_D__4_CTOR_OFFSET UNITYSDK_OFFSET(0x162D3C00)
#define BCJPCHNKDCP__SEARCHALLENTITY_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x162D3E70)
#define BCJPCHNKDCP__SEARCHALLENTITY_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_PARKOURGAME_PARKOURCHARACTER__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x162D4850)
#define BCJPCHNKDCP__SEARCHALLENTITY_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_PARKOURGAME_PARKOURCHARACTER__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x162D47E0)
#define BCJPCHNKDCP__SEARCHALLENTITY_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x162D48E0)
#define BCJPCHNKDCP__SEARCHALLENTITY_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x162D4840)
#define BCJPCHNKDCP__SEARCHALLENTITY_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x162D47F0)
#define BCJPCHNKDCP__SEARCHALLENTITY_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x162D3C20)
#define BCJPCHNKDCP__SEARCHALLENTITY_D__4___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x162D3C70)
#define BCJPCHNKDCP__SEARCHALLENTITY_D__4___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x162D3D70)

inline static constexpr unsigned int BCJPCHNKDCP__SearchAllEntity_d__4_TypeDefinitionIndex = 74195;

	template <typename T1, typename T2, typename T3, typename T4>
	class BCJPCHNKDCP__SearchAllEntity_d__4 : public ::System::Object
	{
	public:
		::BCJPCHNKDCP* __4__this; // 0x10
		::CFALFIPEHJH* __2__current; // 0x18
		::System::Collections::Generic::IEnumerator_1<::DMHFEDAIKME*>* __7__wrap1; // 0x20
		::RPG::GameCore::EParkourEventEntityType entityType; // 0x28
		::System::Int32 __1__state; // 0x2C
		::RPG::GameCore::EParkourEventEntityType __3__entityType; // 0x30
		::System::UInt32 entityID; // 0x34
		::System::Int32 __l__initialThreadId; // 0x38
		::System::UInt32 __3__entityID; // 0x3C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BCJPCHNKDCP__SEARCHALLENTITY_D__4_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJPCHNKDCP__SEARCHALLENTITY_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJPCHNKDCP__SEARCHALLENTITY_D__4_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJPCHNKDCP__SEARCHALLENTITY_D__4___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJPCHNKDCP__SEARCHALLENTITY_D__4___M__FINALLY2_OFFSET))(this);
		}

		::CFALFIPEHJH* System_Collections_Generic_IEnumerator_RPG_Client_ParkourGame_ParkourCharacter__get_Current()
		{
			return ((::CFALFIPEHJH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJPCHNKDCP__SEARCHALLENTITY_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_PARKOURGAME_PARKOURCHARACTER__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJPCHNKDCP__SEARCHALLENTITY_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJPCHNKDCP__SEARCHALLENTITY_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::CFALFIPEHJH*>* System_Collections_Generic_IEnumerable_RPG_Client_ParkourGame_ParkourCharacter__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::CFALFIPEHJH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJPCHNKDCP__SEARCHALLENTITY_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_PARKOURGAME_PARKOURCHARACTER__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJPCHNKDCP__SEARCHALLENTITY_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
