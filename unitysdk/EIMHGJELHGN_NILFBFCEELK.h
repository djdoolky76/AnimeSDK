#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime { class BehaviorManager_BehaviorTree; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define EIMHGJELHGN_NILFBFCEELK_KHKIBLJDCGL_OFFSET UNITYSDK_OFFSET(0x1354CBD0)
#define EIMHGJELHGN_NILFBFCEELK__CTOR_OFFSET UNITYSDK_OFFSET(0x1354CBC0)

inline static constexpr unsigned int EIMHGJELHGN_NILFBFCEELK_TypeDefinitionIndex = 73408;

class EIMHGJELHGN_NILFBFCEELK : public ::System::Object
{
public:
	::System::Action_2<::System::UInt32, ::System::Boolean>* MLJIJKCCGKK; // 0x10
	::MoleMole::EntityHandle HPADNAEINPK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_NILFBFCEELK__CTOR_OFFSET))(this);
	}

	::System::Void KHKIBLJDCGL(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree* CLFBDPNCFML)
	{
		return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*))((::PBYTE)hIl2Cpp + EIMHGJELHGN_NILFBFCEELK_KHKIBLJDCGL_OFFSET))(this, CLFBDPNCFML);
	}
};
