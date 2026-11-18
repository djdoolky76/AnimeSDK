#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DIMBOKENEMI;
class LDJDLNCAOBC_EFAAJJHNGBG;
namespace MoleMole::Battle { class Entity; }

#define LDJDLNCAOBC_HPHKJNCLJJG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A2EDBC0)
#define LDJDLNCAOBC_HPHKJNCLJJG_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A2EDEC0)
#define LDJDLNCAOBC_HPHKJNCLJJG_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A2EDF20)
#define LDJDLNCAOBC_HPHKJNCLJJG_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A2EDED0)
#define LDJDLNCAOBC_HPHKJNCLJJG_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A2EDBB0)
#define LDJDLNCAOBC_HPHKJNCLJJG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2EDBA0)

inline static constexpr unsigned int LDJDLNCAOBC_HPHKJNCLJJG_TypeDefinitionIndex = 60086;

class LDJDLNCAOBC_HPHKJNCLJJG : public ::System::Object
{
public:
	::LDJDLNCAOBC_EFAAJJHNGBG* PGDOJBDJBOL; // 0x10
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x18
	::DIMBOKENEMI* LJPIIPLIJEO; // 0x20
	::System::Single IDBEJJEKGDI; // 0x28
	::System::Single AMFLJNELLKH; // 0x2C
	::System::Int32 MDPILDGFNHN; // 0x30

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDJDLNCAOBC_HPHKJNCLJJG__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJDLNCAOBC_HPHKJNCLJJG_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJDLNCAOBC_HPHKJNCLJJG_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJDLNCAOBC_HPHKJNCLJJG_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJDLNCAOBC_HPHKJNCLJJG_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJDLNCAOBC_HPHKJNCLJJG_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
