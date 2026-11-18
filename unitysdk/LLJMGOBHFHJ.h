#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define LLJMGOBHFHJ_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0xD438460)
#define LLJMGOBHFHJ_JLIMOLHLFAK_OFFSET UNITYSDK_OFFSET(0xD4383E0)
#define LLJMGOBHFHJ_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0xD4384D0)
#define LLJMGOBHFHJ__CTOR_OFFSET UNITYSDK_OFFSET(0xD4384B0)

inline static constexpr unsigned int LLJMGOBHFHJ_TypeDefinitionIndex = 52541;

class LLJMGOBHFHJ
{
public:
	::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>* NHFGJENDPNA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLJMGOBHFHJ__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* JLIMOLHLFAK(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* HLFFCMIFFIB)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + LLJMGOBHFHJ_JLIMOLHLFAK_OFFSET))(this, HLFFCMIFFIB);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLJMGOBHFHJ_BEFORERECYCLE_OFFSET))(this);
	}

	::System::Void JMDEKPONKMF(::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>* KPDNJEDICCM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + LLJMGOBHFHJ_JMDEKPONKMF_OFFSET))(this, KPDNJEDICCM);
	}
};
