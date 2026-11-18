#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/System/Object.h"

class FCANEPJMANL;
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define FCANEPJMANL_KEMPGOFICFK_KAKPCPAKBID_OFFSET UNITYSDK_OFFSET(0x14ABADA0)
#define FCANEPJMANL_KEMPGOFICFK__CTOR_OFFSET UNITYSDK_OFFSET(0x14ABAD90)

inline static constexpr unsigned int FCANEPJMANL_KEMPGOFICFK_TypeDefinitionIndex = 58643;

class FCANEPJMANL_KEMPGOFICFK : public ::System::Object
{
public:
	::FCANEPJMANL* KLHPEBKNIFB; // 0x10
	::System::Func_3<::NodeGraph::VariantUnion, ::System::Int32, ::System::Int32>* EACNBJIJJBP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCANEPJMANL_KEMPGOFICFK__CTOR_OFFSET))(this);
	}

	::System::Int32 KAKPCPAKBID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCANEPJMANL_KEMPGOFICFK_KAKPCPAKBID_OFFSET))(this);
	}
};
