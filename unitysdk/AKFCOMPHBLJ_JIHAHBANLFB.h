#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EntityDieCheckType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define AKFCOMPHBLJ_JIHAHBANLFB_KLKEMICCJJO_OFFSET UNITYSDK_OFFSET(0x143656C0)
#define AKFCOMPHBLJ_JIHAHBANLFB__CTOR_OFFSET UNITYSDK_OFFSET(0x143656B0)

inline static constexpr unsigned int AKFCOMPHBLJ_JIHAHBANLFB_TypeDefinitionIndex = 77053;

class AKFCOMPHBLJ_JIHAHBANLFB : public ::System::Object
{
public:
	::MoleMole::FlowCanvas::Nodes::EntityDieCheckType BCHGHEKABHF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_JIHAHBANLFB__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* KLKEMICCJJO(::System::UInt32 MABEMNLICHK)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_JIHAHBANLFB_KLKEMICCJJO_OFFSET))(this, MABEMNLICHK);
	}
};
