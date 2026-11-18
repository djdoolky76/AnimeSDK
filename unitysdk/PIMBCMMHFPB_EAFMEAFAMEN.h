#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/System/Object.h"

class PIMBCMMHFPB;
namespace System { template <typename T1, typename T2> class Func_2; }

#define PIMBCMMHFPB_EAFMEAFAMEN_EGPNBCCKFMG_OFFSET UNITYSDK_OFFSET(0x1556A880)
#define PIMBCMMHFPB_EAFMEAFAMEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1556A870)

inline static constexpr unsigned int PIMBCMMHFPB_EAFMEAFAMEN_TypeDefinitionIndex = 71858;

class PIMBCMMHFPB_EAFMEAFAMEN : public ::System::Object
{
public:
	::System::Func_2<::NodeGraph::VariantUnion, ::System::Int32>* EACNBJIJJBP; // 0x10
	::PIMBCMMHFPB* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMBCMMHFPB_EAFMEAFAMEN__CTOR_OFFSET))(this);
	}

	::System::Int32 EGPNBCCKFMG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMBCMMHFPB_EAFMEAFAMEN_EGPNBCCKFMG_OFFSET))(this);
	}
};
