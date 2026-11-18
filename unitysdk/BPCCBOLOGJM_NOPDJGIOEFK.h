#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define BPCCBOLOGJM_NOPDJGIOEFK_AOJALDOBNJM_OFFSET UNITYSDK_OFFSET(0x16A06490)
#define BPCCBOLOGJM_NOPDJGIOEFK_JPCPBBAMDGJ_OFFSET UNITYSDK_OFFSET(0x16A06570)
#define BPCCBOLOGJM_NOPDJGIOEFK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16A065D0)
#define BPCCBOLOGJM_NOPDJGIOEFK_NIEADFOCLEC_OFFSET UNITYSDK_OFFSET(0x16A063B0)
#define BPCCBOLOGJM_NOPDJGIOEFK_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MOLEMOLE_BATTLE_ENTITY__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16A06E50)
#define BPCCBOLOGJM_NOPDJGIOEFK_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MOLEMOLE_BATTLE_ENTITY__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16A06DE0)
#define BPCCBOLOGJM_NOPDJGIOEFK_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16A06ED0)
#define BPCCBOLOGJM_NOPDJGIOEFK_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16A06E40)
#define BPCCBOLOGJM_NOPDJGIOEFK_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16A06DF0)
#define BPCCBOLOGJM_NOPDJGIOEFK_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16A06110)
#define BPCCBOLOGJM_NOPDJGIOEFK__CTOR_OFFSET UNITYSDK_OFFSET(0x16A060F0)

inline static constexpr unsigned int BPCCBOLOGJM_NOPDJGIOEFK_TypeDefinitionIndex = 68754;

class BPCCBOLOGJM_NOPDJGIOEFK : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* OHPLDHKNBJJ; // 0x10
	::MoleMole::Battle::Entity* IDBEJJEKGDI; // 0x18
	::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* LBOICOIDEIH; // 0x20
	::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>* NOJADGCMDOP; // 0x28
	::System::Collections::Generic::IEnumerator_1<::MoleMole::Battle::Entity*>* CNCDBBAMLPL; // 0x30
	::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* DGIIBCFICAF; // 0x38
	::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* LCDLAKOLLJJ; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x48
	::System::Int32 FPDDAGHMOJB; // 0x4C

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BPCCBOLOGJM_NOPDJGIOEFK__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCCBOLOGJM_NOPDJGIOEFK_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCCBOLOGJM_NOPDJGIOEFK_MOVENEXT_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* System_Collections_Generic_IEnumerator_MoleMole_Battle_Entity__get_Current()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCCBOLOGJM_NOPDJGIOEFK_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MOLEMOLE_BATTLE_ENTITY__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCCBOLOGJM_NOPDJGIOEFK_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCCBOLOGJM_NOPDJGIOEFK_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::MoleMole::Battle::Entity*>* System_Collections_Generic_IEnumerable_MoleMole_Battle_Entity__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCCBOLOGJM_NOPDJGIOEFK_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MOLEMOLE_BATTLE_ENTITY__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCCBOLOGJM_NOPDJGIOEFK_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::System::Void NIEADFOCLEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCCBOLOGJM_NOPDJGIOEFK_NIEADFOCLEC_OFFSET))(this);
	}

	::System::Void AOJALDOBNJM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCCBOLOGJM_NOPDJGIOEFK_AOJALDOBNJM_OFFSET))(this);
	}

	::System::Void JPCPBBAMDGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCCBOLOGJM_NOPDJGIOEFK_JPCPBBAMDGJ_OFFSET))(this);
	}
};
