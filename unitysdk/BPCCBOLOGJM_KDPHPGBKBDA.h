#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define BPCCBOLOGJM_KDPHPGBKBDA_JPCPBBAMDGJ_OFFSET UNITYSDK_OFFSET(0x16A05A20)
#define BPCCBOLOGJM_KDPHPGBKBDA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16A05A80)
#define BPCCBOLOGJM_KDPHPGBKBDA_NIEADFOCLEC_OFFSET UNITYSDK_OFFSET(0x16A05940)
#define BPCCBOLOGJM_KDPHPGBKBDA_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MOLEMOLE_BATTLE_ENTITY__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16A05FF0)
#define BPCCBOLOGJM_KDPHPGBKBDA_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MOLEMOLE_BATTLE_ENTITY__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16A05F80)
#define BPCCBOLOGJM_KDPHPGBKBDA_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16A06070)
#define BPCCBOLOGJM_KDPHPGBKBDA_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16A05FE0)
#define BPCCBOLOGJM_KDPHPGBKBDA_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16A05F90)
#define BPCCBOLOGJM_KDPHPGBKBDA_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16A057A0)
#define BPCCBOLOGJM_KDPHPGBKBDA__CTOR_OFFSET UNITYSDK_OFFSET(0x16A05780)

inline static constexpr unsigned int BPCCBOLOGJM_KDPHPGBKBDA_TypeDefinitionIndex = 68755;

class BPCCBOLOGJM_KDPHPGBKBDA : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* LCDLAKOLLJJ; // 0x10
	::System::Collections::Generic::IEnumerator_1<::MoleMole::Battle::Entity*>* CNCDBBAMLPL; // 0x18
	::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* DGIIBCFICAF; // 0x20
	::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>* NOJADGCMDOP; // 0x28
	::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* OHPLDHKNBJJ; // 0x30
	::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* LBOICOIDEIH; // 0x38
	::MoleMole::Battle::Entity* IDBEJJEKGDI; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x48
	::System::Int32 FPDDAGHMOJB; // 0x4C

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BPCCBOLOGJM_KDPHPGBKBDA__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCCBOLOGJM_KDPHPGBKBDA_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCCBOLOGJM_KDPHPGBKBDA_MOVENEXT_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* System_Collections_Generic_IEnumerator_MoleMole_Battle_Entity__get_Current()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCCBOLOGJM_KDPHPGBKBDA_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MOLEMOLE_BATTLE_ENTITY__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCCBOLOGJM_KDPHPGBKBDA_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCCBOLOGJM_KDPHPGBKBDA_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::MoleMole::Battle::Entity*>* System_Collections_Generic_IEnumerable_MoleMole_Battle_Entity__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCCBOLOGJM_KDPHPGBKBDA_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MOLEMOLE_BATTLE_ENTITY__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCCBOLOGJM_KDPHPGBKBDA_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::System::Void JPCPBBAMDGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCCBOLOGJM_KDPHPGBKBDA_JPCPBBAMDGJ_OFFSET))(this);
	}

	::System::Void NIEADFOCLEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCCBOLOGJM_KDPHPGBKBDA_NIEADFOCLEC_OFFSET))(this);
	}
};
