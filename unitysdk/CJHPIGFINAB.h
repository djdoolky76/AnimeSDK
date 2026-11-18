#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CJHPIGFINAB_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1A1B0C60)
#define CJHPIGFINAB_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1A1B0BD0)
#define CJHPIGFINAB_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1A1B0B40)
#define CJHPIGFINAB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1B0AC0)
#define CJHPIGFINAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1B0B30)

inline static constexpr unsigned int CJHPIGFINAB_TypeDefinitionIndex = 78196;

class CJHPIGFINAB : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x1A; // 0x0
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* OFIJMADOFAE; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJHPIGFINAB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHPIGFINAB__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHPIGFINAB_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHPIGFINAB_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* HENOIMEANMN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*))((::PBYTE)hIl2Cpp + CJHPIGFINAB_CNHBDOMKKDE_OFFSET))(this, HENOIMEANMN);
	}
};
