#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"
class CGGLOEAKFEI;
class EGBIFFCBKEH;
class NENKIHNDBKD;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define NENKIHNDBKD__ITERATELEVELCONFIGS_D__4_CTOR_OFFSET UNITYSDK_OFFSET(0xBB73CC0)
#define NENKIHNDBKD__ITERATELEVELCONFIGS_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBB73D10)
#define NENKIHNDBKD__ITERATELEVELCONFIGS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_MECHCRAFT_IMECHCRAFTWORKSHOPLEVELCONFIG__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xBB73F70)
#define NENKIHNDBKD__ITERATELEVELCONFIGS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_MECHCRAFT_IMECHCRAFTWORKSHOPLEVELCONFIG__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBB73F00)
#define NENKIHNDBKD__ITERATELEVELCONFIGS_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xBB73FF0)
#define NENKIHNDBKD__ITERATELEVELCONFIGS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBB73F60)
#define NENKIHNDBKD__ITERATELEVELCONFIGS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xBB73F10)
#define NENKIHNDBKD__ITERATELEVELCONFIGS_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB73CE0)
#define NENKIHNDBKD__ITERATELEVELCONFIGS_D__4___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xBB73D00)

	template <typename T1, typename T2, typename T3, typename T4>
	class NENKIHNDBKD__IterateLevelConfigs_d__4 : public ::System::Object
	{
	public:
		::NENKIHNDBKD* __4__this; // 0x10
		::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::CGGLOEAKFEI*> _iter_5__2; // 0x18
		::System::Byte _padding0[0x38];
		::EGBIFFCBKEH* __2__current; // 0x58
		::System::Int32 __l__initialThreadId; // 0x60
		::System::Int32 __1__state; // 0x64
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NENKIHNDBKD__ITERATELEVELCONFIGS_D__4_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NENKIHNDBKD__ITERATELEVELCONFIGS_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NENKIHNDBKD__ITERATELEVELCONFIGS_D__4_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NENKIHNDBKD__ITERATELEVELCONFIGS_D__4___M__FINALLY1_OFFSET))(this);
		}

		::EGBIFFCBKEH* System_Collections_Generic_IEnumerator_RPG_Client_MechCraft_IMechCraftWorkshopLevelConfig__get_Current()
		{
			return ((::EGBIFFCBKEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NENKIHNDBKD__ITERATELEVELCONFIGS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_MECHCRAFT_IMECHCRAFTWORKSHOPLEVELCONFIG__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NENKIHNDBKD__ITERATELEVELCONFIGS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NENKIHNDBKD__ITERATELEVELCONFIGS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::EGBIFFCBKEH*>* System_Collections_Generic_IEnumerable_RPG_Client_MechCraft_IMechCraftWorkshopLevelConfig__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::EGBIFFCBKEH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NENKIHNDBKD__ITERATELEVELCONFIGS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_MECHCRAFT_IMECHCRAFTWORKSHOPLEVELCONFIG__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NENKIHNDBKD__ITERATELEVELCONFIGS_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
