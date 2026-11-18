#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime { class Behavior; }

#define EIMHGJELHGN_DAPNLHMMOED_BEKJEKENKFA_OFFSET UNITYSDK_OFFSET(0x16BEE760)
#define EIMHGJELHGN_DAPNLHMMOED__CTOR_OFFSET UNITYSDK_OFFSET(0x16BEDD10)

inline static constexpr unsigned int EIMHGJELHGN_DAPNLHMMOED_TypeDefinitionIndex = 73409;

class EIMHGJELHGN_DAPNLHMMOED : public ::System::Object
{
public:
	::MoleMole::EntityHandle HPADNAEINPK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_DAPNLHMMOED__CTOR_OFFSET))(this);
	}

	::System::Void BEKJEKENKFA(::BehaviorDesigner::Runtime::Behavior* FOPKPPMGLGH)
	{
		return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior*))((::PBYTE)hIl2Cpp + EIMHGJELHGN_DAPNLHMMOED_BEKJEKENKFA_OFFSET))(this, FOPKPPMGLGH);
	}
};
