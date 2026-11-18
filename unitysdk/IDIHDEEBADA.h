#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterCreateDataAnimatorParam.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define IDIHDEEBADA__CTOR_OFFSET UNITYSDK_OFFSET(0x3657B0)

inline static constexpr unsigned int IDIHDEEBADA_TypeDefinitionIndex = 40734;

struct alignas(8) IDIHDEEBADA
{
	::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* PIBLJKPFEHO; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* AKDDECNNFCH; // 0x18

	::System::Void _ctor(::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* BFGGOBLIOLD, ::System::Collections::Generic::List_1<::System::Int32>* PHEOLLJABMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + IDIHDEEBADA__CTOR_OFFSET))(this, BFGGOBLIOLD, PHEOLLJABMF);
	}
};
