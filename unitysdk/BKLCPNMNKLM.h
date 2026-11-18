#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABCLPCFBFBO.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"

namespace System { class Action; }

#define BKLCPNMNKLM__CTOR_OFFSET UNITYSDK_OFFSET(0x18D9B3A0)

inline static constexpr unsigned int BKLCPNMNKLM_TypeDefinitionIndex = 64122;

class BKLCPNMNKLM : public ::ABCLPCFBFBO
{
public:
	::System::Action* CPKJJJLNHPM; // 0x10
	::System::Action* CJLPLBPFDOG; // 0x18
	::System::Action* CBLONGKPECM; // 0x20
	::System::Boolean LCGNHLHPDLE; // 0x28
	::System::Byte _padding0[0x3];
	::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType HNCANBIGBPH; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLCPNMNKLM__CTOR_OFFSET))(this);
	}
};
