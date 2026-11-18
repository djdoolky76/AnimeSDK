#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LGCNEDCMPKM.h"

class EJHHPFFPFOJ;
class KJCGHDIMMBH;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define KJCGHDIMMBH_NPJBALOFLML_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x19956D90)
#define KJCGHDIMMBH_NPJBALOFLML__CTOR_OFFSET UNITYSDK_OFFSET(0x19956D80)

inline static constexpr unsigned int KJCGHDIMMBH_NPJBALOFLML_TypeDefinitionIndex = 84314;

class KJCGHDIMMBH_NPJBALOFLML : public ::System::Object
{
public:
	::EJHHPFFPFOJ* OPMPKFEHOBM; // 0x10
	::KJCGHDIMMBH* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCGHDIMMBH_NPJBALOFLML__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* LIDNPLMPHAL(::LGCNEDCMPKM AAOCANGHBDG)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::LGCNEDCMPKM))((::PBYTE)hIl2Cpp + KJCGHDIMMBH_NPJBALOFLML_LIDNPLMPHAL_OFFSET))(this, AAOCANGHBDG);
	}
};
