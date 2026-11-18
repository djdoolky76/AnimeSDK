#pragma once
#include "unitysdk/unitysdk.h"

class BJHNFMNDKID;
namespace MoleMole { class ChessEntity; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MOLEMOLE_CHESSENTITYCOLLECTION_ADDENTITY_OFFSET UNITYSDK_OFFSET(0x19223460)
#define MOLEMOLE_CHESSENTITYCOLLECTION_COUNT_OFFSET UNITYSDK_OFFSET(0x19223B20)
#define MOLEMOLE_CHESSENTITYCOLLECTION_GETCOUNTINNER_OFFSET UNITYSDK_OFFSET(0x192239C0)
#define MOLEMOLE_CHESSENTITYCOLLECTION_GETENTITY_OFFSET UNITYSDK_OFFSET(0x19223720)
#define MOLEMOLE_CHESSENTITYCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19223B70)
#define MOLEMOLE_CHESSENTITYCOLLECTION_GETVALUE_OFFSET UNITYSDK_OFFSET(0x192238C0)
#define MOLEMOLE_CHESSENTITYCOLLECTION_GET_TOREMOVECHESSENTITY_OFFSET UNITYSDK_OFFSET(0x19223380)
#define MOLEMOLE_CHESSENTITYCOLLECTION_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x19223970)
#define MOLEMOLE_CHESSENTITYCOLLECTION_REMOVEENTITY_OFFSET UNITYSDK_OFFSET(0x192235E0)
#define MOLEMOLE_CHESSENTITYCOLLECTION_SETMODIFY_OFFSET UNITYSDK_OFFSET(0x19223C30)
#define MOLEMOLE_CHESSENTITYCOLLECTION_SETVALUE_OFFSET UNITYSDK_OFFSET(0x19223910)
#define MOLEMOLE_CHESSENTITYCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19223C80)
#define MOLEMOLE_CHESSENTITYCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19223CD0)

namespace MoleMole
{
	inline static constexpr unsigned int ChessEntityCollection_TypeDefinitionIndex = 62715;

	class ChessEntityCollection
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ChessEntity*>* _allChessEntity; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ChessEntity*>* _cachedForEnumerator; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ChessEntity*>* _toRemoveChessEntity; // 0x20
		::BJHNFMNDKID* _modify; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITYCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ChessEntity*>* get_toRemoveChessEntity()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ChessEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITYCOLLECTION_GET_TOREMOVECHESSENTITY_OFFSET))(this);
		}

		::System::Void AddEntity(::MoleMole::ChessEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ChessEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITYCOLLECTION_ADDENTITY_OFFSET))(this, entity);
		}

		::System::Void RemoveEntity(::MoleMole::ChessEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ChessEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITYCOLLECTION_REMOVEENTITY_OFFSET))(this, entity);
		}

		::MoleMole::ChessEntity* GetEntity(::System::Int32 runtimeID)
		{
			return ((::MoleMole::ChessEntity*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITYCOLLECTION_GETENTITY_OFFSET))(this, runtimeID);
		}

		::MoleMole::ChessEntity* GetValue(::System::Int32 runtimeID)
		{
			return ((::MoleMole::ChessEntity*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITYCOLLECTION_GETVALUE_OFFSET))(this, runtimeID);
		}

		::System::Boolean SetValue(::System::Int32 key, ::MoleMole::ChessEntity* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::ChessEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITYCOLLECTION_SETVALUE_OFFSET))(this, key, value);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITYCOLLECTION_ISEMPTY_OFFSET))(this);
		}

		::System::Int32 Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITYCOLLECTION_COUNT_OFFSET))(this);
		}

		::System::Int32 GetCountInner()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITYCOLLECTION_GETCOUNTINNER_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::MoleMole::ChessEntity*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::MoleMole::ChessEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITYCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void SetModify(::BJHNFMNDKID* modify)
		{
			return ((::System::Void(*)(::PVOID, ::BJHNFMNDKID*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITYCOLLECTION_SETMODIFY_OFFSET))(this, modify);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITYCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
