#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNGOPCAEJMN.h"
#include "unitysdk/System/Object.h"

#define EAOBNKKLNFN_ISCONTEXTOF_OFFSET UNITYSDK_OFFSET(0x1588A570)
#define EAOBNKKLNFN_MCAEFJKLPLH_OFFSET UNITYSDK_OFFSET(0x1588A560)
#define EAOBNKKLNFN_OAODOABBAKO_OFFSET UNITYSDK_OFFSET(0x1588A5D0)
#define EAOBNKKLNFN__CTOR_OFFSET UNITYSDK_OFFSET(0x1588A5C0)

inline static constexpr unsigned int EAOBNKKLNFN_TypeDefinitionIndex = 72296;

class EAOBNKKLNFN : public ::System::Object
{
public:
	::System::Single _NKALEKCIFNH_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAOBNKKLNFN__CTOR_OFFSET))(this);
	}

	::System::Single MCAEFJKLPLH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EAOBNKKLNFN_MCAEFJKLPLH_OFFSET))(this);
	}

	::System::Boolean IsContextOf(::CNGOPCAEJMN OFCNFADIBGJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::CNGOPCAEJMN))((::PBYTE)hIl2Cpp + EAOBNKKLNFN_ISCONTEXTOF_OFFSET))(this, OFCNFADIBGJ);
	}

	::System::Void OAODOABBAKO(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EAOBNKKLNFN_OAODOABBAKO_OFFSET))(this, EGEGIMGMJHN);
	}
};
