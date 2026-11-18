#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class Graph; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { class Node; }

#define NKPIDPCALFP_JGLGJLJLGCK_OFFSET UNITYSDK_OFFSET(0x13766A40)
#define NKPIDPCALFP_LDKGEDFGDPG_OFFSET UNITYSDK_OFFSET(0x13766990)

inline static constexpr unsigned int NKPIDPCALFP_TypeDefinitionIndex = 85249;

class NKPIDPCALFP : public ::System::Object
{
public:
	static ::NodeCanvas::Framework::IBlackboard* LDKGEDFGDPG(::NodeCanvas::Framework::Node* HHIJHDFHPOI)
	{
		return ((::NodeCanvas::Framework::IBlackboard*(*)(::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + NKPIDPCALFP_LDKGEDFGDPG_OFFSET))(HHIJHDFHPOI);
	}

	static ::NodeCanvas::Framework::Graph* JGLGJLJLGCK(::NodeCanvas::Framework::Node* HHIJHDFHPOI)
	{
		return ((::NodeCanvas::Framework::Graph*(*)(::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + NKPIDPCALFP_JGLGJLJLGCK_OFFSET))(HHIJHDFHPOI);
	}
};
