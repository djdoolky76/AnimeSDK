#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define OABADJCLPFD_HCLGLHJFCPG_JPCPBBAMDGJ_OFFSET UNITYSDK_OFFSET(0xFD52FF0)
#define OABADJCLPFD_HCLGLHJFCPG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xFD530D0)
#define OABADJCLPFD_HCLGLHJFCPG_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MOLEMOLE_BATTLE_ENTITY__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xFD53500)
#define OABADJCLPFD_HCLGLHJFCPG_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MOLEMOLE_BATTLE_ENTITY__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xFD53490)
#define OABADJCLPFD_HCLGLHJFCPG_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xFD53580)
#define OABADJCLPFD_HCLGLHJFCPG_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xFD534F0)
#define OABADJCLPFD_HCLGLHJFCPG_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xFD534A0)
#define OABADJCLPFD_HCLGLHJFCPG_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFD52F00)
#define OABADJCLPFD_HCLGLHJFCPG__CTOR_OFFSET UNITYSDK_OFFSET(0xFD52EE0)

inline static constexpr unsigned int OABADJCLPFD_HCLGLHJFCPG_TypeDefinitionIndex = 60608;

class OABADJCLPFD_HCLGLHJFCPG : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* COIHPIODHDL; // 0x10
	::MoleMole::Battle::Entity* IDBEJJEKGDI; // 0x18
	::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* FECELFJHPLM; // 0x20
	::System::Collections::Generic::IEnumerator_1<::MoleMole::Battle::Entity*>* GHANCJDIDBC; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x30
	::System::Int32 FPDDAGHMOJB; // 0x34
	::System::Int32 CLACNEMIOBA; // 0x38
	::System::Int32 DJCANEALDEG; // 0x3C

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OABADJCLPFD_HCLGLHJFCPG__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OABADJCLPFD_HCLGLHJFCPG_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OABADJCLPFD_HCLGLHJFCPG_MOVENEXT_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* System_Collections_Generic_IEnumerator_MoleMole_Battle_Entity__get_Current()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + OABADJCLPFD_HCLGLHJFCPG_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MOLEMOLE_BATTLE_ENTITY__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OABADJCLPFD_HCLGLHJFCPG_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OABADJCLPFD_HCLGLHJFCPG_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::MoleMole::Battle::Entity*>* System_Collections_Generic_IEnumerable_MoleMole_Battle_Entity__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OABADJCLPFD_HCLGLHJFCPG_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MOLEMOLE_BATTLE_ENTITY__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + OABADJCLPFD_HCLGLHJFCPG_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::System::Void JPCPBBAMDGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OABADJCLPFD_HCLGLHJFCPG_JPCPBBAMDGJ_OFFSET))(this);
	}
};
